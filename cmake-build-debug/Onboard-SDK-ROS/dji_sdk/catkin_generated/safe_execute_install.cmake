execute_process(COMMAND "/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/Onboard-SDK-ROS/dji_sdk/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/Onboard-SDK-ROS/dji_sdk/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
