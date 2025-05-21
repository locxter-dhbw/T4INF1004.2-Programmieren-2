#pragma once

class Rectangle {
private:
    double length = 0.0;
    double width = 0.0;

public:
    // Constructor
    Rectangle();

    Rectangle(double length, double width);

    // Getter/Setter
    double getLength() const;

    void setLength(double length);

    double getWidth() const;

    void setWidth(double width);

    // Methods
    void setDimensions(double length, double width);

    double calculateArea();
};
