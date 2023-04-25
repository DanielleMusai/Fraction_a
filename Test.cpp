#include "doctest.h"
#include <stdexcept>
#include <sstream>
#include "sources/Fraction.hpp"
using namespace ariel;

TEST_CASE("Test 1--> Fraction Add: ")
{
    Fraction f1(1, 2);
    Fraction f2(1, 2);
    Fraction result = f1 + f2;
    CHECK(result.getNumerator() == 1);
    CHECK(result.getDenominator() == 1);
}

TEST_CASE("Test 2--> Fraction Add: ")
{
    Fraction f1(1, 2);
    Fraction f2(1, 1);
    Fraction result = f1 + f2;
    CHECK(result.getNumerator() == 3);
    CHECK(result.getDenominator() == 2);
}

TEST_CASE("Test 3--> Fraction Add: ")
{
    Fraction f1(0, 0);
    Fraction f2(0, 0);
    Fraction result = f1 + f2;
    CHECK(result.getNumerator() == 0);
    CHECK(result.getDenominator() == 0);
}
TEST_CASE("Test 4--> Fraction Sub: ")
{
    Fraction f1(1, 2);
    Fraction f2(1, 4);
    Fraction result = f1 - f2;
    CHECK(result.getNumerator() == 1);
    CHECK(result.getDenominator() == 4);
}

TEST_CASE("Test 5--> Fraction Sub: ")
{
    Fraction f1(1, 2);
    Fraction f2(1, 1);
    Fraction result = f1 - f2;
    CHECK(result.getNumerator() == -1);
    CHECK(result.getDenominator() == 2);
}

TEST_CASE("Test 6--> Fraction Mul: ")
{
    Fraction f1(1, 2);
    Fraction f2(1, 4);
    Fraction result = f1 * f2;
    CHECK(result.getNumerator() == 1);
    CHECK(result.getDenominator() == 8);
}

TEST_CASE("Test 7--> Fraction Mul: ")
{
    Fraction f1(1, 2);
    Fraction f2(1, 2);
    Fraction result = f1 * f2;
    CHECK(result.getNumerator() == 1);
    CHECK(result.getDenominator() == 4);
}

TEST_CASE("Test 8--> Fraction Div: ")
{
    Fraction f1(3, 4);
    Fraction f2(2, 1);
    Fraction result = f1 / f2;
    CHECK(result.getNumerator() == 3);
    CHECK(result.getDenominator() == 8);
}

TEST_CASE("Test 9--> Fraction Div: ")
{
    Fraction f1(1, 2);
    Fraction f2(1, 3);
    Fraction result = f1 / f2;
    CHECK(result.getNumerator() == 3);
    CHECK(result.getDenominator() == 2);
}

TEST_CASE("Test 10--> Fraction Equal: ")
{
    Fraction f1(1, 2);
    Fraction f2(1, 2);
    CHECK(f1 == f2);
}

TEST_CASE("Test 11--> Fraction Compare: ")
{
    Fraction f1(1, 2);
    Fraction f2(1, 4);
    CHECK(f1 > f2);
    CHECK(f1 >= f2);
    CHECK(f2 < f1);
    CHECK(f2 <= f1);
}

TEST_CASE("Test 12--> Fraction Decrement: ")
{
    Fraction f2(3, 4);
    Fraction result = --f2;
    CHECK(result.getNumerator() == -1);
    CHECK(result.getDenominator() == 4);
}

TEST_CASE("Test 13--> Fraction Increment: ")
{
    Fraction f1(1, 2);
    Fraction result = ++f1;
    CHECK(result.getNumerator() == 3);
    CHECK(result.getDenominator() == 2);
}

TEST_CASE("Test 14--> Fraction Default constructor: ")
{
    Fraction f;
    CHECK(f.getNumerator() == 0);
    CHECK(f.getDenominator() == 1);
}

TEST_CASE("Test 15--> Fraction Simplification: ")
{
    Fraction f(2, 4);
    CHECK(f.getNumerator() == 1);
    CHECK(f.getDenominator() == 2);
}

TEST_CASE("Test 16--> Fraction Divide by zero: ")
{
    Fraction f(5, 0);
    CHECK_THROWS_AS(f.reduce(), std::domain_error);         // simplifying a fraction with denominator 0 throws an exception
    CHECK_THROWS_AS(f.getNumerator(), std::domain_error);   // getNumerator() on a fraction with denominator 0 throws an exception
    CHECK_THROWS_AS(f.getDenominator(), std::domain_error); // getDenominator() on a fraction with denominator 0 throws an exception
}

TEST_CASE("Test 17--> Fraction Divide by zero: ")
{
    Fraction f1(1, 2);
    Fraction f2(0, 1);
    CHECK_THROWS_AS(f1 / f2, std::invalid_argument);
}

TEST_CASE("Test 18-->: Fraction Divide by zero: ")
{
    Fraction f1(1, 2);
    CHECK_THROWS_AS(f1 / 0, std::invalid_argument);
}

TEST_CASE("Test 19-->  Fraction + double: ")
{
    Fraction f1(1, 2);
    float f2 = 1.75;
    Fraction result = f1 + f2;
    Fraction expected(9, 4);
    CHECK(result == expected);
}

TEST_CASE("Test 20--> double + Fraction: ")
{
    Fraction f1(1, 2);
    float f2 = 1.75;
    Fraction result = f2 + f1;
    Fraction expected(9, 4);
    CHECK(result == expected);
}
