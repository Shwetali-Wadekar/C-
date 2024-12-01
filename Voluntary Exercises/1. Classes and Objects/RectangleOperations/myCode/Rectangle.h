#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float length; // Length of the rectangle
    float width;  // Width of the rectangle

public:
    // Default constructor
    Rectangle();

    // Parameterized constructor
    Rectangle(float length, float width);

    // Updates the dimensions of the rectangle
    void setDimensions(float length, float width);

    // Returns the area of the rectangle
    float area();

    // Returns the perimeter of the rectangle
    float perimeter();

    // Displays the rectangle's dimensions, area, and perimeter
    void displayDetails();

    ~Rectangle();
};

#endif // RECTANGLE_H
