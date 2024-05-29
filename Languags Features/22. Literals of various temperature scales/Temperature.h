//
// Created by hsavgr on 5/1/24.
//

#ifndef INC_22__LITERALS_OF_VARIOUS_TEMPERATURE_SCALES_TEMPERATURE_H
#define INC_22__LITERALS_OF_VARIOUS_TEMPERATURE_SCALES_TEMPERATURE_H

#include <iostream>

class Temperature {
public:
    static Temperature fromCelsius(double c);
    static Temperature fromFahrenheit(double f);
    static Temperature fromKelvin(double k);

    double toCelsius() const;
    double toFahrenheit() const;
    double toKelvin() const;

    Temperature operator+(const Temperature& other) const;
    Temperature operator-(const Temperature& other) const;

private:
    explicit Temperature(double c) : value(c) {}

    double value;
};

Temperature operator"" _deg(long double c);
Temperature operator"" _f(long double f);
Temperature operator"" _K(long double k);


#endif //INC_22__LITERALS_OF_VARIOUS_TEMPERATURE_SCALES_TEMPERATURE_H
