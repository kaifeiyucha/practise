cmake_minimum_required(VERSION 3.5)
project(TestC)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES find_in_two-dimensional_array/find_in_two-dimensional_array.c)
add_executable(TestC ${SOURCE_FILES})