cmake_minimum_required(VERSION 3.31)
project(vehicle)

set(CMAKE_CXX_STANDARD 11)

add_executable(vehicle main.cpp
        Vehicle.cpp
        Vehicle.hpp)
