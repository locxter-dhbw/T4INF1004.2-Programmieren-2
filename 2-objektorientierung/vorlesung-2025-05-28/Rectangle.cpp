//
// Created by locxter on 28.05.25.
//

#include "Rectangle.hpp"

Rectangle::Rectangle(double width, double height) : Shape(width, height) {
}

double Rectangle::getArea() {
    return width * height;
}
