cmake_minimum_required(VERSION 3.31)
project(water_temp)

set(CMAKE_CXX_STANDARD 20)

add_executable(water_temp main.cpp
        WaterTemp.cpp
        WaterTemp.hpp)
