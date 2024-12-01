/*
 * Vector.h
 *
 *  Created on: 26-Nov-2024
 *      Author: Shwetali Wadekar
 */

#ifndef VECTOR_H_
#define VECTOR_H_

#include <iostream>
#include <cmath> // For std::sqrt
using namespace std;

class Vector {
private:
    float x; // X-coordinate of the vector
    float y; // Y-coordinate of the vector
    float z; // Z-coordinate of the vector

public:
    // Default constructor
    Vector();

    // Parameterized constructor
    Vector(float x, float y, float z);

    // Overload type conversion operator to convert Vector to its magnitude
    operator float() const;

    // Overload relational operators to compare magnitudes
    bool operator<(const Vector &other) const;
    bool operator<=(const Vector &other) const;
    bool operator>(const Vector &other) const;
    bool operator>=(const Vector &other) const;

    // Overload unary * operator to return the magnitude of the vector
    float operator*() const;

    // Overload & operator to return the address of the vector object
    const Vector *operator&() const;

    // Display vector coordinates
    void display() const;

    // Compute and return the magnitude of the vector
    float magnitude() const;
};


#endif /* VECTOR_H_ */
