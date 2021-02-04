cmake_minimum_required(VERSION 3.17)
project(exercises_01_06 C)

set(CMAKE_C_STANDARD 11)

add_executable(exercises_01_06 main.c exerciseUno/exerciseUno.c exerciseUno/exerciseUno.h config.h)