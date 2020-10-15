cmake_minimum_required(VERSION 3.6)
include_directories("${CMAKE_SOURCE_DIR}/googletest/googletest/include"
                     "${CMAKE_SOURCE_DIR}/include")

add_definitions(-DTESTING)
add_executable(test_demo test_example1.cpp "${CMAKE_SOURCE_DIR}/src/example1.cpp")

#target_include_directories(test_demo PRIVATE "${CMAKE_SOURCE_DIR}/src")

add_test(test_demo test_demo)
target_link_libraries(test_demo gtest gmock)
