
#ifndef COMPLEXCALCULATOR_H_
#define COMPLEXCALCULATOR_H_

class ComplexNumber;
/**
 * Class to perform operations on complex numbers.
 */
class ComplexCalculator {
private:
    ComplexNumber result; // Stores the result of the calculation

public:
    /**
     * Adds two complex numbers.
     */
    ComplexNumber add(const ComplexNumber& c1, const ComplexNumber& c2);

    /**
     * Subtracts one complex number from another.
     */
    ComplexNumber subtract(const ComplexNumber& c1, const ComplexNumber& c2);

    /**
     * Multiplies two complex numbers.
     */
    ComplexNumber multiply(const ComplexNumber& c1, const ComplexNumber& c2);

    /**
     * Divides one complex number by another.
     *
     * Note: Check for division by zero.
     */
    ComplexNumber divide(const ComplexNumber& c1, const ComplexNumber& c2);
};
#endif /* COMPLEXCALCULATOR_H_ */
