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
CMAKE_SOURCE_DIR = /Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_3/_helloWorld_fltk_gui_chapter12-2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_3/_helloWorld_fltk_gui_chapter12-2/build

# Include any dependencies generated for this target.
include fltk-1.3.5/test/CMakeFiles/output.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include fltk-1.3.5/test/CMakeFiles/output.dir/compiler_depend.make

# Include the progress variables for this target.
include fltk-1.3.5/test/CMakeFiles/output.dir/progress.make

# Include the compile flags for this target's objects.
include fltk-1.3.5/test/CMakeFiles/output.dir/flags.make

fltk-1.3.5/test/CMakeFiles/output.dir/output.cxx.o: fltk-1.3.5/test/CMakeFiles/output.dir/flags.make
fltk-1.3.5/test/CMakeFiles/output.dir/output.cxx.o: ../fltk-1.3.5/test/output.cxx
fltk-1.3.5/test/CMakeFiles/output.dir/output.cxx.o: fltk-1.3.5/test/CMakeFiles/output.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_3/_helloWorld_fltk_gui_chapter12-2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object fltk-1.3.5/test/CMakeFiles/output.dir/output.cxx.o"
	cd /Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_3/_helloWorld_fltk_gui_chapter12-2/build/fltk-1.3.5/test && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT fltk-1.3.5/test/CMakeFiles/output.dir/output.cxx.o -MF CMakeFiles/output.dir/output.cxx.o.d -o CMakeFiles/output.dir/output.cxx.o -c /Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_3/_helloWorld_fltk_gui_chapter12-2/fltk-1.3.5/test/output.cxx

fltk-1.3.5/test/CMakeFiles/output.dir/output.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/output.dir/output.cxx.i"
	cd /Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_3/_helloWorld_fltk_gui_chapter12-2/build/fltk-1.3.5/test && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_3/_helloWorld_fltk_gui_chapter12-2/fltk-1.3.5/test/output.cxx > CMakeFiles/output.dir/output.cxx.i

fltk-1.3.5/test/CMakeFiles/output.dir/output.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/output.dir/output.cxx.s"
	cd /Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_3/_helloWorld_fltk_gui_chapter12-2/build/fltk-1.3.5/test && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_3/_helloWorld_fltk_gui_chapter12-2/fltk-1.3.5/test/output.cxx -o CMakeFiles/output.dir/output.cxx.s

# Object files for target output
output_OBJECTS = \
"CMakeFiles/output.dir/output.cxx.o"

# External object files for target output
output_EXTERNAL_OBJECTS =

fltk-1.3.5/bin/examples/output.app/Contents/MacOS/output: fltk-1.3.5/test/CMakeFiles/output.dir/output.cxx.o
fltk-1.3.5/bin/examples/output.app/Contents/MacOS/output: fltk-1.3.5/test/CMakeFiles/output.dir/build.make
fltk-1.3.5/bin/examples/output.app/Contents/MacOS/output: fltk-1.3.5/lib/libfltk.a
fltk-1.3.5/bin/examples/output.app/Contents/MacOS/output: fltk-1.3.5/lib/libfltk_forms.a
fltk-1.3.5/bin/examples/output.app/Contents/MacOS/output: fltk-1.3.5/lib/libfltk.a
fltk-1.3.5/bin/examples/output.app/Contents/MacOS/output: /Library/Developer/CommandLineTools/SDKs/MacOSX11.3.sdk/usr/lib/libdl.tbd
fltk-1.3.5/bin/examples/output.app/Contents/MacOS/output: fltk-1.3.5/test/CMakeFiles/output.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_3/_helloWorld_fltk_gui_chapter12-2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/examples/output.app/Contents/MacOS/output"
	cd /Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_3/_helloWorld_fltk_gui_chapter12-2/build/fltk-1.3.5/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/output.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
fltk-1.3.5/test/CMakeFiles/output.dir/build: fltk-1.3.5/bin/examples/output.app/Contents/MacOS/output
.PHONY : fltk-1.3.5/test/CMakeFiles/output.dir/build

fltk-1.3.5/test/CMakeFiles/output.dir/clean:
	cd /Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_3/_helloWorld_fltk_gui_chapter12-2/build/fltk-1.3.5/test && $(CMAKE_COMMAND) -P CMakeFiles/output.dir/cmake_clean.cmake
.PHONY : fltk-1.3.5/test/CMakeFiles/output.dir/clean

fltk-1.3.5/test/CMakeFiles/output.dir/depend:
	cd /Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_3/_helloWorld_fltk_gui_chapter12-2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_3/_helloWorld_fltk_gui_chapter12-2 /Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_3/_helloWorld_fltk_gui_chapter12-2/fltk-1.3.5/test /Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_3/_helloWorld_fltk_gui_chapter12-2/build /Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_3/_helloWorld_fltk_gui_chapter12-2/build/fltk-1.3.5/test /Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_3/_helloWorld_fltk_gui_chapter12-2/build/fltk-1.3.5/test/CMakeFiles/output.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : fltk-1.3.5/test/CMakeFiles/output.dir/depend

