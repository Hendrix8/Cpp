# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.22.3/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.22.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/Chris/Desktop/Study2022/Earino_2022/C++/1hSeira

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Chris/Desktop/Study2022/Earino_2022/C++/1hSeira/build

# Include any dependencies generated for this target.
include Exercise1/CMakeFiles/Ex1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Exercise1/CMakeFiles/Ex1.dir/compiler_depend.make

# Include the progress variables for this target.
include Exercise1/CMakeFiles/Ex1.dir/progress.make

# Include the compile flags for this target's objects.
include Exercise1/CMakeFiles/Ex1.dir/flags.make

Exercise1/CMakeFiles/Ex1.dir/Ex1.cpp.o: Exercise1/CMakeFiles/Ex1.dir/flags.make
Exercise1/CMakeFiles/Ex1.dir/Ex1.cpp.o: ../Exercise1/Ex1.cpp
Exercise1/CMakeFiles/Ex1.dir/Ex1.cpp.o: Exercise1/CMakeFiles/Ex1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Chris/Desktop/Study2022/Earino_2022/C++/1hSeira/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Exercise1/CMakeFiles/Ex1.dir/Ex1.cpp.o"
	cd /Users/Chris/Desktop/Study2022/Earino_2022/C++/1hSeira/build/Exercise1 && /usr/local/bin/x86_64-apple-darwin20-g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Exercise1/CMakeFiles/Ex1.dir/Ex1.cpp.o -MF CMakeFiles/Ex1.dir/Ex1.cpp.o.d -o CMakeFiles/Ex1.dir/Ex1.cpp.o -c /Users/Chris/Desktop/Study2022/Earino_2022/C++/1hSeira/Exercise1/Ex1.cpp

Exercise1/CMakeFiles/Ex1.dir/Ex1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ex1.dir/Ex1.cpp.i"
	cd /Users/Chris/Desktop/Study2022/Earino_2022/C++/1hSeira/build/Exercise1 && /usr/local/bin/x86_64-apple-darwin20-g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Chris/Desktop/Study2022/Earino_2022/C++/1hSeira/Exercise1/Ex1.cpp > CMakeFiles/Ex1.dir/Ex1.cpp.i

Exercise1/CMakeFiles/Ex1.dir/Ex1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ex1.dir/Ex1.cpp.s"
	cd /Users/Chris/Desktop/Study2022/Earino_2022/C++/1hSeira/build/Exercise1 && /usr/local/bin/x86_64-apple-darwin20-g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Chris/Desktop/Study2022/Earino_2022/C++/1hSeira/Exercise1/Ex1.cpp -o CMakeFiles/Ex1.dir/Ex1.cpp.s

# Object files for target Ex1
Ex1_OBJECTS = \
"CMakeFiles/Ex1.dir/Ex1.cpp.o"

# External object files for target Ex1
Ex1_EXTERNAL_OBJECTS =

Exercise1/Ex1: Exercise1/CMakeFiles/Ex1.dir/Ex1.cpp.o
Exercise1/Ex1: Exercise1/CMakeFiles/Ex1.dir/build.make
Exercise1/Ex1: Exercise1/CMakeFiles/Ex1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Chris/Desktop/Study2022/Earino_2022/C++/1hSeira/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Ex1"
	cd /Users/Chris/Desktop/Study2022/Earino_2022/C++/1hSeira/build/Exercise1 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Ex1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Exercise1/CMakeFiles/Ex1.dir/build: Exercise1/Ex1
.PHONY : Exercise1/CMakeFiles/Ex1.dir/build

Exercise1/CMakeFiles/Ex1.dir/clean:
	cd /Users/Chris/Desktop/Study2022/Earino_2022/C++/1hSeira/build/Exercise1 && $(CMAKE_COMMAND) -P CMakeFiles/Ex1.dir/cmake_clean.cmake
.PHONY : Exercise1/CMakeFiles/Ex1.dir/clean

Exercise1/CMakeFiles/Ex1.dir/depend:
	cd /Users/Chris/Desktop/Study2022/Earino_2022/C++/1hSeira/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Chris/Desktop/Study2022/Earino_2022/C++/1hSeira /Users/Chris/Desktop/Study2022/Earino_2022/C++/1hSeira/Exercise1 /Users/Chris/Desktop/Study2022/Earino_2022/C++/1hSeira/build /Users/Chris/Desktop/Study2022/Earino_2022/C++/1hSeira/build/Exercise1 /Users/Chris/Desktop/Study2022/Earino_2022/C++/1hSeira/build/Exercise1/CMakeFiles/Ex1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Exercise1/CMakeFiles/Ex1.dir/depend

