// Standard (system) header files
#include <iostream>
#include <cstdlib>
#include "ComplexNumber.h"
// Add more standard header files as required
// #include <string>

using namespace std;

// Add your project's header files here
// #include "CFraction.h"

// Main program
int main ()
{
    // TODO: Add your program code here
	cout << "-----Complex Number Operations-----" << endl << endl;

	// Create complex numbers
	    ComplexNumber num1(20, -4);
	    ComplexNumber num2(5, 2);

	    // Add the complex numbers
	    ComplexNumber sum = num1.add(num2);
	    std::cout << "Sum: ";
	    sum.display();

	    // Subtract the complex numbers
	    ComplexNumber difference = num1.subtract(num2);
	    std::cout << "Difference: ";
	    difference.display();

	return 0;
}
