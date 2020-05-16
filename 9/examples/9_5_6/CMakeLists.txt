cmake_minimum_required(VERSION 3.10)

project(9_5)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES 
    src/main.cpp
    src/support.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})