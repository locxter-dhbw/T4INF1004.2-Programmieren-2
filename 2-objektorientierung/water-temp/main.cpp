#include <iostream>
#include "WaterTemp.hpp"

int main() {
    WaterTemp sensor1("Water Pump", 0.0, 20);
    sensor1.readDifferentialTemperature();
    sensor1.printWaterTemperature();
    return 0;
}