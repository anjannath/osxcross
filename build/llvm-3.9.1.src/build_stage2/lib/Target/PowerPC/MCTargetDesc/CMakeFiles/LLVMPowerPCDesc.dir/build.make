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
CMAKE_BINARY_DIR = /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2

# Include any dependencies generated for this target.
include lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/depend.make

# Include the progress variables for this target.
include lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/progress.make

# Include the compile flags for this target's objects.
include lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/flags.make

lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCAsmBackend.cpp.o: lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/flags.make
lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCAsmBackend.cpp.o: ../lib/Target/PowerPC/MCTargetDesc/PPCAsmBackend.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCAsmBackend.cpp.o"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Target/PowerPC/MCTargetDesc && /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMPowerPCDesc.dir/PPCAsmBackend.cpp.o -c /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Target/PowerPC/MCTargetDesc/PPCAsmBackend.cpp

lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCAsmBackend.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMPowerPCDesc.dir/PPCAsmBackend.cpp.i"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Target/PowerPC/MCTargetDesc && /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Target/PowerPC/MCTargetDesc/PPCAsmBackend.cpp > CMakeFiles/LLVMPowerPCDesc.dir/PPCAsmBackend.cpp.i

lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCAsmBackend.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMPowerPCDesc.dir/PPCAsmBackend.cpp.s"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Target/PowerPC/MCTargetDesc && /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Target/PowerPC/MCTargetDesc/PPCAsmBackend.cpp -o CMakeFiles/LLVMPowerPCDesc.dir/PPCAsmBackend.cpp.s

lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCMCTargetDesc.cpp.o: lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/flags.make
lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCMCTargetDesc.cpp.o: ../lib/Target/PowerPC/MCTargetDesc/PPCMCTargetDesc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCMCTargetDesc.cpp.o"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Target/PowerPC/MCTargetDesc && /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMPowerPCDesc.dir/PPCMCTargetDesc.cpp.o -c /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Target/PowerPC/MCTargetDesc/PPCMCTargetDesc.cpp

lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCMCTargetDesc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMPowerPCDesc.dir/PPCMCTargetDesc.cpp.i"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Target/PowerPC/MCTargetDesc && /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Target/PowerPC/MCTargetDesc/PPCMCTargetDesc.cpp > CMakeFiles/LLVMPowerPCDesc.dir/PPCMCTargetDesc.cpp.i

lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCMCTargetDesc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMPowerPCDesc.dir/PPCMCTargetDesc.cpp.s"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Target/PowerPC/MCTargetDesc && /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Target/PowerPC/MCTargetDesc/PPCMCTargetDesc.cpp -o CMakeFiles/LLVMPowerPCDesc.dir/PPCMCTargetDesc.cpp.s

lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCMCAsmInfo.cpp.o: lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/flags.make
lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCMCAsmInfo.cpp.o: ../lib/Target/PowerPC/MCTargetDesc/PPCMCAsmInfo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCMCAsmInfo.cpp.o"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Target/PowerPC/MCTargetDesc && /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMPowerPCDesc.dir/PPCMCAsmInfo.cpp.o -c /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Target/PowerPC/MCTargetDesc/PPCMCAsmInfo.cpp

lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCMCAsmInfo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMPowerPCDesc.dir/PPCMCAsmInfo.cpp.i"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Target/PowerPC/MCTargetDesc && /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Target/PowerPC/MCTargetDesc/PPCMCAsmInfo.cpp > CMakeFiles/LLVMPowerPCDesc.dir/PPCMCAsmInfo.cpp.i

lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCMCAsmInfo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMPowerPCDesc.dir/PPCMCAsmInfo.cpp.s"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Target/PowerPC/MCTargetDesc && /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Target/PowerPC/MCTargetDesc/PPCMCAsmInfo.cpp -o CMakeFiles/LLVMPowerPCDesc.dir/PPCMCAsmInfo.cpp.s

lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCMCCodeEmitter.cpp.o: lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/flags.make
lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCMCCodeEmitter.cpp.o: ../lib/Target/PowerPC/MCTargetDesc/PPCMCCodeEmitter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCMCCodeEmitter.cpp.o"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Target/PowerPC/MCTargetDesc && /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMPowerPCDesc.dir/PPCMCCodeEmitter.cpp.o -c /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Target/PowerPC/MCTargetDesc/PPCMCCodeEmitter.cpp

lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCMCCodeEmitter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMPowerPCDesc.dir/PPCMCCodeEmitter.cpp.i"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Target/PowerPC/MCTargetDesc && /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Target/PowerPC/MCTargetDesc/PPCMCCodeEmitter.cpp > CMakeFiles/LLVMPowerPCDesc.dir/PPCMCCodeEmitter.cpp.i

lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCMCCodeEmitter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMPowerPCDesc.dir/PPCMCCodeEmitter.cpp.s"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Target/PowerPC/MCTargetDesc && /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Target/PowerPC/MCTargetDesc/PPCMCCodeEmitter.cpp -o CMakeFiles/LLVMPowerPCDesc.dir/PPCMCCodeEmitter.cpp.s

lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCMCExpr.cpp.o: lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/flags.make
lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCMCExpr.cpp.o: ../lib/Target/PowerPC/MCTargetDesc/PPCMCExpr.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCMCExpr.cpp.o"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Target/PowerPC/MCTargetDesc && /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMPowerPCDesc.dir/PPCMCExpr.cpp.o -c /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Target/PowerPC/MCTargetDesc/PPCMCExpr.cpp

lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCMCExpr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMPowerPCDesc.dir/PPCMCExpr.cpp.i"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Target/PowerPC/MCTargetDesc && /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Target/PowerPC/MCTargetDesc/PPCMCExpr.cpp > CMakeFiles/LLVMPowerPCDesc.dir/PPCMCExpr.cpp.i

lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCMCExpr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMPowerPCDesc.dir/PPCMCExpr.cpp.s"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Target/PowerPC/MCTargetDesc && /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Target/PowerPC/MCTargetDesc/PPCMCExpr.cpp -o CMakeFiles/LLVMPowerPCDesc.dir/PPCMCExpr.cpp.s

lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCPredicates.cpp.o: lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/flags.make
lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCPredicates.cpp.o: ../lib/Target/PowerPC/MCTargetDesc/PPCPredicates.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCPredicates.cpp.o"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Target/PowerPC/MCTargetDesc && /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMPowerPCDesc.dir/PPCPredicates.cpp.o -c /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Target/PowerPC/MCTargetDesc/PPCPredicates.cpp

lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCPredicates.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMPowerPCDesc.dir/PPCPredicates.cpp.i"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Target/PowerPC/MCTargetDesc && /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Target/PowerPC/MCTargetDesc/PPCPredicates.cpp > CMakeFiles/LLVMPowerPCDesc.dir/PPCPredicates.cpp.i

lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCPredicates.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMPowerPCDesc.dir/PPCPredicates.cpp.s"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Target/PowerPC/MCTargetDesc && /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Target/PowerPC/MCTargetDesc/PPCPredicates.cpp -o CMakeFiles/LLVMPowerPCDesc.dir/PPCPredicates.cpp.s

lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCMachObjectWriter.cpp.o: lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/flags.make
lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCMachObjectWriter.cpp.o: ../lib/Target/PowerPC/MCTargetDesc/PPCMachObjectWriter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCMachObjectWriter.cpp.o"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Target/PowerPC/MCTargetDesc && /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMPowerPCDesc.dir/PPCMachObjectWriter.cpp.o -c /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Target/PowerPC/MCTargetDesc/PPCMachObjectWriter.cpp

lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCMachObjectWriter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMPowerPCDesc.dir/PPCMachObjectWriter.cpp.i"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Target/PowerPC/MCTargetDesc && /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Target/PowerPC/MCTargetDesc/PPCMachObjectWriter.cpp > CMakeFiles/LLVMPowerPCDesc.dir/PPCMachObjectWriter.cpp.i

lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCMachObjectWriter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMPowerPCDesc.dir/PPCMachObjectWriter.cpp.s"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Target/PowerPC/MCTargetDesc && /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Target/PowerPC/MCTargetDesc/PPCMachObjectWriter.cpp -o CMakeFiles/LLVMPowerPCDesc.dir/PPCMachObjectWriter.cpp.s

lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCELFObjectWriter.cpp.o: lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/flags.make
lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCELFObjectWriter.cpp.o: ../lib/Target/PowerPC/MCTargetDesc/PPCELFObjectWriter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCELFObjectWriter.cpp.o"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Target/PowerPC/MCTargetDesc && /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMPowerPCDesc.dir/PPCELFObjectWriter.cpp.o -c /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Target/PowerPC/MCTargetDesc/PPCELFObjectWriter.cpp

lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCELFObjectWriter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMPowerPCDesc.dir/PPCELFObjectWriter.cpp.i"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Target/PowerPC/MCTargetDesc && /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Target/PowerPC/MCTargetDesc/PPCELFObjectWriter.cpp > CMakeFiles/LLVMPowerPCDesc.dir/PPCELFObjectWriter.cpp.i

lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCELFObjectWriter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMPowerPCDesc.dir/PPCELFObjectWriter.cpp.s"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Target/PowerPC/MCTargetDesc && /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Target/PowerPC/MCTargetDesc/PPCELFObjectWriter.cpp -o CMakeFiles/LLVMPowerPCDesc.dir/PPCELFObjectWriter.cpp.s

# Object files for target LLVMPowerPCDesc
LLVMPowerPCDesc_OBJECTS = \
"CMakeFiles/LLVMPowerPCDesc.dir/PPCAsmBackend.cpp.o" \
"CMakeFiles/LLVMPowerPCDesc.dir/PPCMCTargetDesc.cpp.o" \
"CMakeFiles/LLVMPowerPCDesc.dir/PPCMCAsmInfo.cpp.o" \
"CMakeFiles/LLVMPowerPCDesc.dir/PPCMCCodeEmitter.cpp.o" \
"CMakeFiles/LLVMPowerPCDesc.dir/PPCMCExpr.cpp.o" \
"CMakeFiles/LLVMPowerPCDesc.dir/PPCPredicates.cpp.o" \
"CMakeFiles/LLVMPowerPCDesc.dir/PPCMachObjectWriter.cpp.o" \
"CMakeFiles/LLVMPowerPCDesc.dir/PPCELFObjectWriter.cpp.o"

# External object files for target LLVMPowerPCDesc
LLVMPowerPCDesc_EXTERNAL_OBJECTS =

lib/libLLVMPowerPCDesc.a: lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCAsmBackend.cpp.o
lib/libLLVMPowerPCDesc.a: lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCMCTargetDesc.cpp.o
lib/libLLVMPowerPCDesc.a: lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCMCAsmInfo.cpp.o
lib/libLLVMPowerPCDesc.a: lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCMCCodeEmitter.cpp.o
lib/libLLVMPowerPCDesc.a: lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCMCExpr.cpp.o
lib/libLLVMPowerPCDesc.a: lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCPredicates.cpp.o
lib/libLLVMPowerPCDesc.a: lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCMachObjectWriter.cpp.o
lib/libLLVMPowerPCDesc.a: lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/PPCELFObjectWriter.cpp.o
lib/libLLVMPowerPCDesc.a: lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/build.make
lib/libLLVMPowerPCDesc.a: lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX static library ../../../libLLVMPowerPCDesc.a"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Target/PowerPC/MCTargetDesc && $(CMAKE_COMMAND) -P CMakeFiles/LLVMPowerPCDesc.dir/cmake_clean_target.cmake
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Target/PowerPC/MCTargetDesc && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMPowerPCDesc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/build: lib/libLLVMPowerPCDesc.a

.PHONY : lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/build

lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/clean:
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Target/PowerPC/MCTargetDesc && $(CMAKE_COMMAND) -P CMakeFiles/LLVMPowerPCDesc.dir/cmake_clean.cmake
.PHONY : lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/clean

lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/depend:
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anjan/github.com/osxcross/build/llvm-3.9.1.src /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Target/PowerPC/MCTargetDesc /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2 /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Target/PowerPC/MCTargetDesc /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Target/PowerPC/MCTargetDesc/CMakeFiles/LLVMPowerPCDesc.dir/depend
