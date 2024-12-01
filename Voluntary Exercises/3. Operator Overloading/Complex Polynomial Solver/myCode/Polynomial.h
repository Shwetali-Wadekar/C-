/*
 * Polynomial.h
 *
 *  Created on: 26-Nov-2024
 *      Author: Shwetali Wadekar
 */

#ifndef POLYNOMIAL_H_
#define POLYNOMIAL_H_

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

/**
 * Class to represent a polynomial equation.
 * Demonstrates the use of operator overloading for advanced operations.
 */
class Polynomial {
private:
    vector<float> coefficients; // Stores coefficients of the polynomial, e.g., [c0, c1, c2] for c0 + c1*x + c2*x^2

public:
    /**
     * Constructor: Initializes the polynomial with given coefficients.
     */
    Polynomial(const vector<float>& coeffs);

    /**
     * Overloaded Unary '-' Operator
     * Negates all coefficients of the polynomial.
     */
    Polynomial operator-() const;

    /**
     * Overloaded '!' Operator
     * Returns the degree of the polynomial.
     */
    int operator!() const;

    /**
     * Overloaded Subscript '[]' Operator
     * Provides access to coefficients by index (e.g., p[2] for c2).
     */
    float& operator[](int index);
    const float& operator[](int index) const;

    /**
     * Overloaded Function Call '()' Operator
     * Evaluates the polynomial for a given value of x.
     */
    float operator()(float x) const;

    /**
     * Overloaded Output Stream '<<' Operator
     * Prints the polynomial in a user-friendly format.
     */
    friend ostream& operator<<(ostream& out, const Polynomial& p);
};

#endif /* POLYNOMIAL_H_ */
