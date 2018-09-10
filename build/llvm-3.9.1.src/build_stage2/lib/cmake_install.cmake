# Install script for directory: /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/IR/cmake_install.cmake")
  include("/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/IRReader/cmake_install.cmake")
  include("/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/CodeGen/cmake_install.cmake")
  include("/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Bitcode/cmake_install.cmake")
  include("/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Transforms/cmake_install.cmake")
  include("/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Linker/cmake_install.cmake")
  include("/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Analysis/cmake_install.cmake")
  include("/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/LTO/cmake_install.cmake")
  include("/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/MC/cmake_install.cmake")
  include("/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Object/cmake_install.cmake")
  include("/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/ObjectYAML/cmake_install.cmake")
  include("/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Option/cmake_install.cmake")
  include("/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/DebugInfo/cmake_install.cmake")
  include("/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/ExecutionEngine/cmake_install.cmake")
  include("/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Target/cmake_install.cmake")
  include("/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/AsmParser/cmake_install.cmake")
  include("/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/LineEditor/cmake_install.cmake")
  include("/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/ProfileData/cmake_install.cmake")
  include("/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Fuzzer/cmake_install.cmake")
  include("/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/Passes/cmake_install.cmake")
  include("/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/lib/LibDriver/cmake_install.cmake")

endif()

