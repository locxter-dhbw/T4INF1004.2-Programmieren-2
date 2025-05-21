#include "Rectangle.hpp"

// Constructor
Rectangle::Rectangle() {}

Rectangle::Rectangle(double length, double width) {
    setLength(length);
    setWidth(width);
}

// Getter/Setter
double Rectangle::getLength() const {
    return length;
}

void Rectangle::setLength(double length) {
    if (length < 0) return;
    this->length = length;
}

double Rectangle::getWidth() const {
    return width;
}

void Rectangle::setWidth(double width) {
    if (length < 0) return;
    this->width = width;
}

// Methods
void Rectangle::setDimensions(double length, double width) {
    setLength(length);
    setWidth(width);
}

double Rectangle::calculateArea() {
    return width * length;
}

