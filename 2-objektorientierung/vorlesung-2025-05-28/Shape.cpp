#include "Shape.hpp"

Shape::Shape(double width, double height) : width(width), height(height) {
}

double Shape::getWidth() {
    return width;
}

void Shape::setWidth(double width) {
    this->width = width;
}

double Shape::getHeight() {
    return height;
}

void Shape::setHeight(double height) {
    this->height = height;
}
