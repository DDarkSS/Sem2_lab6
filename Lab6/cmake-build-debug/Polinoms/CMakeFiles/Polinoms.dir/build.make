# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mikalbr/Projects/Sem2/Lab6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mikalbr/Projects/Sem2/Lab6/cmake-build-debug

# Include any dependencies generated for this target.
include Polinoms/CMakeFiles/Polinoms.dir/depend.make

# Include the progress variables for this target.
include Polinoms/CMakeFiles/Polinoms.dir/progress.make

# Include the compile flags for this target's objects.
include Polinoms/CMakeFiles/Polinoms.dir/flags.make

Polinoms/CMakeFiles/Polinoms.dir/Terms.cpp.o: Polinoms/CMakeFiles/Polinoms.dir/flags.make
Polinoms/CMakeFiles/Polinoms.dir/Terms.cpp.o: ../Polinoms/Terms.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mikalbr/Projects/Sem2/Lab6/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Polinoms/CMakeFiles/Polinoms.dir/Terms.cpp.o"
	cd /Users/mikalbr/Projects/Sem2/Lab6/cmake-build-debug/Polinoms && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Polinoms.dir/Terms.cpp.o -c /Users/mikalbr/Projects/Sem2/Lab6/Polinoms/Terms.cpp

Polinoms/CMakeFiles/Polinoms.dir/Terms.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Polinoms.dir/Terms.cpp.i"
	cd /Users/mikalbr/Projects/Sem2/Lab6/cmake-build-debug/Polinoms && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mikalbr/Projects/Sem2/Lab6/Polinoms/Terms.cpp > CMakeFiles/Polinoms.dir/Terms.cpp.i

Polinoms/CMakeFiles/Polinoms.dir/Terms.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Polinoms.dir/Terms.cpp.s"
	cd /Users/mikalbr/Projects/Sem2/Lab6/cmake-build-debug/Polinoms && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mikalbr/Projects/Sem2/Lab6/Polinoms/Terms.cpp -o CMakeFiles/Polinoms.dir/Terms.cpp.s

Polinoms/CMakeFiles/Polinoms.dir/Polynomial.cpp.o: Polinoms/CMakeFiles/Polinoms.dir/flags.make
Polinoms/CMakeFiles/Polinoms.dir/Polynomial.cpp.o: ../Polinoms/Polynomial.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mikalbr/Projects/Sem2/Lab6/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Polinoms/CMakeFiles/Polinoms.dir/Polynomial.cpp.o"
	cd /Users/mikalbr/Projects/Sem2/Lab6/cmake-build-debug/Polinoms && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Polinoms.dir/Polynomial.cpp.o -c /Users/mikalbr/Projects/Sem2/Lab6/Polinoms/Polynomial.cpp

Polinoms/CMakeFiles/Polinoms.dir/Polynomial.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Polinoms.dir/Polynomial.cpp.i"
	cd /Users/mikalbr/Projects/Sem2/Lab6/cmake-build-debug/Polinoms && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mikalbr/Projects/Sem2/Lab6/Polinoms/Polynomial.cpp > CMakeFiles/Polinoms.dir/Polynomial.cpp.i

Polinoms/CMakeFiles/Polinoms.dir/Polynomial.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Polinoms.dir/Polynomial.cpp.s"
	cd /Users/mikalbr/Projects/Sem2/Lab6/cmake-build-debug/Polinoms && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mikalbr/Projects/Sem2/Lab6/Polinoms/Polynomial.cpp -o CMakeFiles/Polinoms.dir/Polynomial.cpp.s

# Object files for target Polinoms
Polinoms_OBJECTS = \
"CMakeFiles/Polinoms.dir/Terms.cpp.o" \
"CMakeFiles/Polinoms.dir/Polynomial.cpp.o"

# External object files for target Polinoms
Polinoms_EXTERNAL_OBJECTS =

Polinoms/libPolinoms.a: Polinoms/CMakeFiles/Polinoms.dir/Terms.cpp.o
Polinoms/libPolinoms.a: Polinoms/CMakeFiles/Polinoms.dir/Polynomial.cpp.o
Polinoms/libPolinoms.a: Polinoms/CMakeFiles/Polinoms.dir/build.make
Polinoms/libPolinoms.a: Polinoms/CMakeFiles/Polinoms.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mikalbr/Projects/Sem2/Lab6/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libPolinoms.a"
	cd /Users/mikalbr/Projects/Sem2/Lab6/cmake-build-debug/Polinoms && $(CMAKE_COMMAND) -P CMakeFiles/Polinoms.dir/cmake_clean_target.cmake
	cd /Users/mikalbr/Projects/Sem2/Lab6/cmake-build-debug/Polinoms && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Polinoms.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Polinoms/CMakeFiles/Polinoms.dir/build: Polinoms/libPolinoms.a

.PHONY : Polinoms/CMakeFiles/Polinoms.dir/build

Polinoms/CMakeFiles/Polinoms.dir/clean:
	cd /Users/mikalbr/Projects/Sem2/Lab6/cmake-build-debug/Polinoms && $(CMAKE_COMMAND) -P CMakeFiles/Polinoms.dir/cmake_clean.cmake
.PHONY : Polinoms/CMakeFiles/Polinoms.dir/clean

Polinoms/CMakeFiles/Polinoms.dir/depend:
	cd /Users/mikalbr/Projects/Sem2/Lab6/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mikalbr/Projects/Sem2/Lab6 /Users/mikalbr/Projects/Sem2/Lab6/Polinoms /Users/mikalbr/Projects/Sem2/Lab6/cmake-build-debug /Users/mikalbr/Projects/Sem2/Lab6/cmake-build-debug/Polinoms /Users/mikalbr/Projects/Sem2/Lab6/cmake-build-debug/Polinoms/CMakeFiles/Polinoms.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Polinoms/CMakeFiles/Polinoms.dir/depend

