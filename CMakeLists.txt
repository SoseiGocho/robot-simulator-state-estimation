cmake_minimum_required(VERSION 3.21)

project(RobotSimulatorStateEstimation
    VERSION 0.0.1
    LANGUAGES CXX
)

# C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Testing
include(CTest)

# Subdirectories
add_subdirectory(src)

if(BUILD_TESTING)
    add_subdirectory(test)
endif()
