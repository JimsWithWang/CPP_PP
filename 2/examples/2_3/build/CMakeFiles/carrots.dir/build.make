# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /mnt/c/Users/60447/Documents/C++PrimerPlus/2/examples/2_3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/60447/Documents/C++PrimerPlus/2/examples/2_3/build

# Include any dependencies generated for this target.
include CMakeFiles/carrots.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/carrots.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/carrots.dir/flags.make

CMakeFiles/carrots.dir/src/main.cpp.o: CMakeFiles/carrots.dir/flags.make
CMakeFiles/carrots.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/60447/Documents/C++PrimerPlus/2/examples/2_3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/carrots.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/carrots.dir/src/main.cpp.o -c /mnt/c/Users/60447/Documents/C++PrimerPlus/2/examples/2_3/src/main.cpp

CMakeFiles/carrots.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/carrots.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/60447/Documents/C++PrimerPlus/2/examples/2_3/src/main.cpp > CMakeFiles/carrots.dir/src/main.cpp.i

CMakeFiles/carrots.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/carrots.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/60447/Documents/C++PrimerPlus/2/examples/2_3/src/main.cpp -o CMakeFiles/carrots.dir/src/main.cpp.s

CMakeFiles/carrots.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/carrots.dir/src/main.cpp.o.requires

CMakeFiles/carrots.dir/src/main.cpp.o.provides: CMakeFiles/carrots.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/carrots.dir/build.make CMakeFiles/carrots.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/carrots.dir/src/main.cpp.o.provides

CMakeFiles/carrots.dir/src/main.cpp.o.provides.build: CMakeFiles/carrots.dir/src/main.cpp.o


# Object files for target carrots
carrots_OBJECTS = \
"CMakeFiles/carrots.dir/src/main.cpp.o"

# External object files for target carrots
carrots_EXTERNAL_OBJECTS =

carrots: CMakeFiles/carrots.dir/src/main.cpp.o
carrots: CMakeFiles/carrots.dir/build.make
carrots: CMakeFiles/carrots.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/60447/Documents/C++PrimerPlus/2/examples/2_3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable carrots"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/carrots.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/carrots.dir/build: carrots

.PHONY : CMakeFiles/carrots.dir/build

CMakeFiles/carrots.dir/requires: CMakeFiles/carrots.dir/src/main.cpp.o.requires

.PHONY : CMakeFiles/carrots.dir/requires

CMakeFiles/carrots.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/carrots.dir/cmake_clean.cmake
.PHONY : CMakeFiles/carrots.dir/clean

CMakeFiles/carrots.dir/depend:
	cd /mnt/c/Users/60447/Documents/C++PrimerPlus/2/examples/2_3/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/60447/Documents/C++PrimerPlus/2/examples/2_3 /mnt/c/Users/60447/Documents/C++PrimerPlus/2/examples/2_3 /mnt/c/Users/60447/Documents/C++PrimerPlus/2/examples/2_3/build /mnt/c/Users/60447/Documents/C++PrimerPlus/2/examples/2_3/build /mnt/c/Users/60447/Documents/C++PrimerPlus/2/examples/2_3/build/CMakeFiles/carrots.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/carrots.dir/depend

