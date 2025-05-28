#ifndef RADAR_H
#define RADAR_H
#include "Object.hpp"
#include "PerceptionSensor.hpp"

class Radar : public PerceptionSensor {
private:
    double detectionProbability = 0.5;
public:
    // Constructors
    Radar(int maxDistance);

    Radar(int maxDistance, double detectionProbability);

    // Getter
    double getDetectionProbability();

    // Methods
    bool detectObject(Object &obj);
};

#endif //RADAR_H
