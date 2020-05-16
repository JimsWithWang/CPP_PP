cmake_minimum_required(VERSION 3.10)

project(2_1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

aux_source_directory(. DIR_SRCS)

add_executable(2_1 ${DIR_SRCS})