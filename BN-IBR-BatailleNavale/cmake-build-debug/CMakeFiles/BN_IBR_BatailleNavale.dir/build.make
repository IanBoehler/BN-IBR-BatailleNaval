# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Clion\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Clion\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Ian.Boehler\CLionProjects\BN-IBR-BatailleNavale

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Ian.Boehler\CLionProjects\BN-IBR-BatailleNavale\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BN_IBR_BatailleNavale.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BN_IBR_BatailleNavale.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BN_IBR_BatailleNavale.dir/flags.make

CMakeFiles/BN_IBR_BatailleNavale.dir/main.c.obj: CMakeFiles/BN_IBR_BatailleNavale.dir/flags.make
CMakeFiles/BN_IBR_BatailleNavale.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Ian.Boehler\CLionProjects\BN-IBR-BatailleNavale\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/BN_IBR_BatailleNavale.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\BN_IBR_BatailleNavale.dir\main.c.obj   -c C:\Users\Ian.Boehler\CLionProjects\BN-IBR-BatailleNavale\main.c

CMakeFiles/BN_IBR_BatailleNavale.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/BN_IBR_BatailleNavale.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Ian.Boehler\CLionProjects\BN-IBR-BatailleNavale\main.c > CMakeFiles\BN_IBR_BatailleNavale.dir\main.c.i

CMakeFiles/BN_IBR_BatailleNavale.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/BN_IBR_BatailleNavale.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Ian.Boehler\CLionProjects\BN-IBR-BatailleNavale\main.c -o CMakeFiles\BN_IBR_BatailleNavale.dir\main.c.s

# Object files for target BN_IBR_BatailleNavale
BN_IBR_BatailleNavale_OBJECTS = \
"CMakeFiles/BN_IBR_BatailleNavale.dir/main.c.obj"

# External object files for target BN_IBR_BatailleNavale
BN_IBR_BatailleNavale_EXTERNAL_OBJECTS =

BN_IBR_BatailleNavale.exe: CMakeFiles/BN_IBR_BatailleNavale.dir/main.c.obj
BN_IBR_BatailleNavale.exe: CMakeFiles/BN_IBR_BatailleNavale.dir/build.make
BN_IBR_BatailleNavale.exe: CMakeFiles/BN_IBR_BatailleNavale.dir/linklibs.rsp
BN_IBR_BatailleNavale.exe: CMakeFiles/BN_IBR_BatailleNavale.dir/objects1.rsp
BN_IBR_BatailleNavale.exe: CMakeFiles/BN_IBR_BatailleNavale.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Ian.Boehler\CLionProjects\BN-IBR-BatailleNavale\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable BN_IBR_BatailleNavale.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\BN_IBR_BatailleNavale.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BN_IBR_BatailleNavale.dir/build: BN_IBR_BatailleNavale.exe

.PHONY : CMakeFiles/BN_IBR_BatailleNavale.dir/build

CMakeFiles/BN_IBR_BatailleNavale.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\BN_IBR_BatailleNavale.dir\cmake_clean.cmake
.PHONY : CMakeFiles/BN_IBR_BatailleNavale.dir/clean

CMakeFiles/BN_IBR_BatailleNavale.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Ian.Boehler\CLionProjects\BN-IBR-BatailleNavale C:\Users\Ian.Boehler\CLionProjects\BN-IBR-BatailleNavale C:\Users\Ian.Boehler\CLionProjects\BN-IBR-BatailleNavale\cmake-build-debug C:\Users\Ian.Boehler\CLionProjects\BN-IBR-BatailleNavale\cmake-build-debug C:\Users\Ian.Boehler\CLionProjects\BN-IBR-BatailleNavale\cmake-build-debug\CMakeFiles\BN_IBR_BatailleNavale.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BN_IBR_BatailleNavale.dir/depend
