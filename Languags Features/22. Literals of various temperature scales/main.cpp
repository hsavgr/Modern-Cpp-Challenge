#include <iostream>
#include "Temperature.h"

int main() {
    auto tempC = 36.534_deg;
    auto tempF = 97.734_f;
    auto tempK = 309.4365_K;

    std::cout << "Celsius: " << tempC.toCelsius() << " C\n";
    std::cout << "Fahrenheit: " << tempF.toFahrenheit() << " F\n";
    std::cout << "Kelvin: " << tempK.toKelvin() << " K\n";

    auto sumTemp = tempC + tempF;
    std::cout << "Sum of temperatures: " << sumTemp.toCelsius() << " C\n";

    return 0;
}