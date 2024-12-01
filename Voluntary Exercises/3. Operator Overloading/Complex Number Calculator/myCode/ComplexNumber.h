#ifndef COMPLEXNUMBER_H_
#define COMPLEXNUMBER_H_

#include <iostream>
using namespace std;


/**
 * Class to represent a complex number.
 *
 * This class uses operator overloading to simplify mathematical operations
 * (e.g., addition, subtraction) and streamline comparisons between complex numbers.
 * It ensures clean syntax and mimics natural mathematical notation for better usability.
 */
class ComplexNumber {
private:
    float real;   // Real part of the complex number
    float imag;   // Imaginary part of the complex number

public:
    /**
     * Default Constructor
     * Initializes the complex number to (0, 0).
     *
     * Why? Ensures all ComplexNumber objects start in a valid state without undefined values.
     */
    ComplexNumber();

    /**
     * Parameterized Constructor
     * Initializes the complex number with given real and imaginary parts.
     *
     * Why? Provides flexibility to create specific complex numbers directly during object creation.
     */
    ComplexNumber(float real, float imag);

    /**
     * Copy Constructor
     * Creates a deep copy of another ComplexNumber object.
     *
     * Why? A deep copy ensures that when objects are copied, their data is duplicated
     * instead of sharing memory, preventing unintended side effects when modifying one object.
     */
    ComplexNumber(const ComplexNumber& other);

    /**
     * Destructor
     * Cleans up resources, if any.
     *
     * Why? Ensures that dynamically allocated memory (if added later) is released properly
     * to prevent memory leaks.
     */
    ~ComplexNumber();

    /**
     * Overloaded addition operator.
     * Adds two complex numbers.
     *
     * Why? Allows intuitive use of `+` operator for complex number addition, enhancing readability.
     */
    ComplexNumber operator+(const ComplexNumber& other) const;

    /**
     * Overloaded subtraction operator.
     * Subtracts one complex number from another.
     *
     * Why? Simplifies subtraction operations, making the code cleaner and more natural.
     */
    ComplexNumber operator-(const ComplexNumber& other) const;

    /**
     * Overloaded multiplication operator.
     * Multiplies two complex numbers.
     *
     * Why? Provides a straightforward way to multiply complex numbers, avoiding verbose method calls.
     */
    ComplexNumber operator*(const ComplexNumber& other) const;

    /**
     * Overloaded division operator.
     * Divides two complex numbers.
     *
     * Why? Implements division with error handling for division by zero, essential for robust calculations.
     */
    ComplexNumber operator/(const ComplexNumber& other) const;

    /**
     * Overloaded equality operator.
     * Compares two complex numbers for equality.
     *
     * Why? Enables logical comparisons (`==` and `!=`) for complex numbers, improving code clarity.
     */
    bool operator==(const ComplexNumber& other) const;

    /**
     * Overloaded inequality operator.
     * Compares two complex numbers for inequality.
     */
    bool operator!=(const ComplexNumber& other) const;

    /**
     * Overloaded assignment operator.
     * Performs a deep copy of the complex number.
     *
     * Why? Prevents shallow copying of internal data, which could lead to shared state and unexpected bugs.
     * Deep copying ensures each object maintains its own unique data.
     */
    ComplexNumber& operator=(const ComplexNumber& other);

    /**
     * Overloaded insertion operator.
     * Outputs a complex number in the form "a + bi".
     *
     * Why? Simplifies printing of complex numbers in a user-friendly format directly with `cout`.
     */
    friend ostream& operator<<(ostream& out, const ComplexNumber& c);

    /**
     * Overloaded extraction operator.
     * Inputs a complex number.
     *
     * Why? Makes it easier to take user input directly into ComplexNumber objects with `cin`.
     */
    friend istream& operator>>(istream& in, ComplexNumber& c);
};
#endif /* COMPLEXNUMBER_H_ */
