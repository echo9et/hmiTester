# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ech9et/Documents/test/hmiTester

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ech9et/Documents/test/hmiTester/build

# Include any dependencies generated for this target.
include CMakeFiles/hmiTester.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hmiTester.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hmiTester.dir/flags.make

CMakeFiles/hmiTester.dir/hmiTester_autogen/mocs_compilation.cpp.o: CMakeFiles/hmiTester.dir/flags.make
CMakeFiles/hmiTester.dir/hmiTester_autogen/mocs_compilation.cpp.o: hmiTester_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ech9et/Documents/test/hmiTester/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hmiTester.dir/hmiTester_autogen/mocs_compilation.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hmiTester.dir/hmiTester_autogen/mocs_compilation.cpp.o -c /home/ech9et/Documents/test/hmiTester/build/hmiTester_autogen/mocs_compilation.cpp

CMakeFiles/hmiTester.dir/hmiTester_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hmiTester.dir/hmiTester_autogen/mocs_compilation.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ech9et/Documents/test/hmiTester/build/hmiTester_autogen/mocs_compilation.cpp > CMakeFiles/hmiTester.dir/hmiTester_autogen/mocs_compilation.cpp.i

CMakeFiles/hmiTester.dir/hmiTester_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hmiTester.dir/hmiTester_autogen/mocs_compilation.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ech9et/Documents/test/hmiTester/build/hmiTester_autogen/mocs_compilation.cpp -o CMakeFiles/hmiTester.dir/hmiTester_autogen/mocs_compilation.cpp.s

CMakeFiles/hmiTester.dir/main.cpp.o: CMakeFiles/hmiTester.dir/flags.make
CMakeFiles/hmiTester.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ech9et/Documents/test/hmiTester/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/hmiTester.dir/main.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hmiTester.dir/main.cpp.o -c /home/ech9et/Documents/test/hmiTester/main.cpp

CMakeFiles/hmiTester.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hmiTester.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ech9et/Documents/test/hmiTester/main.cpp > CMakeFiles/hmiTester.dir/main.cpp.i

CMakeFiles/hmiTester.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hmiTester.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ech9et/Documents/test/hmiTester/main.cpp -o CMakeFiles/hmiTester.dir/main.cpp.s

CMakeFiles/hmiTester.dir/hmi/hmi_tester.cpp.o: CMakeFiles/hmiTester.dir/flags.make
CMakeFiles/hmiTester.dir/hmi/hmi_tester.cpp.o: ../hmi/hmi_tester.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ech9et/Documents/test/hmiTester/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/hmiTester.dir/hmi/hmi_tester.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hmiTester.dir/hmi/hmi_tester.cpp.o -c /home/ech9et/Documents/test/hmiTester/hmi/hmi_tester.cpp

CMakeFiles/hmiTester.dir/hmi/hmi_tester.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hmiTester.dir/hmi/hmi_tester.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ech9et/Documents/test/hmiTester/hmi/hmi_tester.cpp > CMakeFiles/hmiTester.dir/hmi/hmi_tester.cpp.i

CMakeFiles/hmiTester.dir/hmi/hmi_tester.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hmiTester.dir/hmi/hmi_tester.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ech9et/Documents/test/hmiTester/hmi/hmi_tester.cpp -o CMakeFiles/hmiTester.dir/hmi/hmi_tester.cpp.s

CMakeFiles/hmiTester.dir/hmi/input_place.cpp.o: CMakeFiles/hmiTester.dir/flags.make
CMakeFiles/hmiTester.dir/hmi/input_place.cpp.o: ../hmi/input_place.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ech9et/Documents/test/hmiTester/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/hmiTester.dir/hmi/input_place.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hmiTester.dir/hmi/input_place.cpp.o -c /home/ech9et/Documents/test/hmiTester/hmi/input_place.cpp

CMakeFiles/hmiTester.dir/hmi/input_place.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hmiTester.dir/hmi/input_place.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ech9et/Documents/test/hmiTester/hmi/input_place.cpp > CMakeFiles/hmiTester.dir/hmi/input_place.cpp.i

CMakeFiles/hmiTester.dir/hmi/input_place.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hmiTester.dir/hmi/input_place.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ech9et/Documents/test/hmiTester/hmi/input_place.cpp -o CMakeFiles/hmiTester.dir/hmi/input_place.cpp.s

CMakeFiles/hmiTester.dir/hmi/json_place.cpp.o: CMakeFiles/hmiTester.dir/flags.make
CMakeFiles/hmiTester.dir/hmi/json_place.cpp.o: ../hmi/json_place.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ech9et/Documents/test/hmiTester/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/hmiTester.dir/hmi/json_place.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hmiTester.dir/hmi/json_place.cpp.o -c /home/ech9et/Documents/test/hmiTester/hmi/json_place.cpp

CMakeFiles/hmiTester.dir/hmi/json_place.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hmiTester.dir/hmi/json_place.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ech9et/Documents/test/hmiTester/hmi/json_place.cpp > CMakeFiles/hmiTester.dir/hmi/json_place.cpp.i

CMakeFiles/hmiTester.dir/hmi/json_place.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hmiTester.dir/hmi/json_place.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ech9et/Documents/test/hmiTester/hmi/json_place.cpp -o CMakeFiles/hmiTester.dir/hmi/json_place.cpp.s

CMakeFiles/hmiTester.dir/hmi/json_custom_widgets.cpp.o: CMakeFiles/hmiTester.dir/flags.make
CMakeFiles/hmiTester.dir/hmi/json_custom_widgets.cpp.o: ../hmi/json_custom_widgets.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ech9et/Documents/test/hmiTester/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/hmiTester.dir/hmi/json_custom_widgets.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hmiTester.dir/hmi/json_custom_widgets.cpp.o -c /home/ech9et/Documents/test/hmiTester/hmi/json_custom_widgets.cpp

CMakeFiles/hmiTester.dir/hmi/json_custom_widgets.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hmiTester.dir/hmi/json_custom_widgets.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ech9et/Documents/test/hmiTester/hmi/json_custom_widgets.cpp > CMakeFiles/hmiTester.dir/hmi/json_custom_widgets.cpp.i

CMakeFiles/hmiTester.dir/hmi/json_custom_widgets.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hmiTester.dir/hmi/json_custom_widgets.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ech9et/Documents/test/hmiTester/hmi/json_custom_widgets.cpp -o CMakeFiles/hmiTester.dir/hmi/json_custom_widgets.cpp.s

CMakeFiles/hmiTester.dir/hmi/logger_place.cpp.o: CMakeFiles/hmiTester.dir/flags.make
CMakeFiles/hmiTester.dir/hmi/logger_place.cpp.o: ../hmi/logger_place.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ech9et/Documents/test/hmiTester/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/hmiTester.dir/hmi/logger_place.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hmiTester.dir/hmi/logger_place.cpp.o -c /home/ech9et/Documents/test/hmiTester/hmi/logger_place.cpp

CMakeFiles/hmiTester.dir/hmi/logger_place.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hmiTester.dir/hmi/logger_place.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ech9et/Documents/test/hmiTester/hmi/logger_place.cpp > CMakeFiles/hmiTester.dir/hmi/logger_place.cpp.i

CMakeFiles/hmiTester.dir/hmi/logger_place.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hmiTester.dir/hmi/logger_place.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ech9et/Documents/test/hmiTester/hmi/logger_place.cpp -o CMakeFiles/hmiTester.dir/hmi/logger_place.cpp.s

CMakeFiles/hmiTester.dir/libs/json.cpp.o: CMakeFiles/hmiTester.dir/flags.make
CMakeFiles/hmiTester.dir/libs/json.cpp.o: ../libs/json.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ech9et/Documents/test/hmiTester/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/hmiTester.dir/libs/json.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hmiTester.dir/libs/json.cpp.o -c /home/ech9et/Documents/test/hmiTester/libs/json.cpp

CMakeFiles/hmiTester.dir/libs/json.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hmiTester.dir/libs/json.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ech9et/Documents/test/hmiTester/libs/json.cpp > CMakeFiles/hmiTester.dir/libs/json.cpp.i

CMakeFiles/hmiTester.dir/libs/json.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hmiTester.dir/libs/json.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ech9et/Documents/test/hmiTester/libs/json.cpp -o CMakeFiles/hmiTester.dir/libs/json.cpp.s

# Object files for target hmiTester
hmiTester_OBJECTS = \
"CMakeFiles/hmiTester.dir/hmiTester_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/hmiTester.dir/main.cpp.o" \
"CMakeFiles/hmiTester.dir/hmi/hmi_tester.cpp.o" \
"CMakeFiles/hmiTester.dir/hmi/input_place.cpp.o" \
"CMakeFiles/hmiTester.dir/hmi/json_place.cpp.o" \
"CMakeFiles/hmiTester.dir/hmi/json_custom_widgets.cpp.o" \
"CMakeFiles/hmiTester.dir/hmi/logger_place.cpp.o" \
"CMakeFiles/hmiTester.dir/libs/json.cpp.o"

# External object files for target hmiTester
hmiTester_EXTERNAL_OBJECTS =

hmiTester: CMakeFiles/hmiTester.dir/hmiTester_autogen/mocs_compilation.cpp.o
hmiTester: CMakeFiles/hmiTester.dir/main.cpp.o
hmiTester: CMakeFiles/hmiTester.dir/hmi/hmi_tester.cpp.o
hmiTester: CMakeFiles/hmiTester.dir/hmi/input_place.cpp.o
hmiTester: CMakeFiles/hmiTester.dir/hmi/json_place.cpp.o
hmiTester: CMakeFiles/hmiTester.dir/hmi/json_custom_widgets.cpp.o
hmiTester: CMakeFiles/hmiTester.dir/hmi/logger_place.cpp.o
hmiTester: CMakeFiles/hmiTester.dir/libs/json.cpp.o
hmiTester: CMakeFiles/hmiTester.dir/build.make
hmiTester: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.12.8
hmiTester: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.12.8
hmiTester: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.12.8
hmiTester: CMakeFiles/hmiTester.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ech9et/Documents/test/hmiTester/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable hmiTester"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hmiTester.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hmiTester.dir/build: hmiTester

.PHONY : CMakeFiles/hmiTester.dir/build

CMakeFiles/hmiTester.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hmiTester.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hmiTester.dir/clean

CMakeFiles/hmiTester.dir/depend:
	cd /home/ech9et/Documents/test/hmiTester/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ech9et/Documents/test/hmiTester /home/ech9et/Documents/test/hmiTester /home/ech9et/Documents/test/hmiTester/build /home/ech9et/Documents/test/hmiTester/build /home/ech9et/Documents/test/hmiTester/build/CMakeFiles/hmiTester.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hmiTester.dir/depend
