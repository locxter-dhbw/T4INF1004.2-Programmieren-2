#ifndef VEHICLE_H
#define VEHICLE_H

#include <functional>
#include <vector>

#include "Color.hpp"
#include "Person.hpp"

class Vehicle {
private:
    int seatCount = 5;
    Color color = Color::WHITE;
    std::vector<std::reference_wrapper<Person>> passengers;

public:
    // Constructor
    Vehicle(int seatCount);

    Vehicle(int seatCount, Color color);

    // Getter
    int getSeatCount();

    std::vector<std::reference_wrapper<Person>> getPassengers();

    // Methods
    bool enter(Person &person);

    // A little cursed, since the seat numbers update after each exit (due to being vector indixes)
    bool exit(int seatNumber);

    void greetAll(Person &person);
};

#endif //VEHICLE_H