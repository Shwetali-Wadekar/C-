/*
 * RationalNumber.h
 *
 *  Created on: 26-Nov-2024
 *      Author: Shwetali Wadekar
 */

#ifndef RATIONALNUMBER_H_
#define RATIONALNUMBER_H_

#include <iostream>
#include <stdexcept> // For handling division by zero
using namespace std;

class RationalNumber {
private:
    int numerator;   // Numerator of the rational number
    int denominator; // Denominator of the rational number

    // Function to simplify the fraction to its simplest form
    void simplify();

    // Function to calculate the greatest common divisor (GCD)
    int gcd(int a, int b) const;

public:
    // Default constructor (initializes to 0/1)
    RationalNumber();

    // Parameterized constructor
    RationalNumber(int numerator, int denominator);

    // Arithmetic operators
    RationalNumber operator+(const RationalNumber &other) const;
    RationalNumber operator-(const RationalNumber &other) const;
    RationalNumber operator*(const RationalNumber &other) const;
    RationalNumber operator/(const RationalNumber &other) const;

    // Increment and Decrement operators
    RationalNumber &operator++();        // Prefix increment
    RationalNumber operator++(int);      // Postfix increment
    RationalNumber &operator--();        // Prefix decrement
    RationalNumber operator--(int);      // Postfix decrement

    // Compound assignment operators
    RationalNumber &operator+=(const RationalNumber &other);
    RationalNumber &operator-=(const RationalNumber &other);

    // Display the rational number
    void display() const;

    // Friend functions for input/output (optional)
    friend ostream &operator<<(ostream &out, const RationalNumber &rat);
    friend istream &operator>>(istream &in, RationalNumber &rat);
};
#endif /* RATIONALNUMBER_H_ */
