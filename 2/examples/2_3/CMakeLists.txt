cmake_minimum_required(VERSION 3.10)

project(carrots)

set(CMAKE_CXX_STANDARD 11)
set(CAMEK_CXX_STANDARD_REQUIRED True)

aux_source_directory(./src DIR_SRCS)

add_executable(carrots ${DIR_SRCS})