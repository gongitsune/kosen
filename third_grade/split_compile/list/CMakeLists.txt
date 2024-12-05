cmake_minimum_required(VERSION 3.31)

project(circle_list LANGUAGES C)

set(CMAKE_C_STANDARD 23)

add_executable(PROJECT_NAME src/main.c src/list.c)