cmake_minimum_required(VERSION 3.5)

project(variable_parameters_test)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

file(GLOB_RECURSE MAIN_SOURCE main.cpp)
add_executable(run ${MAIN_SOURCE})
