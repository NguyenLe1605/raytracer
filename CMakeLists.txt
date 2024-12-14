cmake_minimum_required(VERSION 3.21)
project(raytracer)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# CTest
enable_testing()

include_directories(${PROJECT_SOURCE_DIR}/include)

add_subdirectory(third_party)
add_subdirectory(src)
add_subdirectory(test)
