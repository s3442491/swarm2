#!/usr/bin/env python3
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

import launch_ros.actions
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution

def generate_launch_description():
    """Bring up all needed hardware protection patterns and the behaviour pattern."""
    config_dir = LaunchConfiguration('config_dir', default='config_dir_default')
    robot_namespace = LaunchConfiguration('robot_namespace', default='robot_namespace_default')
    pattern = LaunchConfiguration('pattern', default='pattern_default')
    robot_type = LaunchConfiguration('robot_type', default='robot_type_default')
    log_level = LaunchConfiguration('log_level', default='debug')
    
    ld = LaunchDescription()
    # TODO: Launch robot hardware
    rplidar_node = launch_ros.actions.Node(
    )
    ld.add_action(rplidar_node)
    microros_node = launch_ros.actions.Node(
    )
    ld.add_action(microros_node)
    rosbot_node = launch_ros.actions.Node(
    )
    ld.add_action(rosbot_node)
    '''
    services:
        rplidar:
            image: husarion/rplidar:humble
            container_name: rplidar
            restart: unless-stopped
            devices:
            - ${LIDAR_SERIAL:?err}:/dev/ttyUSB0
            environment:
            - RMW_IMPLEMENTATION
            command: >
                ros2 launch sllidar_ros2 sllidar_launch.py
                serial_baudrate:=${RPLIDAR_BAUDRATE:-256000} __ns:=robot1
        microros:
            image: husarion/micro-ros-agent:humble
            container_name: microros
            restart: unless-stopped
            devices:
            - ${SERIAL_PORT:?err}
            environment:
            - RMW_IMPLEMENTATION=rmw_fastrtps_cpp
            command: ros2 run micro_ros_agent micro_ros_agent serial -D $SERIAL_PORT serial -b 576000 __ns:=robot1 # -v6
        rosbot:
            image: husarion/rosbot:humble
            container_name: rosbot
            restart: unless-stopped
            environment:
            - RMW_IMPLEMENTATION
            command: ros2 launch rosbot_bringup bringup.launch.py __ns:=robot1
    '''
    # Add sensor layer
    ros2_sensor_layer_node = launch_ros.actions.Node(
        package='ros2swarm',
        executable=['lidar_layer'],
        namespace=robot_namespace,
        output='screen',
        parameters=[PathJoinSubstitution([config_dir, 'sensor_specification' + '.yaml'])],
        arguments=['--ros-args', '--log-level', log_level]
    )
    ld.add_action(ros2_sensor_layer_node)
    # Add hardware protection layer
    ros2_hardware_protection_layer_node = launch_ros.actions.Node(
        package='ros2swarm',
        executable='hardware_protection_layer',
        namespace=robot_namespace,
        output='screen',
        parameters=[PathJoinSubstitution([config_dir, 'hardware_protection_layer' + '.yaml'])],
        arguments=['--ros-args', '--log-level', log_level]
    )
    ld.add_action(ros2_hardware_protection_layer_node)
    # Add pattern
    launch_pattern = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([pattern]),
        launch_arguments={'robot': robot_type,
                          'robot_namespace': [robot_namespace],
                          'config_dir': config_dir,
                         }.items(),

    )
    ld.add_action(launch_pattern)
    return ld
