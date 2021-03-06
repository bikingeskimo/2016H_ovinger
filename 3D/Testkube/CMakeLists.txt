cmake_minimum_required(VERSION 2.8)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

project(Testkube)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra -Wno-unused-parameter")

find_package(SFML 2.1 COMPONENTS system window graphics REQUIRED)
include_directories(${SFML_INCLUDE_DIR})

find_package(OpenGL REQUIRED)
include_directories(${OPENGL_INCLUDE_DIR})

find_package(GLEW REQUIRED)
include_directories(${OPENGL_INCLUDE_DIR})

find_package(GLM REQUIRED)
include_directories(${GLM_INCLUDE_DIR})

find_package(GLUT REQUIRED)
include_directories(${GLUT_INCLUDE_DIR})

find_package(Threads REQUIRED)

add_executable(Testkube main.cpp)

target_link_libraries(Testkube ${CMAKE_THREAD_LIBS_INIT})
target_link_libraries(Testkube ${SFML_LIBRARIES})
target_link_libraries(Testkube ${OPENGL_LIBRARIES})
target_link_libraries(Testkube ${GLEW_LIBRARIES})
target_link_libraries(Testkube ${GLUT_LIBRARIES})