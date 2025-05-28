#ifndef TOLLSTATION_H
#define TOLLSTATION_H
#include "Person.hpp"
#include "Vehicle.hpp"

class TollStation {
private:
    Person cashier = Person("Nobody", Nationality::DE);
    double toll = 1.0f;
    std::string currency = "Duplonen";

public:
    // Constructor
    TollStation(double toll, const std::string &currency);

    TollStation(double toll, const std::string &currency, Person cashier);

    // Getter
    Person &getCashier();

    std::string getCurrency();

    // Methods
    double control(Vehicle &vehicle);
};

#endif //TOLLSTATION_H
