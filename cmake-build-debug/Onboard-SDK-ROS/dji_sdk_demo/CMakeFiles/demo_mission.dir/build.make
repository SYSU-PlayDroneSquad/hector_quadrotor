# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/clion-2021.1.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /usr/bin/clion-2021.1.3/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/dcr/hector_quadrotor_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dcr/hector_quadrotor_ws/src/cmake-build-debug

# Include any dependencies generated for this target.
include Onboard-SDK-ROS/dji_sdk_demo/CMakeFiles/demo_mission.dir/depend.make

# Include the progress variables for this target.
include Onboard-SDK-ROS/dji_sdk_demo/CMakeFiles/demo_mission.dir/progress.make

# Include the compile flags for this target's objects.
include Onboard-SDK-ROS/dji_sdk_demo/CMakeFiles/demo_mission.dir/flags.make

Onboard-SDK-ROS/dji_sdk_demo/CMakeFiles/demo_mission.dir/src/demo_mission.cpp.o: Onboard-SDK-ROS/dji_sdk_demo/CMakeFiles/demo_mission.dir/flags.make
Onboard-SDK-ROS/dji_sdk_demo/CMakeFiles/demo_mission.dir/src/demo_mission.cpp.o: ../Onboard-SDK-ROS/dji_sdk_demo/src/demo_mission.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Onboard-SDK-ROS/dji_sdk_demo/CMakeFiles/demo_mission.dir/src/demo_mission.cpp.o"
	cd /home/dcr/hector_quadrotor_ws/src/cmake-build-debug/Onboard-SDK-ROS/dji_sdk_demo && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/demo_mission.dir/src/demo_mission.cpp.o -c /home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/dji_sdk_demo/src/demo_mission.cpp

Onboard-SDK-ROS/dji_sdk_demo/CMakeFiles/demo_mission.dir/src/demo_mission.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/demo_mission.dir/src/demo_mission.cpp.i"
	cd /home/dcr/hector_quadrotor_ws/src/cmake-build-debug/Onboard-SDK-ROS/dji_sdk_demo && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/dji_sdk_demo/src/demo_mission.cpp > CMakeFiles/demo_mission.dir/src/demo_mission.cpp.i

Onboard-SDK-ROS/dji_sdk_demo/CMakeFiles/demo_mission.dir/src/demo_mission.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/demo_mission.dir/src/demo_mission.cpp.s"
	cd /home/dcr/hector_quadrotor_ws/src/cmake-build-debug/Onboard-SDK-ROS/dji_sdk_demo && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/dji_sdk_demo/src/demo_mission.cpp -o CMakeFiles/demo_mission.dir/src/demo_mission.cpp.s

# Object files for target demo_mission
demo_mission_OBJECTS = \
"CMakeFiles/demo_mission.dir/src/demo_mission.cpp.o"

# External object files for target demo_mission
demo_mission_EXTERNAL_OBJECTS =

devel/lib/dji_sdk_demo/demo_mission: Onboard-SDK-ROS/dji_sdk_demo/CMakeFiles/demo_mission.dir/src/demo_mission.cpp.o
devel/lib/dji_sdk_demo/demo_mission: Onboard-SDK-ROS/dji_sdk_demo/CMakeFiles/demo_mission.dir/build.make
devel/lib/dji_sdk_demo/demo_mission: /opt/ros/melodic/lib/libimage_transport.so
devel/lib/dji_sdk_demo/demo_mission: /opt/ros/melodic/lib/libmessage_filters.so
devel/lib/dji_sdk_demo/demo_mission: /opt/ros/melodic/lib/libclass_loader.so
devel/lib/dji_sdk_demo/demo_mission: /usr/lib/libPocoFoundation.so
devel/lib/dji_sdk_demo/demo_mission: /usr/lib/x86_64-linux-gnu/libdl.so
devel/lib/dji_sdk_demo/demo_mission: /opt/ros/melodic/lib/libroscpp.so
devel/lib/dji_sdk_demo/demo_mission: /opt/ros/melodic/lib/librosconsole.so
devel/lib/dji_sdk_demo/demo_mission: /opt/ros/melodic/lib/librosconsole_log4cxx.so
devel/lib/dji_sdk_demo/demo_mission: /opt/ros/melodic/lib/librosconsole_backend_interface.so
devel/lib/dji_sdk_demo/demo_mission: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
devel/lib/dji_sdk_demo/demo_mission: /usr/lib/x86_64-linux-gnu/libboost_regex.so
devel/lib/dji_sdk_demo/demo_mission: /opt/ros/melodic/lib/libxmlrpcpp.so
devel/lib/dji_sdk_demo/demo_mission: /opt/ros/melodic/lib/libroslib.so
devel/lib/dji_sdk_demo/demo_mission: /opt/ros/melodic/lib/librospack.so
devel/lib/dji_sdk_demo/demo_mission: /usr/lib/x86_64-linux-gnu/libpython2.7.so
devel/lib/dji_sdk_demo/demo_mission: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
devel/lib/dji_sdk_demo/demo_mission: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
devel/lib/dji_sdk_demo/demo_mission: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
devel/lib/dji_sdk_demo/demo_mission: /opt/ros/melodic/lib/libroscpp_serialization.so
devel/lib/dji_sdk_demo/demo_mission: /opt/ros/melodic/lib/librostime.so
devel/lib/dji_sdk_demo/demo_mission: /opt/ros/melodic/lib/libcpp_common.so
devel/lib/dji_sdk_demo/demo_mission: /usr/lib/x86_64-linux-gnu/libboost_system.so
devel/lib/dji_sdk_demo/demo_mission: /usr/lib/x86_64-linux-gnu/libboost_thread.so
devel/lib/dji_sdk_demo/demo_mission: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
devel/lib/dji_sdk_demo/demo_mission: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
devel/lib/dji_sdk_demo/demo_mission: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
devel/lib/dji_sdk_demo/demo_mission: /usr/lib/x86_64-linux-gnu/libpthread.so
devel/lib/dji_sdk_demo/demo_mission: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4
devel/lib/dji_sdk_demo/demo_mission: /usr/local/lib/libdjiosdk-core.a
devel/lib/dji_sdk_demo/demo_mission: Onboard-SDK-ROS/dji_sdk_demo/CMakeFiles/demo_mission.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../devel/lib/dji_sdk_demo/demo_mission"
	cd /home/dcr/hector_quadrotor_ws/src/cmake-build-debug/Onboard-SDK-ROS/dji_sdk_demo && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/demo_mission.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Onboard-SDK-ROS/dji_sdk_demo/CMakeFiles/demo_mission.dir/build: devel/lib/dji_sdk_demo/demo_mission

.PHONY : Onboard-SDK-ROS/dji_sdk_demo/CMakeFiles/demo_mission.dir/build

Onboard-SDK-ROS/dji_sdk_demo/CMakeFiles/demo_mission.dir/clean:
	cd /home/dcr/hector_quadrotor_ws/src/cmake-build-debug/Onboard-SDK-ROS/dji_sdk_demo && $(CMAKE_COMMAND) -P CMakeFiles/demo_mission.dir/cmake_clean.cmake
.PHONY : Onboard-SDK-ROS/dji_sdk_demo/CMakeFiles/demo_mission.dir/clean

Onboard-SDK-ROS/dji_sdk_demo/CMakeFiles/demo_mission.dir/depend:
	cd /home/dcr/hector_quadrotor_ws/src/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dcr/hector_quadrotor_ws/src /home/dcr/hector_quadrotor_ws/src/Onboard-SDK-ROS/dji_sdk_demo /home/dcr/hector_quadrotor_ws/src/cmake-build-debug /home/dcr/hector_quadrotor_ws/src/cmake-build-debug/Onboard-SDK-ROS/dji_sdk_demo /home/dcr/hector_quadrotor_ws/src/cmake-build-debug/Onboard-SDK-ROS/dji_sdk_demo/CMakeFiles/demo_mission.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Onboard-SDK-ROS/dji_sdk_demo/CMakeFiles/demo_mission.dir/depend

