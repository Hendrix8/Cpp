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
CMAKE_SOURCE_DIR = /Users/Chris/Desktop/Study2022/Earino_2022/C++/Assignment_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Chris/Desktop/Study2022/Earino_2022/C++/Assignment_2/build

# Include any dependencies generated for this target.
include Exercise4/str_opera/CMakeFiles/hello.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Exercise4/str_opera/CMakeFiles/hello.dir/compiler_depend.make

# Include the progress variables for this target.
include Exercise4/str_opera/CMakeFiles/hello.dir/progress.make

# Include the compile flags for this target's objects.
include Exercise4/str_opera/CMakeFiles/hello.dir/flags.make

Exercise4/str_opera/CMakeFiles/hello.dir/hello.cpp.o: Exercise4/str_opera/CMakeFiles/hello.dir/flags.make
Exercise4/str_opera/CMakeFiles/hello.dir/hello.cpp.o: ../Exercise4/str_opera/hello.cpp
Exercise4/str_opera/CMakeFiles/hello.dir/hello.cpp.o: Exercise4/str_opera/CMakeFiles/hello.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Chris/Desktop/Study2022/Earino_2022/C++/Assignment_2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Exercise4/str_opera/CMakeFiles/hello.dir/hello.cpp.o"
	cd /Users/Chris/Desktop/Study2022/Earino_2022/C++/Assignment_2/build/Exercise4/str_opera && /usr/local/bin/x86_64-apple-darwin20-g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Exercise4/str_opera/CMakeFiles/hello.dir/hello.cpp.o -MF CMakeFiles/hello.dir/hello.cpp.o.d -o CMakeFiles/hello.dir/hello.cpp.o -c /Users/Chris/Desktop/Study2022/Earino_2022/C++/Assignment_2/Exercise4/str_opera/hello.cpp

Exercise4/str_opera/CMakeFiles/hello.dir/hello.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hello.dir/hello.cpp.i"
	cd /Users/Chris/Desktop/Study2022/Earino_2022/C++/Assignment_2/build/Exercise4/str_opera && /usr/local/bin/x86_64-apple-darwin20-g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Chris/Desktop/Study2022/Earino_2022/C++/Assignment_2/Exercise4/str_opera/hello.cpp > CMakeFiles/hello.dir/hello.cpp.i

Exercise4/str_opera/CMakeFiles/hello.dir/hello.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hello.dir/hello.cpp.s"
	cd /Users/Chris/Desktop/Study2022/Earino_2022/C++/Assignment_2/build/Exercise4/str_opera && /usr/local/bin/x86_64-apple-darwin20-g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Chris/Desktop/Study2022/Earino_2022/C++/Assignment_2/Exercise4/str_opera/hello.cpp -o CMakeFiles/hello.dir/hello.cpp.s

# Object files for target hello
hello_OBJECTS = \
"CMakeFiles/hello.dir/hello.cpp.o"

# External object files for target hello
hello_EXTERNAL_OBJECTS =

Exercise4/str_opera/hello: Exercise4/str_opera/CMakeFiles/hello.dir/hello.cpp.o
Exercise4/str_opera/hello: Exercise4/str_opera/CMakeFiles/hello.dir/build.make
Exercise4/str_opera/hello: Exercise4/str_opera/CMakeFiles/hello.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Chris/Desktop/Study2022/Earino_2022/C++/Assignment_2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable hello"
	cd /Users/Chris/Desktop/Study2022/Earino_2022/C++/Assignment_2/build/Exercise4/str_opera && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hello.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Exercise4/str_opera/CMakeFiles/hello.dir/build: Exercise4/str_opera/hello
.PHONY : Exercise4/str_opera/CMakeFiles/hello.dir/build

Exercise4/str_opera/CMakeFiles/hello.dir/clean:
	cd /Users/Chris/Desktop/Study2022/Earino_2022/C++/Assignment_2/build/Exercise4/str_opera && $(CMAKE_COMMAND) -P CMakeFiles/hello.dir/cmake_clean.cmake
.PHONY : Exercise4/str_opera/CMakeFiles/hello.dir/clean

Exercise4/str_opera/CMakeFiles/hello.dir/depend:
	cd /Users/Chris/Desktop/Study2022/Earino_2022/C++/Assignment_2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Chris/Desktop/Study2022/Earino_2022/C++/Assignment_2 /Users/Chris/Desktop/Study2022/Earino_2022/C++/Assignment_2/Exercise4/str_opera /Users/Chris/Desktop/Study2022/Earino_2022/C++/Assignment_2/build /Users/Chris/Desktop/Study2022/Earino_2022/C++/Assignment_2/build/Exercise4/str_opera /Users/Chris/Desktop/Study2022/Earino_2022/C++/Assignment_2/build/Exercise4/str_opera/CMakeFiles/hello.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Exercise4/str_opera/CMakeFiles/hello.dir/depend
