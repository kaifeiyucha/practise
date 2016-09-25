cmake_minimum_required(VERSION 3.5)
project(TestC)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Test1.c)
add_executable(TestC ${SOURCE_FILES})