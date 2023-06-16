## **Our ROS2swarm extensions**

A new robot type named "rosbot" has been added to ROS2swarm; when used in src/start_robot.sh, ROS2swarm will now launch only the hardware protection and sensor layers, and the specified swarm pattern. A docker file to launch a Husarion ROSBot Pro 2.0 robot is contained in src/ros2swarm/launch/docker.

To operate ROS2swarm on a single Husarion ROSBot Pro 2.0 robot swarm:

1. Install this fork of ROS2swarm on to the Husarion ROSBot Pro 2.0 robot using the Installation Guide at https://github.com/ROS2swarm/ROS2swarm/blob/master/INSTALL_GUIDE.md; Installation of TurtleBot3 Support is not required, but Installation of Thymio II Support is relevant because ROS2swarm seems to launch it even if not required. Note that the git repository mentioned under Installation of the ROS2swarm package needs to be this repository instead.
2. Bring up the Husarion ROSBot Pro 2.0 robot using launch scripts or Docker (see https://husarion.com/tutorials/howtostart/rosbot2pro-quick-start/#pulling-basic-docker-images-for-rosbot), ensuring that all nodes and topics are on ROS_DOMAIN_ID 0. It is currently not possible to namespace the robot because Micro-ROS does not currently support namespacing; changes to src/ros2swarm/ros2swarm/hardware_protection_layer.py, src/ros2swarm/ros2swarm/movement_pattern/movement_pattern.py have been made to ignore namespacing.
3. On the robot, execute src/start_robot.sh ensuring that the robot type is set to "rosbot"; this will avoid hardware launching as the robot is already launched in step 2.
4. Also on the robot, in another terminal, launch src/start_command.sh.

To operate ROS2swarm on a multiple Husarion ROSBot Pro 2.0 robot swarm (once Micro-ROS namespacing is available):

1. Install this fork of ROS2swarm on to each Husarion ROSBot Pro 2.0 robot using the Installation Guide at https://github.com/ROS2swarm/ROS2swarm/blob/master/INSTALL_GUIDE.md; Installation of TurtleBot3 Support is not required, but Installation of Thymio II Support is relevant because ROS2swarm seems to launch it even if not required. Note that the git repository mentioned under Installation of the ROS2swarm package needs to be this repository instead.
2. Bring up each Husarion ROSBot Pro 2.0 robot using launch scripts or Docker (see https://husarion.com/tutorials/howtostart/rosbot2pro-quick-start/#pulling-basic-docker-images-for-rosbot), ensuring that all nodes and topics are on ROS_DOMAIN_ID 0, and have been namespaced with "robot_namespace_" + robot_number, where robot_number is the number assigned to each robot in their respective start_robot.sh script. Changes to src/ros2swarm/ros2swarm/hardware_protection_layer.py, src/ros2swarm/ros2swarm/movement_pattern/movement_pattern.py to ignore namespacing will need to be reverted so that namespacing is recognised.
3. On each robot, execute src/start_robot.sh ensuring that the robot type is set to "rosbot"; this will avoid hardware launching as the robot is already launched in step 2.
4. Also on just one robot, in another terminal, launch src/start_command.sh.

