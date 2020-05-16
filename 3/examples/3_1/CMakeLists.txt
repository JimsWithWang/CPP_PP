cmake_minimum_required(VERSION 3.10)

project(3_1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

aux_source_directory(./src DIR_SRCS)

add_executable(3_1 ${DIR_SRCS})