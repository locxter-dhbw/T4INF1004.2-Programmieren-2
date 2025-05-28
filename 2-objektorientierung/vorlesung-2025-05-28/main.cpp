#include <iostream>
#include <vector>

#include "Rectangle.hpp"

void printVectorCStyle(std::vector<std::string> vec);

void printVectorForEach(std::vector<std::string> vec);

int main() {
    std::vector<std::string> vec;

    printVectorCStyle(vec);

    vec.push_back("Bla");
    vec.push_back("Bli");
    vec.push_back("Blup");

    printVectorCStyle(vec);
    printVectorForEach(vec);

    Shape shape(10, 20);
    std::cout << shape.getWidth() << std::endl;
    shape.setWidth(5);
    std::cout << shape.getWidth() << std::endl;

    Rectangle rect(10, 20);
    std::cout << rect.getArea() << std::endl;
    rect.setWidth(5);
    std::cout << rect.getArea() << std::endl;

    return 0;
}

void printVectorCStyle(std::vector<std::string> vec) {
    if (vec.empty()) {
        std::cout << "VECTOR IS EMPTY" << std::endl;
        return;
    }
    // Bekannte for-loop
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << ' ';
    }
    std::cout << std::endl;
}

void printVectorForEach(std::vector<std::string> vec) {
    if (vec.empty()) {
        std::cout << "VECTOR IS EMPTY" << std::endl;
        return;
    }
    // For each (aber kopierend, da ohne Referenz)
    for (auto element: vec) {
        std::cout << element << ' ';
    }
    std::cout << std::endl;
}
