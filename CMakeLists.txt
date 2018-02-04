cmake_minimum_required(VERSION 3.9)
project(untitled C)

set(CMAKE_C_STANDARD 99)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")
set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra")


add_executable(untitled main.c usingScan.h math.h assignment1.h assignment1.c assignment2.h assignment2.c assignment3.h assignment3.c)