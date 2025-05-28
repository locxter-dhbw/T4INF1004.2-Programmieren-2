#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

#include "Color.hpp"
#include "Nationality.hpp"

class Person {
private:
    std::string name;
    Nationality nationality;
public:
    // Constructor
    Person(const std::string &name, Nationality nationality);

    // Getter/Setter
    std::string getName();

    void setName(const std::string &name);

    Nationality getNationality();

    void setNationality(Nationality nationality);

    // Methods
    void greet(Person greetedPerson);

    void greet(Person greetedPerson, Color color);
};

#endif //PERSON_H