#include <iostream>
#include "Vehicle.hpp"

int main() {
    Vehicle smart(2);
    Vehicle schoolBus(20);
    Person bob("Bob", Nationality::DE), alice("Alice", Nationality::EN), jose("Jose", Nationality::IT);
    std::cout << "Smart:" << std::endl;
    std::cout << smart.enter(bob) << std::endl;
    std::cout << smart.enter(alice) << std::endl;
    std::cout << smart.enter(jose) << std::endl;
    std::cout << "School bus:" << std::endl;
    std::cout << schoolBus.enter(bob) << std::endl;
    std::cout << schoolBus.enter(alice) << std::endl;
    std::cout << schoolBus.enter(jose) << std::endl;
    return 0;
}
