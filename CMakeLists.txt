cmake_minimum_required(VERSION 3.5)
project(micro_compiler)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

file(GLOB SOURCE_FILES src/*.cpp)
include_directories(./include)
add_executable(micro_compiler ${SOURCE_FILES})
