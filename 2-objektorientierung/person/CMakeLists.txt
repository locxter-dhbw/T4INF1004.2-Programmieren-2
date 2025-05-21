cmake_minimum_required(VERSION 3.31)
project(person)

set(CMAKE_CXX_STANDARD 20)

add_executable(person main.cpp
        Person.cpp
        Person.hpp
        Nationality.h)
