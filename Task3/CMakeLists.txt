cmake_minimum_required(VERSION 3.5)

project(Task3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

add_executable(Task2 task_2.cpp)
add_executable(Task3 task_3.cpp commodity.cpp)
add_executable(Task4 task_4.cpp)
