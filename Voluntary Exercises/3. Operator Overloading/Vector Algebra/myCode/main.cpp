// Standard (system) header files
#include <iostream>
#include <cstdlib>
// Add more standard header files as required
// #include <string>

using namespace std;

#include <iostream>
#include "Vector.h"

int main() {
    // Create vectors
    Vector v1(3, 4, 0);   // Magnitude: 5
    Vector v2(1, 2, 2);   // Magnitude: sqrt(9) = 3
    Vector v3(0, 0, 0);   // Magnitude: 0

    // Display vectors
    cout << "Vectors:" << endl;
    v1.display();
    v2.display();
    v3.display();

    // Using the type conversion operator to get the vector's magnitude
    float mag_v1 = v1;
    float mag_v2 = v2;
    cout << "\nMagnitudes:" << endl;
    cout << "v1 magnitude: " << mag_v1 << endl;
    cout << "v2 magnitude: " << mag_v2 << endl;

    // Using relational operators
    cout << "\nRelational operators:" << endl;
    cout << "v1 > v2: " << (v1 > v2) << endl;
    cout << "v1 < v2: " << (v1 < v2) << endl;
    cout << "v1 >= v2: " << (v1 >= v2) << endl;
    cout << "v1 <= v2: " << (v1 <= v2) << endl;

    // Using the unary * operator
    cout << "\nUsing * operator for magnitude:" << endl;
    cout << "*v1: " << *v1 << endl;
    cout << "*v2: " << *v2 << endl;

    // Using the & operator to get the address of the vector
    cout << "\nUsing & operator:" << endl;
    cout << "Address of v1: " << &v1 << endl;
    cout << "Address of v2: " << &v2 << endl;

    return 0;
}
