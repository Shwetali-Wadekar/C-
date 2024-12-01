// Standard (system) header files
#include <iostream>
#include <cstdlib>

#include "Library.h"
using namespace std;

// Main program
int main ()
{
    // TODO: Add your program code here
	cout << "----Library Management System----" << endl << endl;
	// Default Constructor
	    cout << "Default Constructor:" << endl;
	    Library book1;
	    book1.displayDetails();

	    // Parameterized Constructor
	    cout << "\nParameterized Constructor:" << endl;
	    Library book2(101, "The Great Gatsby", "F. Scott Fitzgerald", 10.99);
	    book2.displayDetails();

	    // Copy Constructor
	    cout << "\nCopy Constructor:" << endl;
	    Library book3 = book2; // Invokes the copy constructor
	    book3.displayDetails();

	    // Modify the copied object
	    cout << "\nAfter Modifying Copy:" << endl;
	    book3.setDetails(102,"Moby Dick","Herman Melville",15.99);
	    book3.displayDetails();

	    // Ensure the original object remains unchanged
	    cout << "\nOriginal Unchanged:" << endl;
	    book2.displayDetails();

	    return 0;
	return 0;
}
