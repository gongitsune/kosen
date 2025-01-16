cmake_minimum_required(VERSION 3.31)

project(object_first LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)

add_executable(object_first src/main.cpp src/sample.cpp src/dog.cpp)
