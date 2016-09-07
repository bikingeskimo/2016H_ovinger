cmake_minimum_required(VERSION 2.8)

project(eksLeksjon1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra -Wno-unused-parameter")

add_executable(CppProgram CppProgram.cpp)

add_executable(tallfil tallfil.cpp)

add_executable(toerpot toerpot.cpp)
