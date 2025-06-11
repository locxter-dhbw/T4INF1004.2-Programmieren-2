#include <complex>
#include <iostream>

void getSensorInputs(double &temperature, double &relativeHumdidity);

double calculateAbsoluteHumidity(double temperature, double relativeHumidity);

int main() {
    double temperature;
    double relativeHumidity;

    getSensorInputs(temperature, relativeHumidity);

    double absoluteHumidity = calculateAbsoluteHumidity(temperature, relativeHumidity);

    std::cout << "Absolute humidity: " << absoluteHumidity << " g/m^3" << std::endl;

    // TODO Dies ist nur die Basisimplementierung mit schrecklichem Stil, die verbesserte Version bitte von
    // https://github.com/PandaLehre/cpp_dhbw_students ziehen

    return 0;
}

/// Get sensor inputs from user
/// @return void
void getSensorInputs(double &temperature, double &relativeHumdidity) {
    std::cout << "Temperature in °C: ";
    std::cin >> temperature;
    std::cout << "Relative humidity in %: ";
    std::cin >> relativeHumdidity;
}

/// Calculate absolute humidity based on temperature and rel. humidity
/// @param temperature as reference in Celsius
/// @param relativeHumidity as reference in %
/// @return double absolute humidity in g/cm^3
double calculateAbsoluteHumidity(double temperature, double relativeHumidity) {
    double numerator = 6.112 * std::exp((17.67 * temperature) / (temperature + 243.5)) * relativeHumidity * 2.1674;
    double denominator = 273.15 + temperature;
    return numerator / denominator;
}
