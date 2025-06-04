#include "Sight.h"

Sight::Sight(std::string name, int x, int y, std::string sight) : Place(std::move(name), x, y), m_sight(std::move(sight)) {
    std::cout << "Sight constructor called for " << m_name << std::endl;
}

Sight::~Sight(){
    std::cout << "Sight destructor calledf or " << m_name << std::endl;
}

void Sight::visit() {
    std::cout << m_name << " (" << m_x << ", " << m_y << "). Here you can see: " << m_sight << std::endl;
}
