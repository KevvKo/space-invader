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
CMAKE_SOURCE_DIR = /home/kevin/development/space-invader

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kevin/development/space-invader/build

# Include any dependencies generated for this target.
include CMakeFiles/space-invader.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/space-invader.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/space-invader.dir/flags.make

CMakeFiles/space-invader.dir/main.cpp.o: CMakeFiles/space-invader.dir/flags.make
CMakeFiles/space-invader.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kevin/development/space-invader/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/space-invader.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/space-invader.dir/main.cpp.o -c /home/kevin/development/space-invader/main.cpp

CMakeFiles/space-invader.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/space-invader.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kevin/development/space-invader/main.cpp > CMakeFiles/space-invader.dir/main.cpp.i

CMakeFiles/space-invader.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/space-invader.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kevin/development/space-invader/main.cpp -o CMakeFiles/space-invader.dir/main.cpp.s

# Object files for target space-invader
space__invader_OBJECTS = \
"CMakeFiles/space-invader.dir/main.cpp.o"

# External object files for target space-invader
space__invader_EXTERNAL_OBJECTS =

space-invader: CMakeFiles/space-invader.dir/main.cpp.o
space-invader: CMakeFiles/space-invader.dir/build.make
space-invader: CMakeFiles/space-invader.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kevin/development/space-invader/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable space-invader"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/space-invader.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/space-invader.dir/build: space-invader

.PHONY : CMakeFiles/space-invader.dir/build

CMakeFiles/space-invader.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/space-invader.dir/cmake_clean.cmake
.PHONY : CMakeFiles/space-invader.dir/clean

CMakeFiles/space-invader.dir/depend:
	cd /home/kevin/development/space-invader/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kevin/development/space-invader /home/kevin/development/space-invader /home/kevin/development/space-invader/build /home/kevin/development/space-invader/build /home/kevin/development/space-invader/build/CMakeFiles/space-invader.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/space-invader.dir/depend
