cmake_minimum_required(VERSION 3.13)  # CMake version check
project(miniCalc)

set(CMAKE_C_STANDARD 99)

add_executable(miniCalc  main.c miniCalc.h)
