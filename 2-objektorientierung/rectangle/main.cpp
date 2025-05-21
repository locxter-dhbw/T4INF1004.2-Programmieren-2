#include <iostream>
#include "Rectangle.h"

int main() {
    Rectangle *myRect = new Rectangle(10, 20);
    std::cout << myRect->calculateArea() << std::endl;
    myRect->setDimensions(5, 10);
    std::cout << myRect->calculateArea() << std::endl;
    delete myRect;
    return 0;
}
