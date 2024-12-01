/*
 * SmartArray.h
 *
 *  Created on: 26-Nov-2024
 *      Author: Shwetali Wadekar
 */

#ifndef SMARTARRAY_H_
#define SMARTARRAY_H_

#include <iostream>
#include <stdexcept> // For exceptions like out_of_range
using namespace std;

class SmartArray {
private:
    int size;        // Current number of elements in the array
    int capacity;    // Total allocated capacity of the array
    int* data;       // Pointer to the dynamically allocated array

    // Helper method to resize the array when needed
    void resize(int newCapacity);

public:
    // Default constructor (creates an empty SmartArray)
    SmartArray();

    // Parameterized constructor (initializes with a given size)
    SmartArray(int size);

    // Copy constructor for deep copying another SmartArray
    SmartArray(const SmartArray& other);

    // Destructor to release allocated memory
    ~SmartArray();

    // Assignment operator (=) for deep copying
    SmartArray& operator=(const SmartArray& other);

    // Overloaded += operator to append an element
    SmartArray& operator+=(const int& value);

    // Overloaded -= operator to remove the last element
    SmartArray& operator-=(const int& value);

    // Comparison operators
    bool operator==(const SmartArray& other) const;
    bool operator!=(const SmartArray& other) const;
    bool operator<(const SmartArray& other) const;    // Compare based on size
    bool operator>(const SmartArray& other) const;    // Compare based on size

    // Overloaded [] operator for read and write access
    int& operator[](int index);               // Non-const version for writing
    const int& operator[](int index) const;   // Const version for reading

    // Display the array contents
    void display() const;

    // Overloading new and delete operators
    void* operator new(size_t size);
    void operator delete(void* ptr);

    // Friend function to output SmartArray details
    friend ostream& operator<<(ostream& out, const SmartArray& array);
};


#endif /* SMARTARRAY_H_ */
