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
CMAKE_COMMAND = /usr/local/cmake-3.22.1-linux-x86_64/bin/cmake

# The command to remove a file.
RM = /usr/local/cmake-3.22.1-linux-x86_64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/wsed3rd/mycode/cpp/source_file/g2048

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wsed3rd/mycode/cpp/source_file/g2048/build

# Include any dependencies generated for this target.
include CMakeFiles/G2048.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/G2048.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/G2048.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/G2048.dir/flags.make

CMakeFiles/G2048.dir/main.cpp.o: CMakeFiles/G2048.dir/flags.make
CMakeFiles/G2048.dir/main.cpp.o: ../main.cpp
CMakeFiles/G2048.dir/main.cpp.o: CMakeFiles/G2048.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wsed3rd/mycode/cpp/source_file/g2048/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/G2048.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/G2048.dir/main.cpp.o -MF CMakeFiles/G2048.dir/main.cpp.o.d -o CMakeFiles/G2048.dir/main.cpp.o -c /home/wsed3rd/mycode/cpp/source_file/g2048/main.cpp

CMakeFiles/G2048.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/G2048.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wsed3rd/mycode/cpp/source_file/g2048/main.cpp > CMakeFiles/G2048.dir/main.cpp.i

CMakeFiles/G2048.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/G2048.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wsed3rd/mycode/cpp/source_file/g2048/main.cpp -o CMakeFiles/G2048.dir/main.cpp.s

# Object files for target G2048
G2048_OBJECTS = \
"CMakeFiles/G2048.dir/main.cpp.o"

# External object files for target G2048
G2048_EXTERNAL_OBJECTS =

G2048: CMakeFiles/G2048.dir/main.cpp.o
G2048: CMakeFiles/G2048.dir/build.make
G2048: CMakeFiles/G2048.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/wsed3rd/mycode/cpp/source_file/g2048/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable G2048"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/G2048.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/G2048.dir/build: G2048
.PHONY : CMakeFiles/G2048.dir/build

CMakeFiles/G2048.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/G2048.dir/cmake_clean.cmake
.PHONY : CMakeFiles/G2048.dir/clean

CMakeFiles/G2048.dir/depend:
	cd /home/wsed3rd/mycode/cpp/source_file/g2048/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wsed3rd/mycode/cpp/source_file/g2048 /home/wsed3rd/mycode/cpp/source_file/g2048 /home/wsed3rd/mycode/cpp/source_file/g2048/build /home/wsed3rd/mycode/cpp/source_file/g2048/build /home/wsed3rd/mycode/cpp/source_file/g2048/build/CMakeFiles/G2048.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/G2048.dir/depend

