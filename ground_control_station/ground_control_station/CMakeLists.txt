cmake_minimum_required(VERSION 3.0.2)
project(ground_control_station)

find_package(catkin REQUIRED COMPONENTS
        roscpp
        rospy
        std_msgs
        hector_uav_msgs
        Eigen3
        geometry_msgs
        dji_sdk
        )
find_package(DJIOSDK REQUIRED)

catkin_package(
        #  INCLUDE_DIRS include
        #  LIBRARIES ground_control_station
        #  CATKIN_DEPENDS roscpp rospy
        #  DEPENDS system_lib
)

include_directories(
        include
        ${catkin_INCLUDE_DIRS}
        ${EIGEN3_INCLUDE_DIR}
        dji_sdk/dji_sdk/dji_sdk.h
)

add_library(
        keyboard_control_lib
        include/HectorQuadrotor.h
        include/DjiController.h
        include/UavGroup.h
        src/keyboard_control.cpp
)


add_executable(keyboard_controller src/keyboard_control.cpp)
target_link_libraries(keyboard_controller keyboard_control_lib ${catkin_LIBRARIES} ${DJIOSDK_LIBRARIES})
#add_dependencies(dji_controller dji_sdk_generate_messages_cpp)
