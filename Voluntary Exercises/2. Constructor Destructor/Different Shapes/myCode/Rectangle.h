#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Shape.h"

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double width;  // Width of the rectangle
    double height; // Height of the rectangle

public:
    // Default constructor
    Rectangle();

    // Parameterized constructor
    Rectangle(double width, double height);

    // Copy constructor
    Rectangle(const Rectangle &other);

    // Move constructor
    Rectangle(Rectangle &&other) noexcept;

    // Destructor
    ~Rectangle();

    // Override getArea function
    double getArea() const override;
};

#endif /* RECTANGLE_H_ */
