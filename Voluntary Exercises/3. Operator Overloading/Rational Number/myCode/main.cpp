// Standard (system) header files
#include <iostream>
#include <cstdlib>
// Add more standard header files as required
// #include <string>

using namespace std;

#include "RationalNumber.h"

int main() {
    RationalNumber r1(3, 4);  // 3/4
    RationalNumber r2(5, 6);  // 5/6

    // Arithmetic operations
    RationalNumber sum = r1 + r2;
    RationalNumber diff = r1 - r2;
    RationalNumber prod = r1 * r2;
    RationalNumber quot = r1 / r2;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Product: " << prod << endl;
    cout << "Quotient: " << quot << endl;

    // Increment/Decrement
    ++r1;
    cout << "After prefix increment: " << r1 << endl;
    r1--;
    cout << "After postfix decrement: " << r1 << endl;

    // Compound assignment
    r1 += r2;
    cout << "After +=: " << r1 << endl;
    r1 -= r2;
    cout << "After -=: " << r1 << endl;

    return 0;
}
