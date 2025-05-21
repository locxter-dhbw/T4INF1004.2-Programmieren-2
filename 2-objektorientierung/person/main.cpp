#include <iostream>
#include "Person.hpp"

int main() {
    Person bob("Bob", Nationality::DE), jose("Jose", Nationality::IT);
    bob.greet(jose);
    return 0;
}