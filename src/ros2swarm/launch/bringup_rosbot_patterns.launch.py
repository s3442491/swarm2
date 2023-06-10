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

    ld = LaunchDescription()
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
