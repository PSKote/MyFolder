# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_SOURCE_DIR = /home/prajwal/Desktop/CProg/player-3.0.2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/prajwal/Desktop/CProg/player-3.0.2/build

# Include any dependencies generated for this target.
include utils/pmap/CMakeFiles/lodo.dir/depend.make

# Include the progress variables for this target.
include utils/pmap/CMakeFiles/lodo.dir/progress.make

# Include the compile flags for this target's objects.
include utils/pmap/CMakeFiles/lodo.dir/flags.make

utils/pmap/CMakeFiles/lodo.dir/lodo.o: utils/pmap/CMakeFiles/lodo.dir/flags.make
utils/pmap/CMakeFiles/lodo.dir/lodo.o: ../utils/pmap/lodo.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/prajwal/Desktop/CProg/player-3.0.2/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object utils/pmap/CMakeFiles/lodo.dir/lodo.o"
	cd /home/prajwal/Desktop/CProg/player-3.0.2/build/utils/pmap && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS)  --fast-math -o CMakeFiles/lodo.dir/lodo.o -c /home/prajwal/Desktop/CProg/player-3.0.2/utils/pmap/lodo.cpp

utils/pmap/CMakeFiles/lodo.dir/lodo.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lodo.dir/lodo.i"
	cd /home/prajwal/Desktop/CProg/player-3.0.2/build/utils/pmap && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)  --fast-math -E /home/prajwal/Desktop/CProg/player-3.0.2/utils/pmap/lodo.cpp > CMakeFiles/lodo.dir/lodo.i

utils/pmap/CMakeFiles/lodo.dir/lodo.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lodo.dir/lodo.s"
	cd /home/prajwal/Desktop/CProg/player-3.0.2/build/utils/pmap && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)  --fast-math -S /home/prajwal/Desktop/CProg/player-3.0.2/utils/pmap/lodo.cpp -o CMakeFiles/lodo.dir/lodo.s

utils/pmap/CMakeFiles/lodo.dir/lodo.o.requires:
.PHONY : utils/pmap/CMakeFiles/lodo.dir/lodo.o.requires

utils/pmap/CMakeFiles/lodo.dir/lodo.o.provides: utils/pmap/CMakeFiles/lodo.dir/lodo.o.requires
	$(MAKE) -f utils/pmap/CMakeFiles/lodo.dir/build.make utils/pmap/CMakeFiles/lodo.dir/lodo.o.provides.build
.PHONY : utils/pmap/CMakeFiles/lodo.dir/lodo.o.provides

utils/pmap/CMakeFiles/lodo.dir/lodo.o.provides.build: utils/pmap/CMakeFiles/lodo.dir/lodo.o

utils/pmap/CMakeFiles/lodo.dir/slap.o: utils/pmap/CMakeFiles/lodo.dir/flags.make
utils/pmap/CMakeFiles/lodo.dir/slap.o: ../utils/pmap/slap.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/prajwal/Desktop/CProg/player-3.0.2/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object utils/pmap/CMakeFiles/lodo.dir/slap.o"
	cd /home/prajwal/Desktop/CProg/player-3.0.2/build/utils/pmap && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS)  --fast-math -o CMakeFiles/lodo.dir/slap.o -c /home/prajwal/Desktop/CProg/player-3.0.2/utils/pmap/slap.cpp

utils/pmap/CMakeFiles/lodo.dir/slap.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lodo.dir/slap.i"
	cd /home/prajwal/Desktop/CProg/player-3.0.2/build/utils/pmap && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)  --fast-math -E /home/prajwal/Desktop/CProg/player-3.0.2/utils/pmap/slap.cpp > CMakeFiles/lodo.dir/slap.i

utils/pmap/CMakeFiles/lodo.dir/slap.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lodo.dir/slap.s"
	cd /home/prajwal/Desktop/CProg/player-3.0.2/build/utils/pmap && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)  --fast-math -S /home/prajwal/Desktop/CProg/player-3.0.2/utils/pmap/slap.cpp -o CMakeFiles/lodo.dir/slap.s

utils/pmap/CMakeFiles/lodo.dir/slap.o.requires:
.PHONY : utils/pmap/CMakeFiles/lodo.dir/slap.o.requires

utils/pmap/CMakeFiles/lodo.dir/slap.o.provides: utils/pmap/CMakeFiles/lodo.dir/slap.o.requires
	$(MAKE) -f utils/pmap/CMakeFiles/lodo.dir/build.make utils/pmap/CMakeFiles/lodo.dir/slap.o.provides.build
.PHONY : utils/pmap/CMakeFiles/lodo.dir/slap.o.provides

utils/pmap/CMakeFiles/lodo.dir/slap.o.provides.build: utils/pmap/CMakeFiles/lodo.dir/slap.o

# Object files for target lodo
lodo_OBJECTS = \
"CMakeFiles/lodo.dir/lodo.o" \
"CMakeFiles/lodo.dir/slap.o"

# External object files for target lodo
lodo_EXTERNAL_OBJECTS =

utils/pmap/liblodo.so.3.0.2: utils/pmap/CMakeFiles/lodo.dir/lodo.o
utils/pmap/liblodo.so.3.0.2: utils/pmap/CMakeFiles/lodo.dir/slap.o
utils/pmap/liblodo.so.3.0.2: utils/pmap/CMakeFiles/lodo.dir/build.make
utils/pmap/liblodo.so.3.0.2: libplayercore/libplayercore.so.3.0.2
utils/pmap/liblodo.so.3.0.2: /usr/lib/i386-linux-gnu/libGLU.so
utils/pmap/liblodo.so.3.0.2: /usr/lib/i386-linux-gnu/libGL.so
utils/pmap/liblodo.so.3.0.2: /usr/lib/i386-linux-gnu/libSM.so
utils/pmap/liblodo.so.3.0.2: /usr/lib/i386-linux-gnu/libICE.so
utils/pmap/liblodo.so.3.0.2: /usr/lib/i386-linux-gnu/libX11.so
utils/pmap/liblodo.so.3.0.2: /usr/lib/i386-linux-gnu/libXext.so
utils/pmap/liblodo.so.3.0.2: /usr/lib/i386-linux-gnu/libglut.so
utils/pmap/liblodo.so.3.0.2: /usr/lib/i386-linux-gnu/libXmu.so
utils/pmap/liblodo.so.3.0.2: /usr/lib/i386-linux-gnu/libXi.so
utils/pmap/liblodo.so.3.0.2: libplayerinterface/libplayerinterface.so.3.0.2
utils/pmap/liblodo.so.3.0.2: libplayercommon/libplayercommon.so.3.0.2
utils/pmap/liblodo.so.3.0.2: utils/pmap/CMakeFiles/lodo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library liblodo.so"
	cd /home/prajwal/Desktop/CProg/player-3.0.2/build/utils/pmap && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lodo.dir/link.txt --verbose=$(VERBOSE)
	cd /home/prajwal/Desktop/CProg/player-3.0.2/build/utils/pmap && $(CMAKE_COMMAND) -E cmake_symlink_library liblodo.so.3.0.2 liblodo.so.3.0 liblodo.so

utils/pmap/liblodo.so.3.0: utils/pmap/liblodo.so.3.0.2

utils/pmap/liblodo.so: utils/pmap/liblodo.so.3.0.2

# Rule to build all files generated by this target.
utils/pmap/CMakeFiles/lodo.dir/build: utils/pmap/liblodo.so
.PHONY : utils/pmap/CMakeFiles/lodo.dir/build

utils/pmap/CMakeFiles/lodo.dir/requires: utils/pmap/CMakeFiles/lodo.dir/lodo.o.requires
utils/pmap/CMakeFiles/lodo.dir/requires: utils/pmap/CMakeFiles/lodo.dir/slap.o.requires
.PHONY : utils/pmap/CMakeFiles/lodo.dir/requires

utils/pmap/CMakeFiles/lodo.dir/clean:
	cd /home/prajwal/Desktop/CProg/player-3.0.2/build/utils/pmap && $(CMAKE_COMMAND) -P CMakeFiles/lodo.dir/cmake_clean.cmake
.PHONY : utils/pmap/CMakeFiles/lodo.dir/clean

utils/pmap/CMakeFiles/lodo.dir/depend:
	cd /home/prajwal/Desktop/CProg/player-3.0.2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/prajwal/Desktop/CProg/player-3.0.2 /home/prajwal/Desktop/CProg/player-3.0.2/utils/pmap /home/prajwal/Desktop/CProg/player-3.0.2/build /home/prajwal/Desktop/CProg/player-3.0.2/build/utils/pmap /home/prajwal/Desktop/CProg/player-3.0.2/build/utils/pmap/CMakeFiles/lodo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : utils/pmap/CMakeFiles/lodo.dir/depend
