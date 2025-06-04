#ifndef PLACE_H
#define PLACE_H
#include <iostream>
#include <string>
#include <utility>

class Place {
protected:
    std::string m_name;
    int m_x;
    int m_y;

public:
    // Constructor/destructor
    Place(std::string name, int x, int y);

    virtual ~Place();

    // Method
    virtual void visit();
};

#endif //PLACE_H
