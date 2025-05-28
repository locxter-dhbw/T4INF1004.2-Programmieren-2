#include <iostream>

#include "Lidar.hpp"
#include "Object.hpp"
#include "Radar.hpp"

int main() {
    Object bin(100, Material::PLASTIC), door(50, Material::METAL);
    Lidar lidar(50);
    Radar radar(100, 0.5);
    std::cout << lidar.detectObject(bin) << std::endl;
    std::cout << lidar.detectObject(door) << std::endl;
    std::cout << radar.detectObject(bin) << std::endl;
    std::cout << radar.detectObject(door) << std::endl;
    std::cout << radar.detectObject(bin) << std::endl;
    std::cout << radar.detectObject(door) << std::endl;
    std::cout << radar.detectObject(bin) << std::endl;
    std::cout << radar.detectObject(door) << std::endl;
    std::cout << radar.detectObject(bin) << std::endl;
    std::cout << radar.detectObject(door) << std::endl;
    return 0;
}
