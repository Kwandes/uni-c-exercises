cmake_minimum_required(VERSION 3.17)
project(exercises_01_06 C)

set(CMAKE_C_STANDARD 11)

add_executable(exercises_01_06 main.c exerciseUno/exerciseUno.c exerciseUno/exerciseUno.h config.h exerciseDuo/exerciseDuo.c exerciseDuo/exerciseDuo.h exerciseTres/exerciseTres.c exerciseTres/exerciseTres.h exerciseCuatro/exerciseCuatro.c exerciseCuatro/exerciseCuatro.h)