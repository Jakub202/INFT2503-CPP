cmake_minimum_required(VERSION 3.5)

project(Task7)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

add_executable(Task1 task1.cpp fraction.cpp)

add_executable(Task2 task2.cpp Set.cpp)
