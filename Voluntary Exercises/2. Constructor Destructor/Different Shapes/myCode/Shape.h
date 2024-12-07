
#ifndef SHAPE_H_
#define SHAPE_H_

#include <iostream>

// Base class Shape
class Shape {
protected:
    double area; // Holds the area of the shape

public:
    // Default constructor
    Shape();

    // Parameterized constructor
    Shape(double area);

    // Copy constructor (shallow copy)
    Shape(const Shape &other);

    // Move constructor
    Shape(Shape &&other) noexcept;

    // Destructor
    virtual ~Shape();

    // Virtual function to get the area of the shape
    virtual double getArea() const = 0; // Pure virtual function
};


#endif /* SHAPE_H_ */
