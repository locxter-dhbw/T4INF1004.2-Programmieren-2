#include "WaterTemp.hpp"

// Constructor
WaterTemp::WaterTemp() : isActive(true) {
}

WaterTemp::WaterTemp(const std::string &sensorPosition, double dTemp, double aTemp) : sensorPosition(sensorPosition), isActive(true)  {
    setDifferentialTemperature(dTemp);
    setAmbientTemperature(aTemp);
}

// Getter/Setter
std::string WaterTemp::getSensorPosition() {
    return sensorPosition;
}

double WaterTemp::getDifferentialTemperature() {
    return differentialTemperature;
}

double WaterTemp::getAmbientTenmperature() {
    return ambientTemperature;
}

bool WaterTemp::getIsActive() {
    return isActive;
}

void WaterTemp::setDifferentialTemperature(double differentialTemperature) {
    this->differentialTemperature = checkTemperatureValidity(differentialTemperature);
}

void WaterTemp::setAmbientTemperature(double ambientTemperature) {
    this->ambientTemperature = checkTemperatureValidity(ambientTemperature);
}

void WaterTemp::setIsActive(bool isActive) {
    this->isActive = isActive;
}

// Methods
double WaterTemp::calculateWaterTemperature() {
    if (isActive) {
        double waterTemperature = ambientTemperature + differentialTemperature;
        return waterTemperature;
    } else {
        std::cout << "Sensor at " << sensorPosition << " is inactive." << std::endl;
        return -1;
    }
}

void WaterTemp::printWaterTemperature() {
    double waterTemperature = calculateWaterTemperature();
    if (waterTemperature != -1) {
        std::cout << "Water temperature at " << sensorPosition << ": " << waterTemperature << "°C" << std::endl;
    }
}

// Könnte private sein, aber auch für andere Klassen nützliche Funktionalität
double WaterTemp::checkTemperatureValidity(float temp) {
    if (temp < -273.15f) {
        std::cout << "Invalid temperature: below absolute zero. Setting to -273.15°C." << std::endl;
        return -273.15f;
    }
    return temp;
}

double WaterTemp::readDifferentialTemperature() {
    double temp;
    std::cout << "Enter differential temperature: ";
    std::cin >> temp;
    setDifferentialTemperature(temp);
}