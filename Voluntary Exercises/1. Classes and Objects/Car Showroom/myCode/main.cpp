// Standard (system) header files
#include <iostream>
#include <cstdlib>
#include "Car.h"
// Add more standard header files as required
// #include <string>

using namespace std;

// Add your project's header files here
// #include "CFraction.h"

// Main program
int main ()
{
    // TODO: Add your program code here
	cout << "-------Car Showroom-----" << endl << endl;
	Car ford(70, "Mustang", 2000);
	ford.displayDetails();
	ford.applyDiscount(5);
	return 0;
}
