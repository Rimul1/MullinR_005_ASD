# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Users\admin\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Users\admin\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\MullinR_005_ASD\HomeWork_ASD\HomeWork03.03.21first

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\MullinR_005_ASD\HomeWork_ASD\HomeWork03.03.21first\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/HomeWork03_03_21.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HomeWork03_03_21.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HomeWork03_03_21.dir/flags.make

CMakeFiles/HomeWork03_03_21.dir/Stack.cpp.obj: CMakeFiles/HomeWork03_03_21.dir/flags.make
CMakeFiles/HomeWork03_03_21.dir/Stack.cpp.obj: ../Stack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\MullinR_005_ASD\HomeWork_ASD\HomeWork03.03.21first\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HomeWork03_03_21.dir/Stack.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\HomeWork03_03_21.dir\Stack.cpp.obj -c C:\MullinR_005_ASD\HomeWork_ASD\HomeWork03.03.21first\Stack.cpp

CMakeFiles/HomeWork03_03_21.dir/Stack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HomeWork03_03_21.dir/Stack.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\MullinR_005_ASD\HomeWork_ASD\HomeWork03.03.21first\Stack.cpp > CMakeFiles\HomeWork03_03_21.dir\Stack.cpp.i

CMakeFiles/HomeWork03_03_21.dir/Stack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HomeWork03_03_21.dir/Stack.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\MullinR_005_ASD\HomeWork_ASD\HomeWork03.03.21first\Stack.cpp -o CMakeFiles\HomeWork03_03_21.dir\Stack.cpp.s

# Object files for target HomeWork03_03_21
HomeWork03_03_21_OBJECTS = \
"CMakeFiles/HomeWork03_03_21.dir/Stack.cpp.obj"

# External object files for target HomeWork03_03_21
HomeWork03_03_21_EXTERNAL_OBJECTS =

HomeWork03_03_21.exe: CMakeFiles/HomeWork03_03_21.dir/Stack.cpp.obj
HomeWork03_03_21.exe: CMakeFiles/HomeWork03_03_21.dir/build.make
HomeWork03_03_21.exe: CMakeFiles/HomeWork03_03_21.dir/linklibs.rsp
HomeWork03_03_21.exe: CMakeFiles/HomeWork03_03_21.dir/objects1.rsp
HomeWork03_03_21.exe: CMakeFiles/HomeWork03_03_21.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\MullinR_005_ASD\HomeWork_ASD\HomeWork03.03.21first\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable HomeWork03_03_21.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\HomeWork03_03_21.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HomeWork03_03_21.dir/build: HomeWork03_03_21.exe

.PHONY : CMakeFiles/HomeWork03_03_21.dir/build

CMakeFiles/HomeWork03_03_21.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\HomeWork03_03_21.dir\cmake_clean.cmake
.PHONY : CMakeFiles/HomeWork03_03_21.dir/clean

CMakeFiles/HomeWork03_03_21.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\MullinR_005_ASD\HomeWork_ASD\HomeWork03.03.21first C:\MullinR_005_ASD\HomeWork_ASD\HomeWork03.03.21first C:\MullinR_005_ASD\HomeWork_ASD\HomeWork03.03.21first\cmake-build-debug C:\MullinR_005_ASD\HomeWork_ASD\HomeWork03.03.21first\cmake-build-debug C:\MullinR_005_ASD\HomeWork_ASD\HomeWork03.03.21first\cmake-build-debug\CMakeFiles\HomeWork03_03_21.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/HomeWork03_03_21.dir/depend

