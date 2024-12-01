// Standard (system) header files
#include <iostream>
#include <cstdlib>
#include "Student.h"

using namespace std;

// Main program
int main()
{
	// TODO: Add your program code here
	cout << "------Student Copy Constructor------" << endl << endl;

	Student alice(101, "Alice", 95.00);
	alice.displayDetails();
	Student copy = alice;
	copy.displayDetails();
	return 0;
}
