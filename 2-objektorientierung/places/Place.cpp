#include "Place.h"

Place::Place(std::string name, int x, int y) : m_name(std::move(name)), m_x(x), m_y(y) {
    std::cout << "Place constructor called for " << m_name << std::endl;
}

Place::~Place() {
    std::cout << "Place destructor called for " << m_name << std::endl;
}

void Place::visit() {
    std::cout << m_name << " (" << m_x << ", " << m_y << ")." << std::endl;
}
