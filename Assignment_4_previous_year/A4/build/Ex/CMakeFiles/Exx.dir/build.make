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
CMAKE_SOURCE_DIR = /Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_4_previous_year/A4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_4_previous_year/A4/build

# Include any dependencies generated for this target.
include Ex/CMakeFiles/Exx.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Ex/CMakeFiles/Exx.dir/compiler_depend.make

# Include the progress variables for this target.
include Ex/CMakeFiles/Exx.dir/progress.make

# Include the compile flags for this target's objects.
include Ex/CMakeFiles/Exx.dir/flags.make

Ex/CMakeFiles/Exx.dir/Exx.cpp.o: Ex/CMakeFiles/Exx.dir/flags.make
Ex/CMakeFiles/Exx.dir/Exx.cpp.o: ../Ex/Exx.cpp
Ex/CMakeFiles/Exx.dir/Exx.cpp.o: Ex/CMakeFiles/Exx.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_4_previous_year/A4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Ex/CMakeFiles/Exx.dir/Exx.cpp.o"
	cd /Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_4_previous_year/A4/build/Ex && /usr/local/bin/x86_64-apple-darwin20-g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Ex/CMakeFiles/Exx.dir/Exx.cpp.o -MF CMakeFiles/Exx.dir/Exx.cpp.o.d -o CMakeFiles/Exx.dir/Exx.cpp.o -c /Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_4_previous_year/A4/Ex/Exx.cpp

Ex/CMakeFiles/Exx.dir/Exx.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Exx.dir/Exx.cpp.i"
	cd /Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_4_previous_year/A4/build/Ex && /usr/local/bin/x86_64-apple-darwin20-g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_4_previous_year/A4/Ex/Exx.cpp > CMakeFiles/Exx.dir/Exx.cpp.i

Ex/CMakeFiles/Exx.dir/Exx.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Exx.dir/Exx.cpp.s"
	cd /Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_4_previous_year/A4/build/Ex && /usr/local/bin/x86_64-apple-darwin20-g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_4_previous_year/A4/Ex/Exx.cpp -o CMakeFiles/Exx.dir/Exx.cpp.s

# Object files for target Exx
Exx_OBJECTS = \
"CMakeFiles/Exx.dir/Exx.cpp.o"

# External object files for target Exx
Exx_EXTERNAL_OBJECTS =

Ex/Exx: Ex/CMakeFiles/Exx.dir/Exx.cpp.o
Ex/Exx: Ex/CMakeFiles/Exx.dir/build.make
Ex/Exx: Ex/CMakeFiles/Exx.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_4_previous_year/A4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Exx"
	cd /Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_4_previous_year/A4/build/Ex && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Exx.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Ex/CMakeFiles/Exx.dir/build: Ex/Exx
.PHONY : Ex/CMakeFiles/Exx.dir/build

Ex/CMakeFiles/Exx.dir/clean:
	cd /Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_4_previous_year/A4/build/Ex && $(CMAKE_COMMAND) -P CMakeFiles/Exx.dir/cmake_clean.cmake
.PHONY : Ex/CMakeFiles/Exx.dir/clean

Ex/CMakeFiles/Exx.dir/depend:
	cd /Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_4_previous_year/A4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_4_previous_year/A4 /Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_4_previous_year/A4/Ex /Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_4_previous_year/A4/build /Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_4_previous_year/A4/build/Ex /Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_4_previous_year/A4/build/Ex/CMakeFiles/Exx.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Ex/CMakeFiles/Exx.dir/depend
