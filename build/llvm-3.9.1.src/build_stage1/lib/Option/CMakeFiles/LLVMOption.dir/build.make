# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.11

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
CMAKE_SOURCE_DIR = /home/anjan/github.com/osxcross/build/llvm-3.9.1.src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1

# Include any dependencies generated for this target.
include lib/Option/CMakeFiles/LLVMOption.dir/depend.make

# Include the progress variables for this target.
include lib/Option/CMakeFiles/LLVMOption.dir/progress.make

# Include the compile flags for this target's objects.
include lib/Option/CMakeFiles/LLVMOption.dir/flags.make

lib/Option/CMakeFiles/LLVMOption.dir/Arg.cpp.o: lib/Option/CMakeFiles/LLVMOption.dir/flags.make
lib/Option/CMakeFiles/LLVMOption.dir/Arg.cpp.o: ../lib/Option/Arg.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/Option/CMakeFiles/LLVMOption.dir/Arg.cpp.o"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/lib/Option && /usr/lib64/ccache/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMOption.dir/Arg.cpp.o -c /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Option/Arg.cpp

lib/Option/CMakeFiles/LLVMOption.dir/Arg.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMOption.dir/Arg.cpp.i"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/lib/Option && /usr/lib64/ccache/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Option/Arg.cpp > CMakeFiles/LLVMOption.dir/Arg.cpp.i

lib/Option/CMakeFiles/LLVMOption.dir/Arg.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMOption.dir/Arg.cpp.s"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/lib/Option && /usr/lib64/ccache/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Option/Arg.cpp -o CMakeFiles/LLVMOption.dir/Arg.cpp.s

lib/Option/CMakeFiles/LLVMOption.dir/ArgList.cpp.o: lib/Option/CMakeFiles/LLVMOption.dir/flags.make
lib/Option/CMakeFiles/LLVMOption.dir/ArgList.cpp.o: ../lib/Option/ArgList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object lib/Option/CMakeFiles/LLVMOption.dir/ArgList.cpp.o"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/lib/Option && /usr/lib64/ccache/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMOption.dir/ArgList.cpp.o -c /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Option/ArgList.cpp

lib/Option/CMakeFiles/LLVMOption.dir/ArgList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMOption.dir/ArgList.cpp.i"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/lib/Option && /usr/lib64/ccache/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Option/ArgList.cpp > CMakeFiles/LLVMOption.dir/ArgList.cpp.i

lib/Option/CMakeFiles/LLVMOption.dir/ArgList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMOption.dir/ArgList.cpp.s"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/lib/Option && /usr/lib64/ccache/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Option/ArgList.cpp -o CMakeFiles/LLVMOption.dir/ArgList.cpp.s

lib/Option/CMakeFiles/LLVMOption.dir/Option.cpp.o: lib/Option/CMakeFiles/LLVMOption.dir/flags.make
lib/Option/CMakeFiles/LLVMOption.dir/Option.cpp.o: ../lib/Option/Option.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object lib/Option/CMakeFiles/LLVMOption.dir/Option.cpp.o"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/lib/Option && /usr/lib64/ccache/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMOption.dir/Option.cpp.o -c /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Option/Option.cpp

lib/Option/CMakeFiles/LLVMOption.dir/Option.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMOption.dir/Option.cpp.i"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/lib/Option && /usr/lib64/ccache/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Option/Option.cpp > CMakeFiles/LLVMOption.dir/Option.cpp.i

lib/Option/CMakeFiles/LLVMOption.dir/Option.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMOption.dir/Option.cpp.s"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/lib/Option && /usr/lib64/ccache/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Option/Option.cpp -o CMakeFiles/LLVMOption.dir/Option.cpp.s

lib/Option/CMakeFiles/LLVMOption.dir/OptTable.cpp.o: lib/Option/CMakeFiles/LLVMOption.dir/flags.make
lib/Option/CMakeFiles/LLVMOption.dir/OptTable.cpp.o: ../lib/Option/OptTable.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object lib/Option/CMakeFiles/LLVMOption.dir/OptTable.cpp.o"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/lib/Option && /usr/lib64/ccache/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMOption.dir/OptTable.cpp.o -c /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Option/OptTable.cpp

lib/Option/CMakeFiles/LLVMOption.dir/OptTable.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMOption.dir/OptTable.cpp.i"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/lib/Option && /usr/lib64/ccache/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Option/OptTable.cpp > CMakeFiles/LLVMOption.dir/OptTable.cpp.i

lib/Option/CMakeFiles/LLVMOption.dir/OptTable.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMOption.dir/OptTable.cpp.s"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/lib/Option && /usr/lib64/ccache/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Option/OptTable.cpp -o CMakeFiles/LLVMOption.dir/OptTable.cpp.s

# Object files for target LLVMOption
LLVMOption_OBJECTS = \
"CMakeFiles/LLVMOption.dir/Arg.cpp.o" \
"CMakeFiles/LLVMOption.dir/ArgList.cpp.o" \
"CMakeFiles/LLVMOption.dir/Option.cpp.o" \
"CMakeFiles/LLVMOption.dir/OptTable.cpp.o"

# External object files for target LLVMOption
LLVMOption_EXTERNAL_OBJECTS =

lib/libLLVMOption.a: lib/Option/CMakeFiles/LLVMOption.dir/Arg.cpp.o
lib/libLLVMOption.a: lib/Option/CMakeFiles/LLVMOption.dir/ArgList.cpp.o
lib/libLLVMOption.a: lib/Option/CMakeFiles/LLVMOption.dir/Option.cpp.o
lib/libLLVMOption.a: lib/Option/CMakeFiles/LLVMOption.dir/OptTable.cpp.o
lib/libLLVMOption.a: lib/Option/CMakeFiles/LLVMOption.dir/build.make
lib/libLLVMOption.a: lib/Option/CMakeFiles/LLVMOption.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library ../libLLVMOption.a"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/lib/Option && $(CMAKE_COMMAND) -P CMakeFiles/LLVMOption.dir/cmake_clean_target.cmake
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/lib/Option && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMOption.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/Option/CMakeFiles/LLVMOption.dir/build: lib/libLLVMOption.a

.PHONY : lib/Option/CMakeFiles/LLVMOption.dir/build

lib/Option/CMakeFiles/LLVMOption.dir/clean:
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/lib/Option && $(CMAKE_COMMAND) -P CMakeFiles/LLVMOption.dir/cmake_clean.cmake
.PHONY : lib/Option/CMakeFiles/LLVMOption.dir/clean

lib/Option/CMakeFiles/LLVMOption.dir/depend:
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anjan/github.com/osxcross/build/llvm-3.9.1.src /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Option /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1 /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/lib/Option /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/lib/Option/CMakeFiles/LLVMOption.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Option/CMakeFiles/LLVMOption.dir/depend
