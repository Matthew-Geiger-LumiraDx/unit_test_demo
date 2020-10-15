cmake_minimum_required(VERSION 3.8)

add_executable(example1 example1.cpp)
target_include_directories(example1 PRIVATE "${CMAKE_SOURCE_DIR}/include")
