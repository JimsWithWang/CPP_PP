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
CMAKE_SOURCE_DIR = /mnt/c/Users/60447/Documents/CPP_PP/12/examples/12_10_11_12

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/60447/Documents/CPP_PP/12/examples/12_10_11_12/build

# Include any dependencies generated for this target.
include CMakeFiles/12_10_11_12.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/12_10_11_12.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/12_10_11_12.dir/flags.make

CMakeFiles/12_10_11_12.dir/src/main.cpp.o: CMakeFiles/12_10_11_12.dir/flags.make
CMakeFiles/12_10_11_12.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/60447/Documents/CPP_PP/12/examples/12_10_11_12/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/12_10_11_12.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/12_10_11_12.dir/src/main.cpp.o -c /mnt/c/Users/60447/Documents/CPP_PP/12/examples/12_10_11_12/src/main.cpp

CMakeFiles/12_10_11_12.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/12_10_11_12.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/60447/Documents/CPP_PP/12/examples/12_10_11_12/src/main.cpp > CMakeFiles/12_10_11_12.dir/src/main.cpp.i

CMakeFiles/12_10_11_12.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/12_10_11_12.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/60447/Documents/CPP_PP/12/examples/12_10_11_12/src/main.cpp -o CMakeFiles/12_10_11_12.dir/src/main.cpp.s

CMakeFiles/12_10_11_12.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/12_10_11_12.dir/src/main.cpp.o.requires

CMakeFiles/12_10_11_12.dir/src/main.cpp.o.provides: CMakeFiles/12_10_11_12.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/12_10_11_12.dir/build.make CMakeFiles/12_10_11_12.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/12_10_11_12.dir/src/main.cpp.o.provides

CMakeFiles/12_10_11_12.dir/src/main.cpp.o.provides.build: CMakeFiles/12_10_11_12.dir/src/main.cpp.o


CMakeFiles/12_10_11_12.dir/src/queue.cpp.o: CMakeFiles/12_10_11_12.dir/flags.make
CMakeFiles/12_10_11_12.dir/src/queue.cpp.o: ../src/queue.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/60447/Documents/CPP_PP/12/examples/12_10_11_12/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/12_10_11_12.dir/src/queue.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/12_10_11_12.dir/src/queue.cpp.o -c /mnt/c/Users/60447/Documents/CPP_PP/12/examples/12_10_11_12/src/queue.cpp

CMakeFiles/12_10_11_12.dir/src/queue.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/12_10_11_12.dir/src/queue.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/60447/Documents/CPP_PP/12/examples/12_10_11_12/src/queue.cpp > CMakeFiles/12_10_11_12.dir/src/queue.cpp.i

CMakeFiles/12_10_11_12.dir/src/queue.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/12_10_11_12.dir/src/queue.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/60447/Documents/CPP_PP/12/examples/12_10_11_12/src/queue.cpp -o CMakeFiles/12_10_11_12.dir/src/queue.cpp.s

CMakeFiles/12_10_11_12.dir/src/queue.cpp.o.requires:

.PHONY : CMakeFiles/12_10_11_12.dir/src/queue.cpp.o.requires

CMakeFiles/12_10_11_12.dir/src/queue.cpp.o.provides: CMakeFiles/12_10_11_12.dir/src/queue.cpp.o.requires
	$(MAKE) -f CMakeFiles/12_10_11_12.dir/build.make CMakeFiles/12_10_11_12.dir/src/queue.cpp.o.provides.build
.PHONY : CMakeFiles/12_10_11_12.dir/src/queue.cpp.o.provides

CMakeFiles/12_10_11_12.dir/src/queue.cpp.o.provides.build: CMakeFiles/12_10_11_12.dir/src/queue.cpp.o


# Object files for target 12_10_11_12
12_10_11_12_OBJECTS = \
"CMakeFiles/12_10_11_12.dir/src/main.cpp.o" \
"CMakeFiles/12_10_11_12.dir/src/queue.cpp.o"

# External object files for target 12_10_11_12
12_10_11_12_EXTERNAL_OBJECTS =

12_10_11_12: CMakeFiles/12_10_11_12.dir/src/main.cpp.o
12_10_11_12: CMakeFiles/12_10_11_12.dir/src/queue.cpp.o
12_10_11_12: CMakeFiles/12_10_11_12.dir/build.make
12_10_11_12: CMakeFiles/12_10_11_12.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/60447/Documents/CPP_PP/12/examples/12_10_11_12/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable 12_10_11_12"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/12_10_11_12.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/12_10_11_12.dir/build: 12_10_11_12

.PHONY : CMakeFiles/12_10_11_12.dir/build

CMakeFiles/12_10_11_12.dir/requires: CMakeFiles/12_10_11_12.dir/src/main.cpp.o.requires
CMakeFiles/12_10_11_12.dir/requires: CMakeFiles/12_10_11_12.dir/src/queue.cpp.o.requires

.PHONY : CMakeFiles/12_10_11_12.dir/requires

CMakeFiles/12_10_11_12.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/12_10_11_12.dir/cmake_clean.cmake
.PHONY : CMakeFiles/12_10_11_12.dir/clean

CMakeFiles/12_10_11_12.dir/depend:
	cd /mnt/c/Users/60447/Documents/CPP_PP/12/examples/12_10_11_12/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/60447/Documents/CPP_PP/12/examples/12_10_11_12 /mnt/c/Users/60447/Documents/CPP_PP/12/examples/12_10_11_12 /mnt/c/Users/60447/Documents/CPP_PP/12/examples/12_10_11_12/build /mnt/c/Users/60447/Documents/CPP_PP/12/examples/12_10_11_12/build /mnt/c/Users/60447/Documents/CPP_PP/12/examples/12_10_11_12/build/CMakeFiles/12_10_11_12.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/12_10_11_12.dir/depend

