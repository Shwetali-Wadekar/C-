// Standard (system) header files
#include <iostream>
#include <cstdlib>
#include "Student.h"
// Add more standard header files as required
// #include <string>

using namespace std;

// Add your project's header files here
// #include "CFraction.h"

// Main program
int main ()
{
    // TODO: Add your program code here
	cout << "Student Management System started." << endl << endl;

	Student student1 (1, "Jane Joe", 00.0f);
	Student student2 (2, "Peter Pan", 00.0f);


	student1.setMarks(50.0f);
	student1.displayDetails();

	student2.setMarks(90.0f);
	student2.displayDetails();

	return 0;
}
