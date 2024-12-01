// Standard (system) header files
#include <iostream>
#include <cstdlib>
// Add more standard header files as required
// #include <string>
#include "Employee.h"
using namespace std;

// Add your project's header files here
// #include "CFraction.h"

// Main program
int main ()
{
    // TODO: Add your program code here
	cout << "-----Employee Payroll System------" << endl << endl;
	Employee a(459,"Kathrine", 10000);
	a.displayDetails();
	return 0;
}
