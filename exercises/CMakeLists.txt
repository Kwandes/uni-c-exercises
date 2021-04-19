cmake_minimum_required(VERSION 3.17)
project(exercises C)

set(CMAKE_C_STANDARD 11)

add_executable(exercises main.c exerciseUno/exerciseUno.c exerciseUno/exerciseUno.h config.h exerciseDuo/exerciseDuo.c exerciseDuo/exerciseDuo.h exerciseTres/exerciseTres.c exerciseTres/exerciseTres.h exerciseCuatro/exerciseCuatro.c exerciseCuatro/exerciseCuatro.h 17/17.c 17/17.h 18/18.c 18/18.h exerciseUno/test.c exerciseUno/test.h)