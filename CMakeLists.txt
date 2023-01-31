cmake_minimum_required(VERSION 3.20 FATAL_ERROR)

project(png2ico VERSION 0.1.0 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)

if (NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    message(STATUS "Setting build type to Debug as none was specified.")
    set(CMAKE_BUILD_TYPE "Debug" CACHE STRING "Choose the type of build." FORCE)
endif()

add_subdirectory(src)
