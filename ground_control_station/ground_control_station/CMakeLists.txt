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

include_directories(
        include
        ${catkin_INCLUDE_DIRS}
        ${EIGEN3_INCLUDE_DIR}
        dji_sdk/dji_sdk/dji_sdk.h
)

catkin_package(
#          INCLUDE_DIRS include
#          LIBRARIES ground_control_station_lib
#          CATKIN_DEPENDS roscpp rospy hector_uav_msgs
#          DEPENDS system_lib
)



add_library(
        ground_control_station_lib
        include/HectorQuadrotor.h
        include/DjiController.h
        include/UavGroup.h
        src/ground_control_station.cpp
)


add_executable(ground_control_station src/ground_control_station.cpp)
target_link_libraries(ground_control_station ground_control_station_lib ${catkin_LIBRARIES} ${DJIOSDK_LIBRARIES})
add_dependencies(ground_control_station hector_uav_msgs_generate_messages_cpp)
