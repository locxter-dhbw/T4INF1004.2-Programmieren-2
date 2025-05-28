#include "PerceptionSensor.hpp"

PerceptionSensor::PerceptionSensor(int maxDistance) {
    if (maxDistance < 0) maxDistance = 0;
    this->maxDistance = maxDistance;
}

int PerceptionSensor::getMaxDistance() {
    return maxDistance;
}

void PerceptionSensor::printProperties() {
    std::cout << "Max detection distance: " << maxDistance << " cm" << std::endl;
}
