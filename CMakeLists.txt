cmake_minimum_required(VERSION 3.27.0)
project(Lab4)

set(CMAKE_CXX_STANDARD 20)

include_directories(src)

enable_testing()

add_subdirectory(src)
add_subdirectory(test)
