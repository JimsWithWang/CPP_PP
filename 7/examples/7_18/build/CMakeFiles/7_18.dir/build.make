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
CMAKE_SOURCE_DIR = /mnt/e/C++PrimerPlus/7/examples/7_18

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/e/C++PrimerPlus/7/examples/7_18/build

# Include any dependencies generated for this target.
include CMakeFiles/7_18.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/7_18.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/7_18.dir/flags.make

CMakeFiles/7_18.dir/src/main.cpp.o: CMakeFiles/7_18.dir/flags.make
CMakeFiles/7_18.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/e/C++PrimerPlus/7/examples/7_18/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/7_18.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/7_18.dir/src/main.cpp.o -c /mnt/e/C++PrimerPlus/7/examples/7_18/src/main.cpp

CMakeFiles/7_18.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/7_18.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/e/C++PrimerPlus/7/examples/7_18/src/main.cpp > CMakeFiles/7_18.dir/src/main.cpp.i

CMakeFiles/7_18.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/7_18.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/e/C++PrimerPlus/7/examples/7_18/src/main.cpp -o CMakeFiles/7_18.dir/src/main.cpp.s

# Object files for target 7_18
7_18_OBJECTS = \
"CMakeFiles/7_18.dir/src/main.cpp.o"

# External object files for target 7_18
7_18_EXTERNAL_OBJECTS =

7_18: CMakeFiles/7_18.dir/src/main.cpp.o
7_18: CMakeFiles/7_18.dir/build.make
7_18: CMakeFiles/7_18.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/e/C++PrimerPlus/7/examples/7_18/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 7_18"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/7_18.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/7_18.dir/build: 7_18

.PHONY : CMakeFiles/7_18.dir/build

CMakeFiles/7_18.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/7_18.dir/cmake_clean.cmake
.PHONY : CMakeFiles/7_18.dir/clean

CMakeFiles/7_18.dir/depend:
	cd /mnt/e/C++PrimerPlus/7/examples/7_18/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/e/C++PrimerPlus/7/examples/7_18 /mnt/e/C++PrimerPlus/7/examples/7_18 /mnt/e/C++PrimerPlus/7/examples/7_18/build /mnt/e/C++PrimerPlus/7/examples/7_18/build /mnt/e/C++PrimerPlus/7/examples/7_18/build/CMakeFiles/7_18.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/7_18.dir/depend

