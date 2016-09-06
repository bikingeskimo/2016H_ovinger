cmake_minimum_required(VERSION 2.8)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

project(Oving1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra -Wno-unused-parameter")

find_package(SFML 2.1 COMPONENTS system window graphics REQUIRED)
include_directories(${SFML_INCLUDE_DIR})

find_package(OpenGL REQUIRED)
include_directories(${OPENGL_INCLUDE_DIR})

find_package(GLM REQUIRED)
include_directories(${GLM_INCLUDE_DIR})

find_package(Threads REQUIRED)

add_executable(Oving1 main.cpp)

target_link_libraries(Oving1 ${CMAKE_THREAD_LIBS_INIT})
target_link_libraries(Oving1 ${SFML_LIBRARIES})
target_link_libraries(Oving1 ${OPENGL_LIBRARIES})
