cmake_minimum_required(VERSION 3.10)
project(DSATeamWork)

set(CMAKE_CXX_STANDARD 14)

add_executable(DSATeamWork
        Heap.cpp Heap.h
        Tests.h Tests.cpp
        main.cpp)