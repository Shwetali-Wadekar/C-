#ifndef COMPLEX_NUMBER_H
#define COMPLEX_NUMBER_H

class ComplexNumber {
private:
    float real;        // Real part
    float imaginary;   // Imaginary part

public:

    ComplexNumber();
    // Constructor to initialize real and imaginary parts
    ComplexNumber(float real, float imaginary);

    // Adds two complex numbers and returns the result
    ComplexNumber add(const ComplexNumber& other);

    // Subtracts another complex number and returns the result
    ComplexNumber subtract(const ComplexNumber& other);

    // Displays the complex number in the format "a + bi"
    void display();
};

#endif // COMPLEX_NUMBER_H
