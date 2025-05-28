#include "Lidar.hpp"

Lidar::Lidar(int maxDistance) : PerceptionSensor(maxDistance) {
}

bool Lidar::detectObject(Object &obj) {
    if (obj.getDistance() <= maxDistance) return true;
    return false;
}
