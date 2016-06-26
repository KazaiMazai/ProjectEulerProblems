cmake_minimum_required(VERSION 3.5)
project(ProjectEuler)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp ProjectEulerBaseProblem.cpp ProjectEulerBaseProblem.h MultiplesOfThreeFiveProblem.cpp MultiplesOfThreeFiveProblem.h DiceGameProblem.cpp DiceGameProblem.h LargestPrimeFactorProblem.cpp LargestPrimeFactorProblem.h SummationOfPrimesProblem.cpp SummationOfPrimesProblem.h)
add_executable(ProjectEuler ${SOURCE_FILES})