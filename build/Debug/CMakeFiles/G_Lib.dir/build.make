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
CMAKE_COMMAND = /usr/cmake/bin/cmake

# The command to remove a file.
RM = /usr/cmake/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/wilsonshaw/source/G2048

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wilsonshaw/source/G2048/build

# Include any dependencies generated for this target.
include Debug/CMakeFiles/G_Lib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Debug/CMakeFiles/G_Lib.dir/compiler_depend.make

# Include the progress variables for this target.
include Debug/CMakeFiles/G_Lib.dir/progress.make

# Include the compile flags for this target's objects.
include Debug/CMakeFiles/G_Lib.dir/flags.make

Debug/CMakeFiles/G_Lib.dir/__/src/game.cpp.o: Debug/CMakeFiles/G_Lib.dir/flags.make
Debug/CMakeFiles/G_Lib.dir/__/src/game.cpp.o: ../src/game.cpp
Debug/CMakeFiles/G_Lib.dir/__/src/game.cpp.o: Debug/CMakeFiles/G_Lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wilsonshaw/source/G2048/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Debug/CMakeFiles/G_Lib.dir/__/src/game.cpp.o"
	cd /home/wilsonshaw/source/G2048/build/Debug && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Debug/CMakeFiles/G_Lib.dir/__/src/game.cpp.o -MF CMakeFiles/G_Lib.dir/__/src/game.cpp.o.d -o CMakeFiles/G_Lib.dir/__/src/game.cpp.o -c /home/wilsonshaw/source/G2048/src/game.cpp

Debug/CMakeFiles/G_Lib.dir/__/src/game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/G_Lib.dir/__/src/game.cpp.i"
	cd /home/wilsonshaw/source/G2048/build/Debug && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wilsonshaw/source/G2048/src/game.cpp > CMakeFiles/G_Lib.dir/__/src/game.cpp.i

Debug/CMakeFiles/G_Lib.dir/__/src/game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/G_Lib.dir/__/src/game.cpp.s"
	cd /home/wilsonshaw/source/G2048/build/Debug && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wilsonshaw/source/G2048/src/game.cpp -o CMakeFiles/G_Lib.dir/__/src/game.cpp.s

# Object files for target G_Lib
G_Lib_OBJECTS = \
"CMakeFiles/G_Lib.dir/__/src/game.cpp.o"

# External object files for target G_Lib
G_Lib_EXTERNAL_OBJECTS =

../Debug/Lib/libG_Lib.a: Debug/CMakeFiles/G_Lib.dir/__/src/game.cpp.o
../Debug/Lib/libG_Lib.a: Debug/CMakeFiles/G_Lib.dir/build.make
../Debug/Lib/libG_Lib.a: Debug/CMakeFiles/G_Lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/wilsonshaw/source/G2048/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../Debug/Lib/libG_Lib.a"
	cd /home/wilsonshaw/source/G2048/build/Debug && $(CMAKE_COMMAND) -P CMakeFiles/G_Lib.dir/cmake_clean_target.cmake
	cd /home/wilsonshaw/source/G2048/build/Debug && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/G_Lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Debug/CMakeFiles/G_Lib.dir/build: ../Debug/Lib/libG_Lib.a
.PHONY : Debug/CMakeFiles/G_Lib.dir/build

Debug/CMakeFiles/G_Lib.dir/clean:
	cd /home/wilsonshaw/source/G2048/build/Debug && $(CMAKE_COMMAND) -P CMakeFiles/G_Lib.dir/cmake_clean.cmake
.PHONY : Debug/CMakeFiles/G_Lib.dir/clean

Debug/CMakeFiles/G_Lib.dir/depend:
	cd /home/wilsonshaw/source/G2048/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wilsonshaw/source/G2048 /home/wilsonshaw/source/G2048/Debug /home/wilsonshaw/source/G2048/build /home/wilsonshaw/source/G2048/build/Debug /home/wilsonshaw/source/G2048/build/Debug/CMakeFiles/G_Lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Debug/CMakeFiles/G_Lib.dir/depend

