#ifndef LIDAR_H
#define LIDAR_H
#include "Object.hpp"
#include "PerceptionSensor.hpp"

class Lidar : public PerceptionSensor {
public:
    // Constructors
    Lidar(int maxDistance);

    // Methods
    bool detectObject(Object &obj);
};

#endif //LIDAR_H
