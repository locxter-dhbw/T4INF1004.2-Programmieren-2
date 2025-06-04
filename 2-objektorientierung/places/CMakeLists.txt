cmake_minimum_required(VERSION 3.31)
project(places)

set(CMAKE_CXX_STANDARD 20)

add_executable(places main.cpp
        Place.cpp
        Place.h
        Sight.cpp
        Sight.h
        Toilet.cpp
        Toilet.h)
