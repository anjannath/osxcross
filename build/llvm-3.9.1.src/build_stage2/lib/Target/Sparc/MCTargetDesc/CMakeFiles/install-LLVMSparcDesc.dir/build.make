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

# Utility rule file for install-LLVMSparcDesc.

# Include the progress variables for this target.
include lib/Target/Sparc/MCTargetDesc/CMakeFiles/install-LLVMSparcDesc.dir/progress.make

lib/Target/Sparc/MCTargetDesc/CMakeFiles/install-LLVMSparcDesc: lib/libLLVMSparcDesc.a
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Target/Sparc/MCTargetDesc && /usr/bin/cmake -DCMAKE_INSTALL_COMPONENT=LLVMSparcDesc -P /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/cmake_install.cmake

install-LLVMSparcDesc: lib/Target/Sparc/MCTargetDesc/CMakeFiles/install-LLVMSparcDesc
install-LLVMSparcDesc: lib/Target/Sparc/MCTargetDesc/CMakeFiles/install-LLVMSparcDesc.dir/build.make

.PHONY : install-LLVMSparcDesc

# Rule to build all files generated by this target.
lib/Target/Sparc/MCTargetDesc/CMakeFiles/install-LLVMSparcDesc.dir/build: install-LLVMSparcDesc

.PHONY : lib/Target/Sparc/MCTargetDesc/CMakeFiles/install-LLVMSparcDesc.dir/build

lib/Target/Sparc/MCTargetDesc/CMakeFiles/install-LLVMSparcDesc.dir/clean:
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Target/Sparc/MCTargetDesc && $(CMAKE_COMMAND) -P CMakeFiles/install-LLVMSparcDesc.dir/cmake_clean.cmake
.PHONY : lib/Target/Sparc/MCTargetDesc/CMakeFiles/install-LLVMSparcDesc.dir/clean

lib/Target/Sparc/MCTargetDesc/CMakeFiles/install-LLVMSparcDesc.dir/depend:
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anjan/github.com/osxcross/build/llvm-3.9.1.src /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Target/Sparc/MCTargetDesc /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2 /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Target/Sparc/MCTargetDesc /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Target/Sparc/MCTargetDesc/CMakeFiles/install-LLVMSparcDesc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Target/Sparc/MCTargetDesc/CMakeFiles/install-LLVMSparcDesc.dir/depend
