from geometry_msgs.msg import Twist, Point, Pose
from nav_msgs.msg import Odometry
from ros2swarm.movement_pattern.movement_pattern import MovementPattern
from ros2swarm.utils import setup_node
import numpy as np
# from rclpy.qos import qos_profile_sensor_data
from math import atan2

'''
This pattern directs a swarm robot toward a target goal.
'''
class DemoPattern(MovementPattern):
    def __init__(self):
        """Initialize the demo pattern."""
        super().__init__('demo_pattern')

        self.declare_parameters(
            namespace='',
            parameters=[
                ('use_timer', False),
                ('timer_period', 1.0),
                ('goal_x', 10.0),
                ('goal_y', 10.0),
                ('twist_linear_x', 0.5),
                ('twist_angular_z', 0.3)
            ]
        )
        # Create a timer that calls timer_callback every timer_period.
        timer_period = float(self.get_parameter("timer_period").get_parameter_value().double_value)
        if (self.get_parameter("use_timer")):
            self.timer = self.create_timer(timer_period, self.swarm_command_controlled_timer(self.timer_callback))
        self.i = 0
        # Initialise the target goal.
        self.goal = Point()
        self.goal.x = float(self.get_parameter("goal_x").get_parameter_value().double_value)
        self.goal.y = float(self.get_parameter("goal_y").get_parameter_value().double_value)
        # Initialise twist parameters.
        self.twist_linear_x = float(self.get_parameter("twist_linear_x").get_parameter_value().double_value)
        self.twist_angular_z = float(self.get_parameter("twist_angular_z").get_parameter_value().double_value)
        self.param_x = 0.0
        self.param_z = 0.0
        # Create a subscription to odometry that is handled by odom_callback.
        self.range_data_subscription = self.create_subscription(
            Odometry,
            # self.get_namespace() + '/odom',
            '/odom',
            self.swarm_command_controlled(self.odom_callback),
            qos_profile = 1
        )
        self.get_logger().warn('Logger is: ' + self.get_logger().get_effective_level().name)
        self.get_logger().info('Logger is: info ')
        self.get_logger().debug('Logger is: debug')

    def euler_from_quaternion(self, quaternion):
        """
        Converts quaternion (w in last place) to euler (roll, pitch, yaw) where quaternion = [x, y, z, w].
        Sourced from: https://gist.github.com/salmagro/2e698ad4fbf9dae40244769c5ab74434.
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
        '''
        Whenever odometry is received, the swarm robot will calculate the angle to the goal position (from the robot position),
        as well as the roll, pitch, and theta from the quaternion (orientation).
        If the robot is very close to the goal position, the robot will remain stationary.
        Else if the absolute difference between the angle to the goal and theta is greater than 0.1, then rotate the robot anti-clockwise.
        Else move the robot towards the goal. 
        '''
        pose: Pose = odometry.pose.pose
        self.get_logger().info('pose {}:"{}"'.format(self.i, pose))
        position: Point = pose.position
        rot_q = pose.orientation
        (roll, pitch, theta) = self.euler_from_quaternion(rot_q)
        inc_x = self.goal.x - position.x
        inc_y = self.goal.y - position.y
        angle_to_goal = atan2(inc_y, inc_x)
        self.get_logger().info('angle_to_goal {}:"{}"'.format(self.i, angle_to_goal))
        self.get_logger().info('theta {}:"{}"'.format(self.i, theta))
        if abs(inc_x) < 0.1 and abs(inc_y) < 0.1:
            self.param_x = 0.0
            self.param_z = 0.0
        elif abs(angle_to_goal - theta) > 0.1:
            self.param_x = 0.0
            self.param_z = self.twist_angular_z
        else:
            self.param_x = self.twist_linear_x
            self.param_z = 0.0
        twist = Twist()
        twist.linear.x = self.param_x
        twist.angular.z = self.param_z
        self.command_publisher.publish(twist)
        self.get_logger().info('publishing {}:"{}"'.format(self.i, twist))
        self.i += 1

    def timer_callback(self):
        twist = Twist()
        twist.linear.x = self.param_x
        twist.angular.z = self.param_z
        self.command_publisher.publish(twist)
        self.get_logger().info('publishing {}:"{}"'.format(self.i, twist))
        self.i += 1

def main(args=None):
    """
    Create a node for the demo pattern, spin it and handle the setup.
    """
    setup_node.init_and_spin(args, DemoPattern)

if __name__ == '__main__':
    main()
