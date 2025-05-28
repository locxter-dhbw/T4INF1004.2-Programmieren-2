cmake_minimum_required(VERSION 3.31)
project(vehicle_extended)

set(CMAKE_CXX_STANDARD 20)

add_executable(vehicle_extended main.cpp
        Vehicle.cpp
        Vehicle.hpp
        Person.cpp
        Person.hpp
        Nationality.hpp
        Color.hpp
        TollStation.cpp
        TollStation.hpp)
