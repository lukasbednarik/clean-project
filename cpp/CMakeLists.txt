cmake_minimum_required (VERSION 3.0.2 FATAL_ERROR)
set(CMAKE_CXX_STANDARD 14)
add_definitions(-std=c++14)

# Project settings
project(Kata)
set(Kata_VERSION_MAJOR 0)
set(Kata_VERSION_MINOR 0)

# =============================================================================
# Library: kata
# =============================================================================

# Find dependencies
find_package(Threads REQUIRED)

# Add all source files
set(KATALIB_SRCS
    src/myLib.cpp
)

add_library(katalib STATIC ${KATALIB_SRCS})

# =============================================================================
# Executable: kata
# =============================================================================

# Build and link executable
add_executable(kata src/main.cpp)
target_link_libraries(kata katalib ${CMAKE_THREAD_LIBS_INIT})

# =============================================================================
# Executable: kata-tests
# =============================================================================

# Include directories
include_directories(. src test)

# Add all source files
set(TESTS_SRCS
    3rdParty/catch.hpp
    3rdParty/fakeit.hpp
    tests/myLibTest.cpp
    tests/test.cpp
)

# Build and link executable
add_executable(kata-test ${TESTS_SRCS})
target_link_libraries(kata-test katalib ${CMAKE_THREAD_LIBS_INIT})

# =============================================================================
# Run: tests
# =============================================================================
add_custom_target(Test ALL COMMAND kata-test DEPENDS kata-test)
