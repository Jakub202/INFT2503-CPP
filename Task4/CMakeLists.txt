cmake_minimum_required(VERSION 3.5)

project(Task4)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

# Find the gtkmm package
INCLUDE(FindPkgConfig)
pkg_check_modules(GTKMM gtkmm-3.0 REQUIRED)

# Include gtkmm directories
include_directories(${GTKMM_INCLUDE_DIRS})

# Link gtkmm directories
link_directories(${GTKMM_LIBRARY_DIRS})

# Add executable for task_1.cpp
add_executable(Task1 task_1.cpp)

# Add executable for task_2.cpp
add_executable(Task2 task_2.cpp)

# Link gtkmm libraries to Task2
target_link_libraries(Task2 ${GTKMM_LIBRARIES})

