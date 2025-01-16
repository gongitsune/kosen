cmake_minimum_required(VERSION 3.31)

project(stack LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)

add_executable(stack src/main.cpp src/stack.cpp)
