cmake_minimum_required(VERSION 2.8)

project(eksLeksjon2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra -Wno-unused-parameter")

add_executable(byttVerdi byttVerdi.cpp)

add_executable(pekeraddisjon pekeraddisjon.cpp)

add_executable(sammenlikning sammenlikning.cpp)
