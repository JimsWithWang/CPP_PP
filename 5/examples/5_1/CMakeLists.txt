cmake_minimum_required(VERSION 3.5)

project(5_1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED Yes)

#set(SOURCES
#    src/main.cpp)

file(GLOB SOURCES "src/*.cpp")

add_executable(${PROJECT_NAME} ${SOURCES})

