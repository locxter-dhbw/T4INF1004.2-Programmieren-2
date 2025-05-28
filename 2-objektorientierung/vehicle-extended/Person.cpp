#include "Person.hpp"

// Constructor
Person::Person(const std::string &name, Nationality nationality) : name(name), nationality(nationality) {
}

// Getter/Setter
std::string Person::getName() {
    return name;
}

void Person::setName(const std::string &name) {
    this->name = name;
}

Nationality Person::getNationality() {
    return nationality;
}

void Person::setNationality(Nationality nationality) {
    this->nationality = nationality;
}

// Methods
void Person::greet(Person greetedPerson) {
    std::cout << name << ": ";
    switch (greetedPerson.nationality) {
        case Nationality::EN:
            std::cout << "Hello ";
            break;
        case Nationality::DE:
            std::cout << "Hallo ";
            break;
        case Nationality::IT:
            std::cout << "Buengiorno ";
            break;
        case Nationality::ES:
            std::cout << "Hola ";
            break;
    }
    std::cout << greetedPerson.getName() << std::endl;
}

void Person::greet(Person greetedPerson, Color color) {
    switch (color) {
        case Color::WHITE:
            std::cout << "\033[37m";
            break;
        case Color::BLUE:
            std::cout << "\033[34m";
            break;
        case Color::GREEN:
            std::cout << "\033[32m";
            break;
        case Color::YELLOW:
            std::cout << "\033[33m";
            break;
        case Color::RED:
            std::cout << "\033[31m";
            break;
    }
    greet(greetedPerson);
    std::cout << "\033[0m";
}
