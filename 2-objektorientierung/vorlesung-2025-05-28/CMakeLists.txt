cmake_minimum_required(VERSION 3.31)
project(vorlesung_2025_05_28)

set(CMAKE_CXX_STANDARD 20)

add_executable(vorlesung_2025_05_28 main.cpp
        Shape.cpp
        Shape.hpp
        Rectangle.cpp
        Rectangle.hpp)
