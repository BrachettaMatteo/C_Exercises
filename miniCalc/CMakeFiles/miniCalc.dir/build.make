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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.23.1/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.23.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/matteobrachetta/Sviluppo/CLion/C_Exercises/miniCalc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/matteobrachetta/Sviluppo/CLion/C_Exercises/miniCalc

# Include any dependencies generated for this target.
include CMakeFiles/miniCalc.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/miniCalc.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/miniCalc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/miniCalc.dir/flags.make

CMakeFiles/miniCalc.dir/main.c.o: CMakeFiles/miniCalc.dir/flags.make
CMakeFiles/miniCalc.dir/main.c.o: main.c
CMakeFiles/miniCalc.dir/main.c.o: CMakeFiles/miniCalc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/matteobrachetta/Sviluppo/CLion/C_Exercises/miniCalc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/miniCalc.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/miniCalc.dir/main.c.o -MF CMakeFiles/miniCalc.dir/main.c.o.d -o CMakeFiles/miniCalc.dir/main.c.o -c /Users/matteobrachetta/Sviluppo/CLion/C_Exercises/miniCalc/main.c

CMakeFiles/miniCalc.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/miniCalc.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/matteobrachetta/Sviluppo/CLion/C_Exercises/miniCalc/main.c > CMakeFiles/miniCalc.dir/main.c.i

CMakeFiles/miniCalc.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/miniCalc.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/matteobrachetta/Sviluppo/CLion/C_Exercises/miniCalc/main.c -o CMakeFiles/miniCalc.dir/main.c.s

# Object files for target miniCalc
miniCalc_OBJECTS = \
"CMakeFiles/miniCalc.dir/main.c.o"

# External object files for target miniCalc
miniCalc_EXTERNAL_OBJECTS =

miniCalc: CMakeFiles/miniCalc.dir/main.c.o
miniCalc: CMakeFiles/miniCalc.dir/build.make
miniCalc: CMakeFiles/miniCalc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/matteobrachetta/Sviluppo/CLion/C_Exercises/miniCalc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable miniCalc"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/miniCalc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/miniCalc.dir/build: miniCalc
.PHONY : CMakeFiles/miniCalc.dir/build

CMakeFiles/miniCalc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/miniCalc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/miniCalc.dir/clean

CMakeFiles/miniCalc.dir/depend:
	cd /Users/matteobrachetta/Sviluppo/CLion/C_Exercises/miniCalc && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/matteobrachetta/Sviluppo/CLion/C_Exercises/miniCalc /Users/matteobrachetta/Sviluppo/CLion/C_Exercises/miniCalc /Users/matteobrachetta/Sviluppo/CLion/C_Exercises/miniCalc /Users/matteobrachetta/Sviluppo/CLion/C_Exercises/miniCalc /Users/matteobrachetta/Sviluppo/CLion/C_Exercises/miniCalc/CMakeFiles/miniCalc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/miniCalc.dir/depend

