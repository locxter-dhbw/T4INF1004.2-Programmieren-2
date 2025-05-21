#pragma once
#include <functional>
#include <vector>
#include "Person.hpp"

class Vehicle {
private:
    int seatCount = 5;
    std::vector<std::reference_wrapper<Person>> passengers;

public:
    // Constructor
    Vehicle(int seatCount);

    // Getter
    int getSeatCount();

    std::vector<std::reference_wrapper<Person>> getPassengers();

    // Methods
    bool enter(Person &person);

    // A little cursed, since the seat numbers update after each exit (due to being vector indixes)
    bool exit(int seatNumber);
};
