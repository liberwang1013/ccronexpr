cmake_minimum_required(VERSION 3.5)
project(ccronexpr)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    ccronexpr.c
    ccronexpr.h
    main.c)

add_executable(ccronexpr ${SOURCE_FILES})