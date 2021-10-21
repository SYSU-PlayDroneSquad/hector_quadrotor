# Install script for directory: /home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dji_osdk_ros/msg" TYPE FILE FILES
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/FCTimeInUTC.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/JoystickParams.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/GPSUTC.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/Gimbal.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/Waypoint.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/WaypointList.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/WaypointV2AircraftControlActuatorFlying.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/WaypointV2AircraftControlActuatorRotateHeading.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/WaypointV2AircraftControlActuator.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/WaypointV2AssociateTrigger.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/WaypointV2CameraActuatorFocalLengthParam.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/WaypointV2CameraActuatorFocusParam.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/WaypointV2CameraActuator.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/WaypointV2Config.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/WaypointV2GimbalActuatorRotationParam.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/WaypointV2GimbalActuator.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/WaypointV2InitSetting.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/WaypointV2IntervalTrigger.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/WaypointV2ReachpointTrigger.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/WaypointV2SampleReachPointTrigger.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/WaypointV2TrajectoryTrigger.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/WaypointV2Action.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/WaypointV2.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/WaypointV2MissionEventPush.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/WaypointV2MissionStatePush.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/MobileData.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/PayloadData.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/MissionWaypointAction.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/MissionWaypoint.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/MissionWaypointTask.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/MissionHotpointTask.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/FlightAnomaly.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/VOPosition.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/BatteryState.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/BatteryWholeInfo.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/SmartBatteryState.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/SmartBatteryDynamicInfo.msg"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/msg/HMSPushInfo.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dji_osdk_ros/srv" TYPE FILE FILES
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/GetDroneType.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/GetM300StereoParams.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/FlightTaskControl.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/SetJoystickMode.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/JoystickAction.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/ObtainControlAuthority.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/KillSwitch.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/EmergencyBrake.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/GimbalAction.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/CameraEV.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/CameraShutterSpeed.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/CameraAperture.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/CameraISO.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/CameraFocusPoint.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/CameraTapZoomPoint.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/CameraSetZoomPara.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/CameraZoomCtrl.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/CameraStartShootSinglePhoto.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/CameraStartShootBurstPhoto.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/CameraStartShootAEBPhoto.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/CameraStartShootIntervalPhoto.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/CameraStopShootPhoto.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/CameraRecordVideoAction.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/GetWholeBatteryInfo.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/GetSingleBatteryDynamicInfo.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/MFIO.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/SetGoHomeAltitude.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/GetGoHomeAltitude.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/SetCurrentAircraftLocAsHomePoint.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/SetHomePoint.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/SetupCameraH264.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/SetAvoidEnable.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/GetAvoidEnable.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/InitWaypointV2Setting.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/UploadWaypointV2Mission.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/UploadWaypointV2Action.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/DownloadWaypointV2Mission.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/StartWaypointV2Mission.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/StopWaypointV2Mission.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/PauseWaypointV2Mission.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/ResumeWaypointV2Mission.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/GenerateWaypointV2Action.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/SetGlobalCruisespeed.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/GetGlobalCruisespeed.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/GetHMSData.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/SubscribeWaypointV2Event.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/SubscribeWaypointV2State.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/Activation.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/CameraAction.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/DroneTaskControl.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/SDKControlAuthority.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/SetLocalPosRef.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/MFIOConfig.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/MFIOSetValue.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/DroneArmControl.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/MissionStatus.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/MissionWpAction.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/MissionHpAction.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/MissionWpUpload.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/MissionWpSetSpeed.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/MissionWpGetSpeed.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/MissionWpGetInfo.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/MissionHpUpload.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/MissionHpGetInfo.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/MissionHpUpdateYawRate.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/MissionHpUpdateRadius.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/MissionHpResetYaw.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/SendMobileData.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/SendPayloadData.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/SetHardSync.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/QueryDroneVersion.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/Stereo240pSubscription.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/StereoVGASubscription.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/StereoDepthSubscription.srv"
    "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/srv/SetupCameraStream.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dji_osdk_ros/cmake" TYPE FILE FILES "/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/Onboard-SDK-ROS/catkin_generated/installspace/dji_osdk_ros-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/devel/include/dji_osdk_ros")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/devel/share/roseus/ros/dji_osdk_ros")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/devel/share/common-lisp/ros/dji_osdk_ros")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/devel/share/gennodejs/ros/dji_osdk_ros")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python2" -m compileall "/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/devel/lib/python2.7/dist-packages/dji_osdk_ros")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/devel/lib/python2.7/dist-packages/dji_osdk_ros")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/Onboard-SDK-ROS/catkin_generated/installspace/dji_osdk_ros.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dji_osdk_ros/cmake" TYPE FILE FILES "/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/Onboard-SDK-ROS/catkin_generated/installspace/dji_osdk_ros-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dji_osdk_ros/cmake" TYPE FILE FILES
    "/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/Onboard-SDK-ROS/catkin_generated/installspace/dji_osdk_rosConfig.cmake"
    "/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/Onboard-SDK-ROS/catkin_generated/installspace/dji_osdk_rosConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dji_osdk_ros" TYPE FILE FILES "/home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/Onboard-SDK-ROS/src/cmake_install.cmake")

endif()

