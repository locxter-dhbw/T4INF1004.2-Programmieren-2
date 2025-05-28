#include <iostream>

#include "TollStation.hpp"
#include "Vehicle.hpp"

int main() {
    Vehicle smart(2, Color::BLUE);
    Vehicle schoolBus(20, Color::GREEN);
    Person bob("Bob", Nationality::DE), alice("Alice", Nationality::EN), jose("Jose", Nationality::IT);
    TollStation ddrBorder(3.0, "Westmark", Person("Walter", Nationality::DE));
    std::cout << "Smart:" << std::endl;
    std::cout << smart.enter(bob) << std::endl;
    std::cout << smart.enter(alice) << std::endl;
    std::cout << smart.enter(jose) << std::endl;
    std::cout << "School bus:" << std::endl;
    std::cout << schoolBus.enter(bob) << std::endl;
    std::cout << schoolBus.enter(alice) << std::endl;
    std::cout << schoolBus.enter(jose) << std::endl;
    ddrBorder.control(smart);
    ddrBorder.control(schoolBus);
    return 0;
}
