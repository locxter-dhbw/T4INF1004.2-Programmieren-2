#include <iostream>
#include "Vehicle.hpp"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Vehicle babyBenz("Baby Benz", 8.2);
    std::cout << babyBenz.getPos() << std::endl;
    std::cout << babyBenz.getFuelRemaining() << std::endl;
    std::cout << babyBenz.getTotalFuelConsumption() << std::endl;
    babyBenz.drive(500);
    std::cout << babyBenz.getPos() << std::endl;
    std::cout << babyBenz.getFuelRemaining() << std::endl;
    std::cout << babyBenz.getTotalFuelConsumption() << std::endl;
    return 0;
}
