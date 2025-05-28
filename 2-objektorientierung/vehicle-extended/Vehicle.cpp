#include "Vehicle.hpp"

// Constructors
Vehicle::Vehicle(int seatCount) {
    if (seatCount < 1) seatCount = 1;
    this->seatCount = seatCount;
}

Vehicle::Vehicle(int seatCount, Color color) : Vehicle(seatCount) {
    this->color = color;
}

// Getter
int Vehicle::getSeatCount() {
    return seatCount;
}

std::vector<std::reference_wrapper<Person>> Vehicle::getPassengers() {
    return passengers;
}

// Methods
bool Vehicle::enter(Person &person) {
    if (passengers.size() >= seatCount) return false;
    // New passenger greets all existing ones
    for (auto passenger : passengers) {
        person.greet(passenger.get(), color);
    }
    // All existing passengers greet the new one
    greetAll(person);
    passengers.push_back(std::ref(person));
    return true;
}

// A little cursed, since the seat numbers update after each exit (due to being vector indixes)
bool Vehicle::exit(int seatNumber) {
    if (seatNumber < 0 || seatNumber >= passengers.size()) return false;
    passengers.erase(passengers.begin() + seatNumber);
    return true;
}

void Vehicle::greetAll(Person &person) {
    for (auto passenger : passengers) {
        passenger.get().greet(person, color);
    }
}

