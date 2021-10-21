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
include ground_control_station/keyboard_control/CMakeFiles/dji_controller.dir/depend.make

# Include the progress variables for this target.
include ground_control_station/keyboard_control/CMakeFiles/dji_controller.dir/progress.make

# Include the compile flags for this target's objects.
include ground_control_station/keyboard_control/CMakeFiles/dji_controller.dir/flags.make

ground_control_station/keyboard_control/CMakeFiles/dji_controller.dir/src/dji_controller.cpp.o: ground_control_station/keyboard_control/CMakeFiles/dji_controller.dir/flags.make
ground_control_station/keyboard_control/CMakeFiles/dji_controller.dir/src/dji_controller.cpp.o: ../ground_control_station/keyboard_control/src/dji_controller.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object ground_control_station/keyboard_control/CMakeFiles/dji_controller.dir/src/dji_controller.cpp.o"
	cd /home/dcr/hector_quadrotor_ws/src/cmake-build-debug/ground_control_station/keyboard_control && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dji_controller.dir/src/dji_controller.cpp.o -c /home/dcr/hector_quadrotor_ws/src/ground_control_station/keyboard_control/src/dji_controller.cpp

ground_control_station/keyboard_control/CMakeFiles/dji_controller.dir/src/dji_controller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dji_controller.dir/src/dji_controller.cpp.i"
	cd /home/dcr/hector_quadrotor_ws/src/cmake-build-debug/ground_control_station/keyboard_control && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dcr/hector_quadrotor_ws/src/ground_control_station/keyboard_control/src/dji_controller.cpp > CMakeFiles/dji_controller.dir/src/dji_controller.cpp.i

ground_control_station/keyboard_control/CMakeFiles/dji_controller.dir/src/dji_controller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dji_controller.dir/src/dji_controller.cpp.s"
	cd /home/dcr/hector_quadrotor_ws/src/cmake-build-debug/ground_control_station/keyboard_control && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dcr/hector_quadrotor_ws/src/ground_control_station/keyboard_control/src/dji_controller.cpp -o CMakeFiles/dji_controller.dir/src/dji_controller.cpp.s

# Object files for target dji_controller
dji_controller_OBJECTS = \
"CMakeFiles/dji_controller.dir/src/dji_controller.cpp.o"

# External object files for target dji_controller
dji_controller_EXTERNAL_OBJECTS =

devel/lib/keyboard_control/dji_controller: ground_control_station/keyboard_control/CMakeFiles/dji_controller.dir/src/dji_controller.cpp.o
devel/lib/keyboard_control/dji_controller: ground_control_station/keyboard_control/CMakeFiles/dji_controller.dir/build.make
devel/lib/keyboard_control/dji_controller: /opt/ros/melodic/lib/libroscpp.so
devel/lib/keyboard_control/dji_controller: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
devel/lib/keyboard_control/dji_controller: /opt/ros/melodic/lib/librosconsole.so
devel/lib/keyboard_control/dji_controller: /opt/ros/melodic/lib/librosconsole_log4cxx.so
devel/lib/keyboard_control/dji_controller: /opt/ros/melodic/lib/librosconsole_backend_interface.so
devel/lib/keyboard_control/dji_controller: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
devel/lib/keyboard_control/dji_controller: /usr/lib/x86_64-linux-gnu/libboost_regex.so
devel/lib/keyboard_control/dji_controller: /opt/ros/melodic/lib/libxmlrpcpp.so
devel/lib/keyboard_control/dji_controller: /opt/ros/melodic/lib/libroscpp_serialization.so
devel/lib/keyboard_control/dji_controller: /opt/ros/melodic/lib/librostime.so
devel/lib/keyboard_control/dji_controller: /opt/ros/melodic/lib/libcpp_common.so
devel/lib/keyboard_control/dji_controller: /usr/lib/x86_64-linux-gnu/libboost_system.so
devel/lib/keyboard_control/dji_controller: /usr/lib/x86_64-linux-gnu/libboost_thread.so
devel/lib/keyboard_control/dji_controller: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
devel/lib/keyboard_control/dji_controller: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
devel/lib/keyboard_control/dji_controller: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
devel/lib/keyboard_control/dji_controller: /usr/lib/x86_64-linux-gnu/libpthread.so
devel/lib/keyboard_control/dji_controller: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4
devel/lib/keyboard_control/dji_controller: /usr/local/lib/libdjiosdk-core.a
devel/lib/keyboard_control/dji_controller: ground_control_station/keyboard_control/CMakeFiles/dji_controller.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dcr/hector_quadrotor_ws/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../devel/lib/keyboard_control/dji_controller"
	cd /home/dcr/hector_quadrotor_ws/src/cmake-build-debug/ground_control_station/keyboard_control && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dji_controller.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
ground_control_station/keyboard_control/CMakeFiles/dji_controller.dir/build: devel/lib/keyboard_control/dji_controller

.PHONY : ground_control_station/keyboard_control/CMakeFiles/dji_controller.dir/build

ground_control_station/keyboard_control/CMakeFiles/dji_controller.dir/clean:
	cd /home/dcr/hector_quadrotor_ws/src/cmake-build-debug/ground_control_station/keyboard_control && $(CMAKE_COMMAND) -P CMakeFiles/dji_controller.dir/cmake_clean.cmake
.PHONY : ground_control_station/keyboard_control/CMakeFiles/dji_controller.dir/clean

ground_control_station/keyboard_control/CMakeFiles/dji_controller.dir/depend:
	cd /home/dcr/hector_quadrotor_ws/src/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dcr/hector_quadrotor_ws/src /home/dcr/hector_quadrotor_ws/src/ground_control_station/keyboard_control /home/dcr/hector_quadrotor_ws/src/cmake-build-debug /home/dcr/hector_quadrotor_ws/src/cmake-build-debug/ground_control_station/keyboard_control /home/dcr/hector_quadrotor_ws/src/cmake-build-debug/ground_control_station/keyboard_control/CMakeFiles/dji_controller.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ground_control_station/keyboard_control/CMakeFiles/dji_controller.dir/depend

