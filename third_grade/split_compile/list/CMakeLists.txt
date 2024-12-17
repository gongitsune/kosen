cmake_minimum_required(VERSION 3.31)

project(circle_list LANGUAGES C)

set(CMAKE_C_STANDARD 23)

add_executable(circle_list src/main.c src/list.c)