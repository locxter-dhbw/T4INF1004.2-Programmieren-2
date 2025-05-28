#ifndef PERCEPTIONSENSOR_H
#define PERCEPTIONSENSOR_H

#include <iostream>

class PerceptionSensor {
protected:
    int maxDistance;
public:
    // Constructor
    PerceptionSensor(int maxDistance);

    // Getter
    int getMaxDistance();

    // Methods
    void printProperties();
};

#endif //PERCEPTIONSENSOR_H
