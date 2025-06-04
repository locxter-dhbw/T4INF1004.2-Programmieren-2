#include "Toilet.h"

Toilet::Toilet(std::string name, int x, int y, std::string smell) : Place(std::move(name), x, y), m_smell(std::move(smell)) {
    std::cout << "Toilet constructor called for " << m_name << std::endl;
}

Toilet::~Toilet() {
    std::cout << "Toilet destructor called for " << m_name << std::endl;
}

void Toilet::visit() {
    std::cout << m_name << " (" << m_x << ", " << m_y << "). Here it smells like: " << m_smell << std::endl;
}
