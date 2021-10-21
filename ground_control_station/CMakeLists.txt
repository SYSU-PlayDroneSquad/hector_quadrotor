cmake_minimum_required(VERSION 2.8.3)
project(ground_control_station)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  hector_uav_msgs
  message_generation
)

find_package(Eigen3)
include_directories(
        include
        ${catkin_INCLUDE_DIRS}
        ${EIGEN3_INCLUDE_DIR}
)

generate_messages(
  DEPENDENCIES
  std_msgs
)


# 链接.hpp和.cpp文件
add_library(
        ground_lib          ##自定义的链接库名，后面用来识别
        include/Quadrotor.h          ##.hpp的路径
        )

# 第一个是可执行文件的文件名，后面是源，可以多个，用空格隔开
add_executable(keyboard_controller src/keyboard_controller.cpp)

# 可执行文件所需的链接库，第一个可执行文件名，后面为链接库，可多个，用空格隔开
target_link_libraries(keyboard_controller ground_lib ${catkin_LIBRARIES})




catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES ground_control_station
#  CATKIN_DEPENDS roscpp rospy std_msgs
#  DEPENDS system_lib
)



###########
## Build ##
###########

## Specify additional locations of header files
## Your package locations should be listed before other locations


catkin_install_python(PROGRAMS scripts/keyboard_control_hector.py
  DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)


