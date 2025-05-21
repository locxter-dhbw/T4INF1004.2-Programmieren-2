#include "Vehicle.hpp"

Vehicle::Vehicle(const std::string &name, double fuelConsumption) : name(name), fuelConsumption(fuelConsumption) {
}

std::string Vehicle::getName() {
    return name;
}

double Vehicle::getPos() {
    return pos;
}

double Vehicle::getFuelConsumption() {
    return fuelConsumption;
}

double Vehicle::getFuelRemaining() {
    return fuelRemaining;
}

double Vehicle::getTotalFuelConsumption() {
    return totalFuelConsumption;
}

bool Vehicle::drive(int km) {
    if (km < 0) return false;
    if (fuelRemaining > (km / 100.0) * fuelConsumption) {
        fuelRemaining -= (km / 100.0) * fuelConsumption;
        totalFuelConsumption += (km / 100.0) * fuelConsumption;
        return true;
    }
    return false;
}

void Vehicle::refuel() {
    fuelRemaining = fuelCapacity;
}
