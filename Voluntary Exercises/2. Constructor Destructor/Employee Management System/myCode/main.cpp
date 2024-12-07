// Standard (system) header files
#include <iostream>
#include <cstdlib>

#include "Employee.h"
#include "Department.h"

using namespace std;

// Main program
int main ()
{
    // TODO: Add your program code here
	cout << "Employee Management System started." << endl << endl;

	Department dep1(101, "Human Resources");
	Employee emp1(1, "Alice Johnson", 60000, &dep1);

	emp1.displayDetails();
	return 0;
}
