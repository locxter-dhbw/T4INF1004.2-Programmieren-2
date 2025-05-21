#pragma once
#include <string>

class Vehicle {
private:
    const double fuelCapacity = 50.0;
    std::string name;
    double pos = 0.0;
    double fuelConsumption = 5.3;
    double fuelRemaining = fuelCapacity;
    double totalFuelConsumption = 0.0;
public:
    // Constructor
    Vehicle(const std::string &name, double fuelConsumption);

    // Getter/Setter
    std::string getName();

    double getPos();

    double getFuelConsumption();

    double getFuelRemaining();

    double getTotalFuelConsumption();

    // Methods
    bool drive(int km);

    void refuel();
};
