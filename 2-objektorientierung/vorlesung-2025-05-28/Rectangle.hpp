#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.hpp"


class Rectangle : public Shape {
public:
    Rectangle(double width, double height);

    double getArea();
};

#endif //RECTANGLE_H
