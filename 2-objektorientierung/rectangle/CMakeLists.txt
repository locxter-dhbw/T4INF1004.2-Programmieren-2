cmake_minimum_required(VERSION 3.31)
project(rectangle)

set(CMAKE_CXX_STANDARD 20)

add_executable(rectangle main.cpp
        Rectangle.cpp
        Rectangle.hpp)
