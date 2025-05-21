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