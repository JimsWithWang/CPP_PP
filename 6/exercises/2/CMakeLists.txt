cmake_minimum_required(VERSION 3.10)

project(2)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(DIR_SRCS src/main.cpp)

add_executable(${PROJECT_NAME} ${DIR_SRCS})