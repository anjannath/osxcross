# Install script for directory: /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/3.9.1/include" TYPE FILE PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/adxintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/altivec.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/ammintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/arm_acle.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/avx2intrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/avx512bwintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/avx512cdintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/avx512dqintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/avx512erintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/avx512fintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/avx512ifmaintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/avx512ifmavlintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/avx512pfintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/avx512vbmiintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/avx512vbmivlintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/avx512vlbwintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/avx512vlcdintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/avx512vldqintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/avx512vlintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/avxintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/bmi2intrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/bmiintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/__clang_cuda_cmath.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/__clang_cuda_intrinsics.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/__clang_cuda_math_forward_declares.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/__clang_cuda_runtime_wrapper.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/cpuid.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/cuda_builtin_vars.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/clflushoptintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/emmintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/f16cintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/float.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/fma4intrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/fmaintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/fxsrintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/htmintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/htmxlintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/ia32intrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/immintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/intrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/inttypes.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/iso646.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/limits.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/lzcntintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/mm3dnow.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/mmintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/mm_malloc.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/module.modulemap"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/msa.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/mwaitxintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/nmmintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/opencl-c.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/pkuintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/pmmintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/popcntintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/prfchwintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/rdseedintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/rtmintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/s390intrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/shaintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/smmintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/stdalign.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/stdarg.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/stdatomic.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/stdbool.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/stddef.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/__stddef_max_align_t.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/stdint.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/stdnoreturn.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/tbmintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/tgmath.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/tmmintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/unwind.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/vadefs.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/varargs.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/vecintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/wmmintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/__wmmintrin_aes.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/__wmmintrin_pclmul.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/x86intrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/xmmintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/xopintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/xsavecintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/xsaveintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/xsaveoptintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/xsavesintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/lib/Headers/xtestintrin.h"
    "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/tools/clang/lib/Headers/arm_neon.h"
    )
endif()

