# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/kashif/Desktop/OOPs_Lab/Program6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/kashif/Desktop/OOPs_Lab/Program6/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Program6.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Program6.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Program6.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Program6.dir/flags.make

CMakeFiles/Program6.dir/main.cpp.o: CMakeFiles/Program6.dir/flags.make
CMakeFiles/Program6.dir/main.cpp.o: ../main.cpp
CMakeFiles/Program6.dir/main.cpp.o: CMakeFiles/Program6.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kashif/Desktop/OOPs_Lab/Program6/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Program6.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Program6.dir/main.cpp.o -MF CMakeFiles/Program6.dir/main.cpp.o.d -o CMakeFiles/Program6.dir/main.cpp.o -c /Users/kashif/Desktop/OOPs_Lab/Program6/main.cpp

CMakeFiles/Program6.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Program6.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kashif/Desktop/OOPs_Lab/Program6/main.cpp > CMakeFiles/Program6.dir/main.cpp.i

CMakeFiles/Program6.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Program6.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kashif/Desktop/OOPs_Lab/Program6/main.cpp -o CMakeFiles/Program6.dir/main.cpp.s

# Object files for target Program6
Program6_OBJECTS = \
"CMakeFiles/Program6.dir/main.cpp.o"

# External object files for target Program6
Program6_EXTERNAL_OBJECTS =

Program6: CMakeFiles/Program6.dir/main.cpp.o
Program6: CMakeFiles/Program6.dir/build.make
Program6: CMakeFiles/Program6.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/kashif/Desktop/OOPs_Lab/Program6/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Program6"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Program6.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Program6.dir/build: Program6
.PHONY : CMakeFiles/Program6.dir/build

CMakeFiles/Program6.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Program6.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Program6.dir/clean

CMakeFiles/Program6.dir/depend:
	cd /Users/kashif/Desktop/OOPs_Lab/Program6/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/kashif/Desktop/OOPs_Lab/Program6 /Users/kashif/Desktop/OOPs_Lab/Program6 /Users/kashif/Desktop/OOPs_Lab/Program6/cmake-build-debug /Users/kashif/Desktop/OOPs_Lab/Program6/cmake-build-debug /Users/kashif/Desktop/OOPs_Lab/Program6/cmake-build-debug/CMakeFiles/Program6.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Program6.dir/depend

