cmake_minimum_required(VERSION 3.31)
project(perception_sensor)

set(CMAKE_CXX_STANDARD 20)

add_executable(perception_sensor main.cpp
        PerceptionSensor.cpp
        PerceptionSensor.hpp
        Material.hpp
        Object.cpp
        Object.hpp
        Lidar.cpp
        Lidar.hpp
        Radar.cpp
        Radar.hpp)
