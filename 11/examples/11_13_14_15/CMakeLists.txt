cmake_minimum_required(VERSION 3.10)

project(11_13_14_15)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES 
    src/main.cpp 
    src/vect.cpp )

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME}
    PRIVATE 
    ${PROJECT_SOURCE_DIR}/include)