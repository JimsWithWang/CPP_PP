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
CMAKE_SOURCE_DIR = /mnt/c/Users/60447/Documents/C++PrimerPlus/2/examples/2_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/60447/Documents/C++PrimerPlus/2/examples/2_2/build

# Include any dependencies generated for this target.
include CMakeFiles/carrot.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/carrot.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/carrot.dir/flags.make

CMakeFiles/carrot.dir/carrot.cpp.o: CMakeFiles/carrot.dir/flags.make
CMakeFiles/carrot.dir/carrot.cpp.o: ../carrot.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/60447/Documents/C++PrimerPlus/2/examples/2_2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/carrot.dir/carrot.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/carrot.dir/carrot.cpp.o -c /mnt/c/Users/60447/Documents/C++PrimerPlus/2/examples/2_2/carrot.cpp

CMakeFiles/carrot.dir/carrot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/carrot.dir/carrot.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/60447/Documents/C++PrimerPlus/2/examples/2_2/carrot.cpp > CMakeFiles/carrot.dir/carrot.cpp.i

CMakeFiles/carrot.dir/carrot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/carrot.dir/carrot.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/60447/Documents/C++PrimerPlus/2/examples/2_2/carrot.cpp -o CMakeFiles/carrot.dir/carrot.cpp.s

CMakeFiles/carrot.dir/carrot.cpp.o.requires:

.PHONY : CMakeFiles/carrot.dir/carrot.cpp.o.requires

CMakeFiles/carrot.dir/carrot.cpp.o.provides: CMakeFiles/carrot.dir/carrot.cpp.o.requires
	$(MAKE) -f CMakeFiles/carrot.dir/build.make CMakeFiles/carrot.dir/carrot.cpp.o.provides.build
.PHONY : CMakeFiles/carrot.dir/carrot.cpp.o.provides

CMakeFiles/carrot.dir/carrot.cpp.o.provides.build: CMakeFiles/carrot.dir/carrot.cpp.o


# Object files for target carrot
carrot_OBJECTS = \
"CMakeFiles/carrot.dir/carrot.cpp.o"

# External object files for target carrot
carrot_EXTERNAL_OBJECTS =

carrot: CMakeFiles/carrot.dir/carrot.cpp.o
carrot: CMakeFiles/carrot.dir/build.make
carrot: CMakeFiles/carrot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/60447/Documents/C++PrimerPlus/2/examples/2_2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable carrot"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/carrot.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/carrot.dir/build: carrot

.PHONY : CMakeFiles/carrot.dir/build

CMakeFiles/carrot.dir/requires: CMakeFiles/carrot.dir/carrot.cpp.o.requires

.PHONY : CMakeFiles/carrot.dir/requires

CMakeFiles/carrot.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/carrot.dir/cmake_clean.cmake
.PHONY : CMakeFiles/carrot.dir/clean

CMakeFiles/carrot.dir/depend:
	cd /mnt/c/Users/60447/Documents/C++PrimerPlus/2/examples/2_2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/60447/Documents/C++PrimerPlus/2/examples/2_2 /mnt/c/Users/60447/Documents/C++PrimerPlus/2/examples/2_2 /mnt/c/Users/60447/Documents/C++PrimerPlus/2/examples/2_2/build /mnt/c/Users/60447/Documents/C++PrimerPlus/2/examples/2_2/build /mnt/c/Users/60447/Documents/C++PrimerPlus/2/examples/2_2/build/CMakeFiles/carrot.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/carrot.dir/depend

