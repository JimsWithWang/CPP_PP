cmake_minimum_required(VERSION 3.5)

project(6_15)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES src/main.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})