# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.25

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\environment\cmake-3.25.2-windows-x86_64\bin\cmake.exe

# The command to remove a file.
RM = C:\environment\cmake-3.25.2-windows-x86_64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\demo\demo_cpp\1_base_syntax

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\demo\demo_cpp\1_base_syntax\build

# Include any dependencies generated for this target.
include 110_enum/CMakeFiles/demo_110.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include 110_enum/CMakeFiles/demo_110.dir/compiler_depend.make

# Include the progress variables for this target.
include 110_enum/CMakeFiles/demo_110.dir/progress.make

# Include the compile flags for this target's objects.
include 110_enum/CMakeFiles/demo_110.dir/flags.make

110_enum/CMakeFiles/demo_110.dir/demo1.cpp.obj: 110_enum/CMakeFiles/demo_110.dir/flags.make
110_enum/CMakeFiles/demo_110.dir/demo1.cpp.obj: 110_enum/CMakeFiles/demo_110.dir/includes_CXX.rsp
110_enum/CMakeFiles/demo_110.dir/demo1.cpp.obj: E:/demo/demo_cpp/1_base_syntax/110_enum/demo1.cpp
110_enum/CMakeFiles/demo_110.dir/demo1.cpp.obj: 110_enum/CMakeFiles/demo_110.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\demo\demo_cpp\1_base_syntax\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object 110_enum/CMakeFiles/demo_110.dir/demo1.cpp.obj"
	cd /d E:\demo\demo_cpp\1_base_syntax\build\110_enum && C:\environment\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT 110_enum/CMakeFiles/demo_110.dir/demo1.cpp.obj -MF CMakeFiles\demo_110.dir\demo1.cpp.obj.d -o CMakeFiles\demo_110.dir\demo1.cpp.obj -c E:\demo\demo_cpp\1_base_syntax\110_enum\demo1.cpp

110_enum/CMakeFiles/demo_110.dir/demo1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/demo_110.dir/demo1.cpp.i"
	cd /d E:\demo\demo_cpp\1_base_syntax\build\110_enum && C:\environment\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\demo\demo_cpp\1_base_syntax\110_enum\demo1.cpp > CMakeFiles\demo_110.dir\demo1.cpp.i

110_enum/CMakeFiles/demo_110.dir/demo1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/demo_110.dir/demo1.cpp.s"
	cd /d E:\demo\demo_cpp\1_base_syntax\build\110_enum && C:\environment\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\demo\demo_cpp\1_base_syntax\110_enum\demo1.cpp -o CMakeFiles\demo_110.dir\demo1.cpp.s

# Object files for target demo_110
demo_110_OBJECTS = \
"CMakeFiles/demo_110.dir/demo1.cpp.obj"

# External object files for target demo_110
demo_110_EXTERNAL_OBJECTS =

110_enum/demo_110.exe: 110_enum/CMakeFiles/demo_110.dir/demo1.cpp.obj
110_enum/demo_110.exe: 110_enum/CMakeFiles/demo_110.dir/build.make
110_enum/demo_110.exe: 110_enum/CMakeFiles/demo_110.dir/linkLibs.rsp
110_enum/demo_110.exe: 110_enum/CMakeFiles/demo_110.dir/objects1
110_enum/demo_110.exe: 110_enum/CMakeFiles/demo_110.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\demo\demo_cpp\1_base_syntax\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable demo_110.exe"
	cd /d E:\demo\demo_cpp\1_base_syntax\build\110_enum && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\demo_110.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
110_enum/CMakeFiles/demo_110.dir/build: 110_enum/demo_110.exe
.PHONY : 110_enum/CMakeFiles/demo_110.dir/build

110_enum/CMakeFiles/demo_110.dir/clean:
	cd /d E:\demo\demo_cpp\1_base_syntax\build\110_enum && $(CMAKE_COMMAND) -P CMakeFiles\demo_110.dir\cmake_clean.cmake
.PHONY : 110_enum/CMakeFiles/demo_110.dir/clean

110_enum/CMakeFiles/demo_110.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\demo\demo_cpp\1_base_syntax E:\demo\demo_cpp\1_base_syntax\110_enum E:\demo\demo_cpp\1_base_syntax\build E:\demo\demo_cpp\1_base_syntax\build\110_enum E:\demo\demo_cpp\1_base_syntax\build\110_enum\CMakeFiles\demo_110.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : 110_enum/CMakeFiles/demo_110.dir/depend

