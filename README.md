# README

## 1. 概述

该软件包为 DJI 板载 SDK 提供 ROS 接口，使用户能够使用 ROS 消息和服务完全控制支持的平台（DJI M100、M600、M210 或配备 A3/N3 飞控的无人机）。

这个包依赖于 DJI SDK 核心库，可以在[这里](https://github.com/dji-sdk/Onboard-SDK)找到。

最新版本 3.4 和 3.5 引入了对 Matrice 210 和 210 RTK 的支持。开发人员现在可以通过 USB 访问以前不可用的数据，例如立体摄像头馈送（前置和向下）、FPV 摄像头流和主万向节摄像头流。M210 用户需要升级到最新固件 (1.1.0410) 才能使用 Onboard SDK 并下载最新的 DJI Assistant 2 (1.1.8) 进行仿真。

## 2. 仿真方面

### 2.1 主要 luanch 文件

- `quadrotor_realsense_woods.launch` 

  package: quadrotor_realsense

  带有 realsense 的 gazebo 木桩世界

  

  

- `spawn_one_realsense_uav.launch`

  package: quadrotor_realsense

  带有 realsense 的 gazebo 空世界

  

  

- `ground_control.launch` 

  package: ground_control_station

  启动地面站控制程序，两个参数，[uavNumbers] 要控制的无人机的数量，只能赋值数字，默认为 1。[dji_gazebo] 使用 gazebo 仿真，还是 控制 dji 无人机，只能赋值  dji，或者 gazebo，默认为 dji。

  示例：

  ```bash
  roslaunch ground_control_station  ground_control.launch  uavuavNumbers:=10 dji_gazebo:=dji 
  ```

- `spawn_one_quadrotor.launch`

  package: hector_quadrotor_gazebo

  生成一架无人机在 gazebo 空世界

  

- `spawn_quadrotors.launch`

  package: hector_quadrotor_gazebo

  生成 64 架无人机在 gazebo 空世界

### 2.2  无人机主要的 topic 订阅

​	只要生成包含控制器的无人机就会有的 topic 订阅：

- `/uav1/command/pose`

  控制基于机身坐标系的无人机的位置

  

- /uav1/cmd_vel

  控制基于机身坐标系的无人机的速度

### 2.3 主要的 topic 发布

- `/uav1/ground_truth_to_tf/pose`

  无人机里程计信息，位置和四元数



## 3. dji 方面

### 3.1 主要的 launch 文件

- sdk.launch

  package:dji_sdk

  ros 跟 dji 飞控通信必须启动的文件

### 3.2 订阅的 topic

- `/dji_sdk/flight_control_setpoint_generic` ( [sensor_msgs/Joy](http://docs.ros.org/en/api/sensor_msgs/html/msg/Joy.html) )

  通用设定点，其中轴 [0] 到轴 [3] 分别存储 2 个水平通道、垂直通道和偏航通道的设定点数据。设定点数据的含义将根据存储在轴 [4] 中的控制标志进行解释。

- `/dji_sdk/flight_control_setpoint_ENUposition_yaw` ( [sensor_msgs/Joy](http://docs.ros.org/en/api/sensor_msgs/html/msg/Joy.html) )

  指令ENU 地面坐标系中的 X、Y**位置偏移**、Z 位置（高度）和偏航角。

- `/dji_sdk/flight_control_setpoint_ENUvelocity_yawrate` ( [sensor_msgs/Joy](http://docs.ros.org/en/api/sensor_msgs/html/msg/Joy.html) )

  控制 ENU 地面坐标系中的 X、Y、Z 速度和偏航率。

- `/dji_sdk/flight_control_setpoint_rollpitch_yawrate_zposition` ([sensor_msgs/Joy](http://docs.ros.org/en/api/sensor_msgs/html/msg/Joy.html) )

  命令横滚俯仰角、高度和偏航率。

dji_sdk 的更多详情：http://wiki.ros.org/dji_sdk/



