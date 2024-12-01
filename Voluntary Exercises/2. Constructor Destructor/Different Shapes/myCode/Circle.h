#ifndef CIRCLE_H_
#define CIRCLE_H_
// Derived class Circle

#include "Shape.h"

class Circle : public Shape {
private:
    double radius; // Radius of the circle

public:
    // Default constructor
    Circle();

    // Parameterized constructor
    Circle(double radius);

    // Copy constructor
    Circle(const Circle &other);

    // Move constructor
    Circle(Circle &&other) noexcept;

    // Destructor
    ~Circle();

    // Override getArea function
    double getArea() const override;
};


#endif /* CIRCLE_H_ */
