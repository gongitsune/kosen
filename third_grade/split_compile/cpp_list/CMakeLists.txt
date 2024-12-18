cmake_minimum_required(VERSION 3.31)

project(circle_list LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)

add_executable(circle_list src/main.cpp src/list.cpp)