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
CMAKE_SOURCE_DIR = /mnt/e/C++PrimerPlus/8/examples/8_12

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/e/C++PrimerPlus/8/examples/8_12/build

# Include any dependencies generated for this target.
include CMakeFiles/8_12.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/8_12.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/8_12.dir/flags.make

CMakeFiles/8_12.dir/src/main.cpp.o: CMakeFiles/8_12.dir/flags.make
CMakeFiles/8_12.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/e/C++PrimerPlus/8/examples/8_12/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/8_12.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/8_12.dir/src/main.cpp.o -c /mnt/e/C++PrimerPlus/8/examples/8_12/src/main.cpp

CMakeFiles/8_12.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/8_12.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/e/C++PrimerPlus/8/examples/8_12/src/main.cpp > CMakeFiles/8_12.dir/src/main.cpp.i

CMakeFiles/8_12.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/8_12.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/e/C++PrimerPlus/8/examples/8_12/src/main.cpp -o CMakeFiles/8_12.dir/src/main.cpp.s

# Object files for target 8_12
8_12_OBJECTS = \
"CMakeFiles/8_12.dir/src/main.cpp.o"

# External object files for target 8_12
8_12_EXTERNAL_OBJECTS =

8_12: CMakeFiles/8_12.dir/src/main.cpp.o
8_12: CMakeFiles/8_12.dir/build.make
8_12: CMakeFiles/8_12.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/e/C++PrimerPlus/8/examples/8_12/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 8_12"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/8_12.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/8_12.dir/build: 8_12

.PHONY : CMakeFiles/8_12.dir/build

CMakeFiles/8_12.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/8_12.dir/cmake_clean.cmake
.PHONY : CMakeFiles/8_12.dir/clean

CMakeFiles/8_12.dir/depend:
	cd /mnt/e/C++PrimerPlus/8/examples/8_12/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/e/C++PrimerPlus/8/examples/8_12 /mnt/e/C++PrimerPlus/8/examples/8_12 /mnt/e/C++PrimerPlus/8/examples/8_12/build /mnt/e/C++PrimerPlus/8/examples/8_12/build /mnt/e/C++PrimerPlus/8/examples/8_12/build/CMakeFiles/8_12.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/8_12.dir/depend
