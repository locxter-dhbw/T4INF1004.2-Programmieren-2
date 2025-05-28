#include "Radar.hpp"

Radar::Radar(int maxDistance) : PerceptionSensor(maxDistance) {
}

Radar::Radar(int maxDistance, double detectionProbability) : Radar(maxDistance) {
    if (detectionProbability < 0) detectionProbability = 0;
    this->detectionProbability = detectionProbability;
}

double Radar::getDetectionProbability() {
    return detectionProbability;
}

bool Radar::detectObject(Object &obj) {
    if (obj.getDistance() > maxDistance) return false;
    switch (obj.getMaterial()) {
        case Material::METAL:
            return true;
        case Material::PLASTIC:
            return rand() % 101 > detectionProbability * 100;

    }
}
