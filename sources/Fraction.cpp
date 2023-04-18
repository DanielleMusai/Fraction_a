#include "Fraction.hpp"
#include <iostream>
#include <sstream>
using namespace ariel;
using namespace std;

Fraction::Fraction(int numerator, int denominator) : numerator(numerator), denominator(denominator) {}

void Fraction::reduce() {}

int Fraction::getNumerator() const
{
    return numerator;
}

int Fraction::getDenominator() const
{
    return denominator;
}
Fraction ariel::operator+(const Fraction &other, const Fraction &f)
{
    return Fraction();
}

Fraction ariel::operator-(const Fraction &other, const Fraction &f)
{
    return Fraction();
}

Fraction ariel::operator*(const Fraction &other, const Fraction &f)
{
    return Fraction();
}

Fraction ariel::operator/(const Fraction &other, const Fraction &f)
{
    return Fraction();
}

bool ariel::operator==(const Fraction &other, const Fraction &f)
{
    return false;
}

bool ariel::operator!=(const Fraction &other, const Fraction &f)
{
    return false;
}

bool ariel::operator>(const Fraction &other, const Fraction &f)
{
    return false;
}

bool ariel::operator<(const Fraction &other, const Fraction &f)
{
    return false;
}

bool ariel::operator>=(const Fraction &other, const Fraction &f)
{
    return false;
}

bool ariel::operator<=(const Fraction &other, const Fraction &f)
{
    return false;
}

Fraction &Fraction::operator++()
{
    return *this;
}

Fraction Fraction::operator++(int)
{
    return Fraction();
}

Fraction &Fraction::operator--()
{
    return *this;
}

Fraction Fraction::operator--(int)
{
    return Fraction();
}

std::ostream &ariel::operator<<(ostream &os_, const Fraction &fraction)
{
    return os_;
}

std::istream &ariel::operator>>(istream &is_, Fraction &fraction)
{
    return is_;
}
