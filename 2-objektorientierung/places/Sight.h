#ifndef SIGHT_H
#define SIGHT_H
#include "Place.h"

class Sight : public Place {
private:
    std::string m_sight;

public:
    // Constructor/destructor
    Sight(std::string name, int x, int y, std::string sight);

    ~Sight() override;

    // Method
    void visit() override;
};

#endif //SIGHT_H
