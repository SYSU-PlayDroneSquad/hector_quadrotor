# Install script for directory: /home/dcr/hector_quadrotor_ws/src

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
  
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
        file(MAKE_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
      endif()
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin")
        file(WRITE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin" "")
      endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/_setup_util.py")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local" TYPE PROGRAM FILES "/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/catkin_generated/installspace/_setup_util.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/env.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local" TYPE PROGRAM FILES "/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/catkin_generated/installspace/env.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/setup.bash;/usr/local/local_setup.bash")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local" TYPE FILE FILES
    "/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/catkin_generated/installspace/setup.bash"
    "/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/catkin_generated/installspace/local_setup.bash"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/setup.sh;/usr/local/local_setup.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local" TYPE FILE FILES
    "/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/catkin_generated/installspace/setup.sh"
    "/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/catkin_generated/installspace/local_setup.sh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/setup.zsh;/usr/local/local_setup.zsh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local" TYPE FILE FILES
    "/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/catkin_generated/installspace/setup.zsh"
    "/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/catkin_generated/installspace/local_setup.zsh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/.rosinstall")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local" TYPE FILE FILES "/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/catkin_generated/installspace/.rosinstall")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/gtest/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_models/hector_components_description/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_gazebo/hector_gazebo/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_gazebo/hector_gazebo_worlds/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_localization/hector_localization/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_models/hector_models/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_quadrotor/hector_quadrotor/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_quadrotor/hector_quadrotor_demo/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_quadrotor/hector_quadrotor_description/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_models/hector_sensors_description/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_gazebo/hector_sensors_gazebo/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_slam/hector_slam/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_slam/hector_slam_launch/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_models/hector_xacro_tools/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_quadrotor/hector_uav_msgs/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_slam/hector_map_tools/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_slam/hector_nav_msgs/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/ground_control_station/gazebo_worlds/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_slam/hector_geotiff/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_slam/hector_geotiff_plugins/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_slam/hector_marker_drawing/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_quadrotor/hector_quadrotor_model/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/ground_control_station/quadrotor_realsense/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_quadrotor/quadrotor_test/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/Onboard-SDK-ROS/dji_sdk/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/Onboard-SDK-ROS/dji_sdk_demo/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/ground_control_station/ground_control_station/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_slam/hector_compressed_map_transport/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_gazebo/hector_gazebo_plugins/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_slam/hector_imu_attitude_to_tf/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_slam/hector_imu_tools/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_slam/hector_map_server/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_localization/hector_pose_estimation_core/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_localization/hector_pose_estimation/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_quadrotor/hector_quadrotor_gazebo_plugins/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_quadrotor/hector_quadrotor_pose_estimation/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_slam/hector_trajectory_server/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_localization/message_to_tf/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_slam/hector_mapping/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_gazebo/hector_gazebo_thermal_camera/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_quadrotor/hector_quadrotor_interface/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_quadrotor/hector_quadrotor_actions/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_quadrotor/hector_quadrotor_controllers/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_quadrotor/hector_quadrotor_teleop/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_quadrotor/hector_quadrotor_controller_gazebo/cmake_install.cmake")
  include("/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/hector_quadrotor/hector_quadrotor_gazebo/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
