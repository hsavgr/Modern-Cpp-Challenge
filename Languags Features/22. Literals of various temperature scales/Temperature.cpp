//
// Created by hsavgr on 5/1/24.
//

#include "Temperature.h"

Temperature operator ""_K(long double k)
{
    return Temperature::fromKelvin(static_cast<double>(k));
}

Temperature operator ""_f(long double f)
{
    return Temperature::fromFahrenheit(static_cast<double>(f));
}

Temperature operator ""_deg(long double c)
{
    return Temperature::fromCelsius(static_cast<double>(c));
}

Temperature Temperature::operator-(const Temperature &other) const
{
    return Temperature(value - other.value);
}

Temperature Temperature::operator+(const Temperature &other) const
{
    return Temperature(value + other.value);
}

double Temperature::toCelsius() const
{
    return value;
}

double Temperature::toFahrenheit() const
{
    return (value * 9/5) + 32;
}

double Temperature::toKelvin() const
{
    return value + 273.15;
}

Temperature Temperature::fromCelsius(double c)
{
    return Temperature(c);
}

Temperature Temperature::fromFahrenheit(double f)
{
    return Temperature((f - 32) * 5/9);
}

Temperature Temperature::fromKelvin(double k)
{
    return Temperature(k - 273.15);
}
