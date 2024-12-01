#ifndef MATRIX_H_
#define MATRIX_H_

#include <iostream>
#include <stdexcept> // For exceptions like invalid_argument
using namespace std;

class Matrix {
private:
    int rows;      // Number of rows in the matrix
    int cols;      // Number of columns in the matrix
    int **data;    // Pointer to dynamically allocated 2D array

    // Helper function to allocate memory for the 2D array
    void allocateMemory();

    // Helper function to deallocate memory
    void deallocateMemory();

public:
    // Default constructor (creates an empty 0x0 matrix)
    Matrix();

    // Parameterized constructor
    Matrix(int rows, int cols);

    // Copy constructor (Deep Copy)
    Matrix(const Matrix &other);

    // Destructor
    ~Matrix();

    // Overload + operator for matrix addition
    Matrix operator+(const Matrix &other) const;

    // Overload - operator for matrix subtraction
    Matrix operator-(const Matrix &other) const;

    // Overload * operator for matrix multiplication
    Matrix operator*(const Matrix &other) const;

    // Overload == operator to compare two matrices
    bool operator==(const Matrix &other) const;

    // Overload != operator to compare two matrices
    bool operator!=(const Matrix &other) const;

    // Friend function: Overload >> operator for input
    friend istream &operator>>(istream &in, Matrix &matrix);

    // Friend function: Overload << operator for output
    friend ostream &operator<<(ostream &out, const Matrix &matrix);

    // Display the matrix (alternative to << operator)
    void display() const;
};

#endif /* MATRIX_H_ */
