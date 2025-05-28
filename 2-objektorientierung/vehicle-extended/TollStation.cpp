#include "TollStation.hpp"

TollStation::TollStation(double toll, const std::string &currency) : currency(currency) {
    if (toll < 0.0) toll = 0.0;
    this->toll = toll;
}

TollStation::TollStation(double toll, const std::string &currency, Person cashier) : TollStation(toll, currency) {
    this->cashier = cashier;
}

Person &TollStation::getCashier() {
    return cashier;
}

std::string TollStation::getCurrency() {
    return currency;
}

double TollStation::control(Vehicle &vehicle) {
    vehicle.greetAll(cashier);
    double toll = vehicle.getPassengers().size() * this->toll;
    std::cout << "Toll: " << toll << " " << currency << std::endl;
    return toll;
}
