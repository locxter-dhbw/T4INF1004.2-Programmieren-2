#ifndef SHAPE_H
#define SHAPE_H

class Shape {
protected:
    double width;
    double height;
public:
    Shape(double width, double height);

    double getWidth();

    void setWidth(double width);

    double getHeight();

    void setHeight(double height);
};

#endif //SHAPE_H
