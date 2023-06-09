#    Copyright 2020 Marian Begemann
#
#    Licensed under the Apache License, Version 2.0 (the "License");
#    you may not use this file except in compliance with the License.
#    You may obtain a copy of the License at
#
#        http://www.apache.org/licenses/LICENSE-2.0
#
#    Unless required by applicable law or agreed to in writing, software
#    distributed under the License is distributed on an "AS IS" BASIS,
#    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#    See the License for the specific language governing permissions and
#    limitations under the License.
from geometry_msgs.msg import Twist, Point, Pose
from nav_msgs.msg import Odometry
from ros2swarm.movement_pattern.movement_pattern import MovementPattern
from ros2swarm.utils import setup_node
import numpy as np
from rclpy.qos import qos_profile_sensor_data
import time
from geometry_msgs.msg import PoseStamped
from rclpy.duration import Duration
import rclpy

import time
from action_msgs.msg import GoalStatus
from geometry_msgs.msg import Pose
from geometry_msgs.msg import PoseWithCovarianceStamped
from lifecycle_msgs.srv import GetState
from nav2_msgs.action import NavigateToPose
import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from rclpy.qos import QoSDurabilityPolicy, QoSHistoryPolicy, QoSReliabilityPolicy
from rclpy.qos import QoSProfile

from math import atan2

class BasicNavigator(Node):
    def __init__(self):
        super().__init__(node_name='basic_navigator')
        self.initial_pose = Pose()
        self.goal_handle = None
        self.result_future = None
        self.feedback = None
        self.status = None

        amcl_pose_qos = QoSProfile(
          durability=QoSDurabilityPolicy.TRANSIENT_LOCAL,
          reliability=QoSReliabilityPolicy.RELIABLE,
          history=QoSHistoryPolicy.KEEP_LAST,
          depth=1)

        self.initial_pose_received = False
        self.nav_to_pose_client = ActionClient(self, NavigateToPose, 'navigate_to_pose')
        self.model_pose_sub = self.create_subscription(PoseWithCovarianceStamped, 'amcl_pose', self._amclPoseCallback, amcl_pose_qos)
        self.initial_pose_pub = self.create_publisher(PoseWithCovarianceStamped, 'initialpose', 10)

    def setInitialPose(self, initial_pose):
        self.initial_pose_received = False
        self.initial_pose = initial_pose
        self._setInitialPose()

    def goToPose(self, pose):
        # Sends a `NavToPose` action request and waits for completion
        self.debug("Waiting for 'NavigateToPose' action server")
        while not self.nav_to_pose_client.wait_for_server(timeout_sec=1.0):
            self.info("'NavigateToPose' action server not available, waiting...")

        goal_msg = NavigateToPose.Goal()
        goal_msg.pose = pose

        self.info('Navigating to goal: ' + str(pose.pose.position.x) + ' ' + str(pose.pose.position.y) + '...')
        send_goal_future = self.nav_to_pose_client.send_goal_async(goal_msg, self._feedbackCallback)
        rclpy.spin_until_future_complete(self, send_goal_future)
        self.goal_handle = send_goal_future.result()

        if not self.goal_handle.accepted:
            self.error('Goal to ' + str(pose.pose.position.x) + ' ' + str(pose.pose.position.y) + ' was rejected!')
            return False

        self.result_future = self.goal_handle.get_result_async()
        return True

    def cancelNav(self):
        self.info('Canceling current goal.')
        if self.result_future:
            future = self.goal_handle.cancel_goal_async()
            rclpy.spin_until_future_complete(self, future)
        return

    def isNavComplete(self):
        if not self.result_future:
            # task was cancelled or completed
            return True
        rclpy.spin_until_future_complete(self, self.result_future, timeout_sec=0.10)
        if self.result_future.result():
            self.status = self.result_future.result().status
            if self.status != GoalStatus.STATUS_SUCCEEDED:
                self.info('Goal with failed with status code: {0}'.format(self.status))
                return True
        else:
            # Timed out, still processing, not complete yet
            return False

        self.info('Goal succeeded!')
        return True

    def getFeedback(self):
        return self.feedback

    def getResult(self):
        return self.status

    def waitUntilNav2Active(self):
        # self._waitForNodeToActivate('amcl')
        # self._waitForInitialPose()
        self._waitForNodeToActivate('bt_navigator')
        self.info('Nav2 is ready for use!')
        return

    def _waitForNodeToActivate(self, node_name):
        # Waits for the node within the tester namespace to become active
        self.debug('Waiting for ' + node_name + ' to become active..')
        node_service = node_name + '/get_state'
        state_client = self.create_client(GetState, node_service)
        while not state_client.wait_for_service(timeout_sec=1.0):
            self.info(node_service + ' service not available, waiting...')

        req = GetState.Request()
        state = 'unknown'
        while (state != 'active'):
            self.debug('Getting ' + node_name + ' state...')
            future = state_client.call_async(req)
            rclpy.spin_until_future_complete(self, future)
            if future.result() is not None:
                state = future.result().current_state.label
                self.debug('Result of get_state: %s' % state)
            time.sleep(2)
        return

    def _waitForInitialPose(self):
        while not self.initial_pose_received:
            self.info('Setting initial pose')
            self._setInitialPose()
            self.info('Waiting for amcl_pose to be received')
            rclpy.spin_once(self, timeout_sec=1)
        return

    def _amclPoseCallback(self, msg):
        self.initial_pose_received = True
        return

    def _feedbackCallback(self, msg):
        self.feedback = msg.feedback
        return

    def _setInitialPose(self):
        msg = PoseWithCovarianceStamped()
        msg.pose.pose = self.initial_pose
        msg.header.frame_id = 'map'
        msg.header.stamp = self.get_clock().now().to_msg()
        self.info('Publishing Initial Pose')
        self.initial_pose_pub.publish(msg)
        return

    def info(self, msg):
        self.get_logger().info(msg)
        return

    def warn(self, msg):
        self.get_logger().warn(msg)
        return

    def error(self, msg):
        self.get_logger().error(msg)
        return

    def debug(self, msg):
        self.get_logger().debug(msg)
        return

class DemoPattern(MovementPattern):
    def __init__(self):
        """Initialize the demo pattern."""
        super().__init__('demo_pattern')

        self.declare_parameters(
            namespace='',
            parameters=[
                ('demo_timer_period', None)
            ]
        )
        timer_period = float(self.get_parameter("demo_timer_period").get_parameter_value().double_value)
        # self.timer = self.create_timer(timer_period, self.swarm_command_controlled_timer(self.timer_callback))
        self.i = 0
        self.goal = Point()
        self.goal.x = 2.0
        self.goal.y = 2.0
        self.param_x = 0.0
        self.param_z = 0.0
        self.range_data_subscription = self.create_subscription(
            Odometry,
            self.get_namespace() + '/odom',
            self.swarm_command_controlled(self.odom_callback),
            qos_profile = qos_profile_sensor_data
        )
        self.get_logger().warn('Logger is: ' + self.get_logger().get_effective_level().name)
        self.get_logger().info('Logger is: info ')
        self.get_logger().debug('Logger is: debug')

        '''navigator = BasicNavigator()
        # Wait for navigation to fully activate
        navigator.waitUntilNav2Active()
        initial_pose = Pose()
        initial_pose.position.x = 3.45
        initial_pose.position.y = 2.15
        initial_pose.orientation.z = 1.0
        initial_pose.orientation.w = 0.0
        navigator.setInitialPose(initial_pose)
        goal_pose = PoseStamped()
        goal_pose.header.frame_id = 'map'
        goal_pose.header.stamp = navigator.get_clock().now().to_msg()
        goal_pose.pose.position.x = -2.0
        goal_pose.pose.position.y = -0.5
        goal_pose.pose.orientation.w = 1.0
        navigator.goToPose(goal_pose)

        i = 0
        while not navigator.isNavComplete():
            ################################################
            #
            # Implement some code here for your application!
            #
            ################################################

            # Do something with the feedback
            i = i + 1
            feedback = navigator.getFeedback()
            if feedback and i % 5 == 0:
                print('Estimated time of arrival: ' + '{0:.0f}'.format(Duration.from_msg(feedback.estimated_time_remaining).nanoseconds / 1e9)  + ' seconds.')
                # Some navigation timeout to demo cancellation
                if Duration.from_msg(feedback.navigation_time) > Duration(seconds=600.0):
                    navigator.cancelNav()

        # Do something depending on the return code
        result = navigator.getResult()
        if result == GoalStatus.STATUS_SUCCEEDED:
            print('Goal succeeded!')
        elif result == GoalStatus.STATUS_CANCELED:
            print('Goal was canceled!')
        elif result == GoalStatus.STATUS_ABORTED:
            print('Goal failed!')
        else:
            print('Goal has an invalid return status!')

        exit(0)'''    

    def target(self, r_i, T):
        """
        Calculates a nondimensional contribution
        based on the "target algorithm"

        https://en.m.wikipedia.org/wiki/Proportional_control ??

        Parameters
        ----------
        r_i : numpy.array
            array must have the robot position in cartesian
            coordinates (i.e. np.asarray([x, y, z])).

        T : numpy.array
            array must have the target position in
            cartesian coordinates (i.e. np.asarray([x, y, z])).

        Returns
        -------
        b_T : numpy.array
            array containing contribution
        """

        b_T = (T - r_i) / np.linalg.norm(T - r_i)
        return b_T

    def euler_from_quaternion(self, quaternion):
        """
        Converts quaternion (w in last place) to euler roll, pitch, yaw
        quaternion = [x, y, z, w]
        Bellow should be replaced when porting for ROS 2 Python tf_conversions is done.

        https://gist.github.com/salmagro/2e698ad4fbf9dae40244769c5ab74434
        """
        x = quaternion.x
        y = quaternion.y
        z = quaternion.z
        w = quaternion.w
        sinr_cosp = 2 * (w * x + y * z)
        cosr_cosp = 1 - 2 * (x * x + y * y)
        roll = np.arctan2(sinr_cosp, cosr_cosp)
        sinp = 2 * (w * y - z * x)
        pitch = np.arcsin(sinp)
        siny_cosp = 2 * (w * z + x * y)
        cosy_cosp = 1 - 2 * (y * y + z * z)
        yaw = np.arctan2(siny_cosp, cosy_cosp)
        return roll, pitch, yaw

    def odom_callback(self, odometry: Odometry):
        pose: Pose = odometry.pose.pose
        self.get_logger().info('pose {}:"{}"'.format(self.i, pose))
        position: Point = pose.position
        global x
        global y
        global theta
        x = position.x
        y = position.y
        rot_q = pose.orientation
        (roll, pitch, theta) = self.euler_from_quaternion(rot_q)
        inc_x = self.goal.x - x
        inc_y = self.goal.y - y
        angle_to_goal = atan2(inc_y, inc_x)
        self.get_logger().info('angle_to_goal {}:"{}"'.format(self.i, angle_to_goal))
        self.get_logger().info('theta {}:"{}"'.format(self.i, theta))
        if abs(angle_to_goal - theta) > 0.1:
            self.param_x = 0.0
            self.param_z = 0.3
        else:
            self.param_x = 0.5
            self.param_z = 0.0
        twist = Twist()
        twist.linear.x = self.param_x
        twist.angular.z = self.param_z
        self.command_publisher.publish(twist)
        self.get_logger().info('publishing {}:"{}"'.format(self.i, twist))
        self.i += 1

    x = 0.0
    y = 0.0 
    theta = 0.0

    def timer_callback(self):
        twist = Twist()
        twist.linear.x = self.param_x
        twist.angular.z = self.param_z
        self.command_publisher.publish(twist)
        self.get_logger().info('Publishing {}:"{}"'.format(self.i, twist))
        self.i += 1

def main(args=None):
    """
    Create a node for the demo pattern, spin it and handle the setup.
    """
    setup_node.init_and_spin(args, DemoPattern)

if __name__ == '__main__':
    main()
