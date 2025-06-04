#ifndef TOILET_H
#define TOILET_H
#include "Place.h"

class Toilet : public Place {
private:
    std::string m_smell;

public:
    // Constructor/destructor
    Toilet(std::string name, int x, int y, std::string smell);

    ~Toilet() override;

    // Method
    void visit() override;
};

#endif //TOILET_H
