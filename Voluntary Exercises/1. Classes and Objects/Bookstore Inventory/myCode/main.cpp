// Standard (system) header files
#include <iostream>
#include <cstdlib>
// Add more standard header files as required
// #include <string>
#include "Book.h"
using namespace std;

// Add your project's header files here
// #include "CFraction.h"

// Main program
int main ()
{
    // TODO: Add your program code here
	cout << "Bookstore Inventory started." << endl << endl;

	Book book1 (101, "C++ Programming Basics", 19.99f, 45);

	book1.displayDetails();
	book1.calculateCost(4);
	book1.updateQuantity(-2);
	book1.displayDetails();
	return 0;
}
