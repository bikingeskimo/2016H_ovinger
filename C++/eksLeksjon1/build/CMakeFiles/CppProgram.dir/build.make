# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_SOURCE_DIR = /home/roger/Documents/Programmering/2016H_ovinger/C++/eksLeksjon1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/roger/Documents/Programmering/2016H_ovinger/C++/eksLeksjon1/build

# Include any dependencies generated for this target.
include CMakeFiles/CppProgram.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CppProgram.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CppProgram.dir/flags.make

CMakeFiles/CppProgram.dir/CppProgram.cpp.o: CMakeFiles/CppProgram.dir/flags.make
CMakeFiles/CppProgram.dir/CppProgram.cpp.o: ../CppProgram.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/roger/Documents/Programmering/2016H_ovinger/C++/eksLeksjon1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CppProgram.dir/CppProgram.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CppProgram.dir/CppProgram.cpp.o -c /home/roger/Documents/Programmering/2016H_ovinger/C++/eksLeksjon1/CppProgram.cpp

CMakeFiles/CppProgram.dir/CppProgram.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CppProgram.dir/CppProgram.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/roger/Documents/Programmering/2016H_ovinger/C++/eksLeksjon1/CppProgram.cpp > CMakeFiles/CppProgram.dir/CppProgram.cpp.i

CMakeFiles/CppProgram.dir/CppProgram.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CppProgram.dir/CppProgram.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/roger/Documents/Programmering/2016H_ovinger/C++/eksLeksjon1/CppProgram.cpp -o CMakeFiles/CppProgram.dir/CppProgram.cpp.s

CMakeFiles/CppProgram.dir/CppProgram.cpp.o.requires:

.PHONY : CMakeFiles/CppProgram.dir/CppProgram.cpp.o.requires

CMakeFiles/CppProgram.dir/CppProgram.cpp.o.provides: CMakeFiles/CppProgram.dir/CppProgram.cpp.o.requires
	$(MAKE) -f CMakeFiles/CppProgram.dir/build.make CMakeFiles/CppProgram.dir/CppProgram.cpp.o.provides.build
.PHONY : CMakeFiles/CppProgram.dir/CppProgram.cpp.o.provides

CMakeFiles/CppProgram.dir/CppProgram.cpp.o.provides.build: CMakeFiles/CppProgram.dir/CppProgram.cpp.o


# Object files for target CppProgram
CppProgram_OBJECTS = \
"CMakeFiles/CppProgram.dir/CppProgram.cpp.o"

# External object files for target CppProgram
CppProgram_EXTERNAL_OBJECTS =

CppProgram: CMakeFiles/CppProgram.dir/CppProgram.cpp.o
CppProgram: CMakeFiles/CppProgram.dir/build.make
CppProgram: CMakeFiles/CppProgram.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/roger/Documents/Programmering/2016H_ovinger/C++/eksLeksjon1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CppProgram"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CppProgram.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CppProgram.dir/build: CppProgram

.PHONY : CMakeFiles/CppProgram.dir/build

CMakeFiles/CppProgram.dir/requires: CMakeFiles/CppProgram.dir/CppProgram.cpp.o.requires

.PHONY : CMakeFiles/CppProgram.dir/requires

CMakeFiles/CppProgram.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CppProgram.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CppProgram.dir/clean

CMakeFiles/CppProgram.dir/depend:
	cd /home/roger/Documents/Programmering/2016H_ovinger/C++/eksLeksjon1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/roger/Documents/Programmering/2016H_ovinger/C++/eksLeksjon1 /home/roger/Documents/Programmering/2016H_ovinger/C++/eksLeksjon1 /home/roger/Documents/Programmering/2016H_ovinger/C++/eksLeksjon1/build /home/roger/Documents/Programmering/2016H_ovinger/C++/eksLeksjon1/build /home/roger/Documents/Programmering/2016H_ovinger/C++/eksLeksjon1/build/CMakeFiles/CppProgram.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CppProgram.dir/depend

