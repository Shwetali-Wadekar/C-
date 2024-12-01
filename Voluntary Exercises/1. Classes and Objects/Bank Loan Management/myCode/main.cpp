// Standard (system) header files
#include <iostream>
#include <cstdlib>
// Add more standard header files as required
// #include <string>
#include "Loan.h"
using namespace std;

// Add your project's header files here
// #include "CFraction.h"

// Main program
int main ()
{
    // TODO: Add your program code here
	cout << "------Bank Loan Management------" << endl << endl;
	Loan L1(12345, "Robert", 1500, 2);
	L1.displayDetails();
	L1.calculateEMI(2);

	return 0;
}
