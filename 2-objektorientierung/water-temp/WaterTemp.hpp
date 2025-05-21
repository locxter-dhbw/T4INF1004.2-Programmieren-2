#pragma once
#include <iostream>
#include <string>

class WaterTemp {
private:
    std::string sensorPosition = "None";
    double differentialTemperature = 0.0;
    double ambientTemperature = 20.0;
    bool isActive = false;
public:
    // Constructor
    WaterTemp();

    WaterTemp(const std::string &sensorPosition, double dTemp, double aTemp);

    // Getter/Setter
    std::string getSensorPosition();

    double getDifferentialTemperature();

    double getAmbientTenmperature();

    bool getIsActive();

    void setDifferentialTemperature(double differentialTemperature);

    void setAmbientTemperature(double ambientTemperature);

    void setIsActive(bool isActive);

    // Methods
    double calculateWaterTemperature();

    void printWaterTemperature();

    double checkTemperatureValidity(float temp);

    double readDifferentialTemperature();
};
