cmake_minimum_required(VERSION 3.5)
project(ProjectEuler)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp ProjectEulerBaseProblem.cpp ProjectEulerBaseProblem.h MultiplesOfThreeFiveProblem.cpp MultiplesOfThreeFiveProblem.h)
add_executable(ProjectEuler ${SOURCE_FILES})