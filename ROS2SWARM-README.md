## **Manual ROS2swarm Version 1.2.0**

ROS2swarm is a ROS 2 (Dashing, Foxy) package that provides swarm behavior patterns. 
The project started at the **Institute of Computer Engineering** with support from the Institute of Robotics and the Institute for Electrical Engineering in Medicine of the **University of Lübeck, Germany**. 
Currently, it is mainly developed by the **Cyber-Physical Systems Group** of the **University Konstanz, Germany**. 

A list of all project contributors can be found [here](CONTRIBUTORS.md)

The current ROS2swarm version is 1.2.0.
 
The ICRA 2022 paper "ROS2swarm - A ROS 2 Package for Swarm Robot Behaviors" refers to version 1.0.0 (Dashing), which can be found [here](https://github.com/ROS2swarm/ROS2swarm/tree/ICRA22). 

<a name="about-ros2swarm"></a>
### **About ROS2swarm**

- [About ROS2swarm](#about-ros2swarm)
- [Installation guide](#installation_guide)
- [How to use ROS2swarm](#how-to-use)
- [Supported robot platforms](#supported-robots)
- [Existing patterns](#existing-patterns)
- [Sensor Layer](#sensor-layer)
- [Architecture](#architecture)
  - [Components of a pattern](#components_of_a_pattern)
  - [Launch script overview](#launch_script_overview)
    - [Simulation](#simulation)
    - [Robot](#robot)
  - [Package structure](#contained_packages)
- [Required software](#required_software)
- [Using the Thymio model and the modified TurtleBot3 models](#modified-models)

ROS2swarm is available for the ROS 2 Versions 
[Dashing (dashing-dev)](https://github.com/ROS2swarm/ROS2swarm/tree/dashing-dev), 
[Foxy (foxy-dev)](https://github.com/ROS2swarm/ROS2swarm/tree/foxy-dev), and 
[Galactic (galactic-dev)](https://github.com/ROS2swarm/ROS2swarm/tree/galactic-dev). 

The included swarm behavior patterns consist of movement and voting based [patterns](#existing-patterns). 
Basic patterns can be used by combined patterns to create more complex behaviors out of basic components. The behaviors are available for simulation and out of the box for several [supported robot platforms](#supported-robots). We provide [launch scripts](#launch_script_overview) and shell [scripts to start](#how-to-use) ROS2swarm.

<a name="installation_guide"></a>
### **Installation guide**

To see a full installation guide for the ROS2swarm package please see the [installation guide](INSTALL_GUIDE.md).

<a name="how-to-use"></a>
### **How to use ROS2swarm**

ROS2swarm provides launch scripts to start the patterns in a simulation or on real robots.
The parameters of the launch scripts, such as the robot type, can be set by editing the parameter sections of the following scripts. 

| Script                              | Function                                                                                                                                                                   |
|-------------------------------------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| start_simulation.sh                 | Start the Gazebo simulation with the desired *number of specified robots*. To start behavior execution, run start_command.sh script.                                                    |
| start_robot.sh                      | Start *one* physical robot. To start behavior execution, run the start_command.sh script.                                                                                          |
| start_command.sh                    | Starts behavior execution on *all* robots in the network. <br/>  ros2 topic pub --once /swarm_command communication_interfaces/msg/Int8Message "{data: 1}"                                                                                                             |
| scripts/add_robots_to_simulation.sh | Adds additional robots to the running Gazebo simulation. These can be of a different robot type providing an easy way to simulate heterogeneous swarms. |

<a name="supported-robots"></a>
### **Supported robot platforms**
ROS2swarm currently supports the following robot platforms out of the box:
* TurtleBot3 Waffle Pi (robot:=waffle\_pi; sensor\_type:=lidar)
* TurtleBot3 Burger (robot:=burger; sensor\_type:=lidar)
* Jackal UGV (robot:=jackal; sensor\_type:=lidar)
* Thymio II (robot:=waffle\_pi; sensor\_type:=ir)

<a name="existing-patterns"></a>
### **Existing patterns**

The following table gives an overview the current implemented patterns.
The patterns are separated into movement and voting patterns. 
Every pattern can either be a basic pattern or a combined one, which make use of one or more other patterns to create more complex behaviors.

| Pattern                       | Domain   | Type     | Simulation          | Robot              | Sensor Requirements             |
| ------                        | ------   | ------   | ------              | ------             | ------                          |
| aggregation                   | Movement | Basic    | :heavy_check_mark:  | :heavy_check_mark: | LiDAR or IR                     |
| attraction                    | Movement | Basic    | :heavy_check_mark:  | :heavy_check_mark: | LiDAR or IR                     |
| attraction 2                  | Movement | Basic    | :heavy_check_mark:  | :heavy_check_mark: | LiDAR or IR                     |
| dispersion                    | Movement | Basic    | :heavy_check_mark:  | :heavy_check_mark: | LiDAR or IR                     |
| drive                         | Movement | Basic    | :heavy_check_mark:  | :heavy_check_mark: |                                 |
| magnetometer                  | Movement | Basic    | :x:                 | :heavy_check_mark: |                                 |
| minimalist flocking           | Movement | Basic    | :heavy_check_mark:  | :heavy_check_mark: | LiDAR or IR                     |
| random walk                   | Movement | Basic    | :heavy_check_mark:  | :heavy_check_mark: |                                 |
| discussed dispersion pattern  | Movement | Combined | :heavy_check_mark:  | :heavy_check_mark: | LiDAR or IR                     |
| voter model                   | Voting   | Basic    | :heavy_check_mark:  | :heavy_check_mark: |                                 |
| majority rule                 | Voting   | Basic    | :heavy_check_mark:  | :heavy_check_mark: |                                 |

In addition, a hardware protection layer is started to prevent collisions.

<a name="sensor-layer"></a>
### **Sensor Layer**

ROS2swarm provides several sensor layers to enable the use of robots with different sensor setups: 

* lidar\_layer
* ir\_layer
* ir\_tf\_layer 

The sensor layer receives the sensor data from the respective sensors and transforms it to a RangeData message. 

```
std_msgs/Header header
float32[] ranges
float64[] angles
```

The RangeData message contains two arrays: (i) the measured distances or ranges and (ii) the angle of the measurement (e.g., position of IR sensor). 
The parameters of the sensor layer can be specified in the config file sensor\_specification.yaml. 
New sensor layers can be easily integrated. 

<a name="architecture"></a>
### **Architecture**

We give a short overview of the pattern components, the launch scripts and the packages of ROS2swarm.

<a name="components_of_a_pattern"></a>
#### **Components of a pattern**

A pattern consists of the behavior implementation itself, as well as configuration and launch files. 

| File                                                            | Function                                                                                 |
|-----------------------------------------------------------------|------------------------------------------------------------------------------------------|
| ros2swarm/pattern_domain/pattern_type/pattern_name.py           | The behavior logic of the pattern.                                                       |
| config/robot_type/pattern_domain/pattern_type/pattern_name.yaml | The parameter configuration for the pattern. There is one file for each robot type.      |
| launch/pattern_domain/pattern_type/pattern_name.launch.py       | The launch file starting the ROS node with the parameters specified in pattern_name.yaml.|

To add a new pattern, copy the files from any existing pattern, e.g., the drive pattern, and implement the desired behavior. 
Also remember to add the files of the new pattern to the setup.py and to register the main function of the new pattern there. 
The new pattern can be started via the start_*.sh scripts with the name defined in the setup.py.

<a name="launch_script_overview"></a>
#### **Launch script overview**
The provided launch scripts help the user to start ROS2swarm and to execute the desired behaviors. There are several scripts which are chained. In this section we explain their purpose and internal call order. We provide scripts both for starting desired swarm behaviors in simulation and on the real robots. 

<a name="simulation"></a>
##### **Simulation**

For robot types Thymio, TurtleBot3 Waffle Pi and TurtleBot3 Burger:

* start_simulation.sh - shell script to start up the Gazebo simulator and ROS2swarm 
  * launch_gazebo/launch/create_environment.launch.py - central simulation launch script which calls the other launch scripts 
    * launch_gazebo/launch/start_gazebo.launch.py - start the Gazebo simulator
    * launch_gazebo/launch_gazebo/add_bot_node.py - adds a Gazebo robot node for each robot
    * ros2swarm/launch/bringup_patterns.launch.py - manage the start of the pattern for each robot with its own namespace
      * ros2swarm/hardware_protection_layer.py - hardware protection layer node
      * ros2swarm/pattern_domain/pattern_type/pattern_name.launch.py - launch script for the pattern node
      * robot_state_publisher package - robot_state_publisher node

* scripts/add_robots_to_simulation.sh - shell script to add more robots to simulation
  * launch_gazebo/launch/add_robot.launch.py - allows adding additional robots to a simulation started by the create environment script (see above)
    * launch_gazebo/launch_gazebo/add_bot_node.py - adds a Gazebo robot node for each robot
    * ros2swarm/launch/bringup_patterns.launch.py - manage the start of the pattern for each robot with its own namespace
      * etc. as above

For robot type Jackal UGV:
* start a roscore 
* run the rosbridge: https://github.com/ros2/ros1_bridge
* start the jackal simulation: https://github.com/ROS2swarm/jackal-swarm-simulation
* start_simulation.sh - with robot:=jackal

<a name="robot"></a>
##### **Real Robots**

For robot types TurtleBot3 Waffle Pi and TurtleBot3 Burger:

* start_robot.sh - shell script to start up ROS2swarm on a single robot
  * ros2swarm/bringup_robot.launch.py - central robot launch script which adds the other launch scripts to the launch description
  * ros2swarm/turtlebot3_bringup.launch.py - starts the TurtleBot3 robot nodes and launch files

For robot type Jackal:
* start_robot.sh - shell script to start up ROS2swarm on a single robot with robot:=jackal
  * does not start the jackal counterpart, only provides subscribers and publishers of the behavior pattern 

<a name="contained_packages"></a>
#### **Package Structure**

ROS2swarm consists of three ROS packages:

* ros2swarm
    * The main package containing the behavior patterns and their configuration and launch files.
* launch_gazebo
    * Scripts to start the Gazebo simulation
* communication_interfaces
    * Interfaces for special ROS messages used by the patterns

<a name="required_software"></a>
### **Required software**

**Dashing Version**
* Ubuntu 18.04 LTS
* ROS 2 Dashing Diademata
* ROS 2 TurtleBot3 package
* Python 3.6
* Gazebo 9 for simulation

**Foxy Version**
* Ubuntu 20.04 LTS
* ROS 2 Foxy Fitzroy
* ROS 2 TurtleBot3 package 
* [ROS 2 Thymio package](http://jeguzzi.github.io/ros-aseba/) 
* Python 3.8.10
* Gazebo 11 for simulation

<a name="modified-models"></a>
### **Using the Thymio model and the modified TurtleBot3 models**

A Gazebo model for the Thymio~II robot is provided by us here: https://github.com/ROS2swarm/thymio_description 

In addition, ROS2swarm includes meshes for modified Turtlebot3 models. 

In the following the steps to use the models in Gazebo are described.


#### Thymio~II in Gazebo

1) download the thymio\_description package 
to
```
colcon_ws/src/
```
2) build colcon\_ws
```
cd ~/colcon_ws && colcon build --symlink-install
```
3) use robot selection parameter in start_*.sh 
```
robots:=thymio
sensor_type:=ir
```
4)
```
source ~/colcon_ws/install/setup.bash
```


#### Modified TurtleBot3 in Gazebo

To use the modified TurtleBot3 models, the models have to be copied to the workspace of the turtlebot3 package as described in the following. To select the standard Turtlebot3 Waffle Pi robot, use "waffle_pi" in the start scripts. To select a modified Turtlebot3 Waffle Pi version, use "waffle_pi_name_of_modification" in the start scripts. The mesh for Gazebo is then automatically selected when using the provided launch scripts. The same applies for the TurtleBot3 "burger" model.

To use the TurtleBot3 Burger, replace "waffle_pi" with "burger" in the following.

1) copy
```
models/turtlebot3_waffle_pi_name_of_modification
```
to
```
turtlebot3_ws/src/turtlebot3_simulations/turtlebot3_gazebo/models
```
2) copy
```
models/turtlebot3_waffle_pi_invisible_sensors.urdf
```
to
```
turtlebot3_ws/src/turtlebot3/turtlebot3_description
```
3) build turtlebot3_ws
```
cd ~/turtlebot3_ws && colcon build --symlink-install
```
4) use robot selection parameter in start_*.sh 
```
robots:=waffle_pi_name_of_modification
```
5)
```
source ~/turtlebot3_ws/install/setup.bash
```
