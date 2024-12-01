// Standard (system) header files
#include <iostream>
#include <cstdlib>
#include "DynamicObject.h"


using namespace std;


// Main program
int main ()
{
    // TODO: Add your program code here
	cout << "-----Dynamic Memory Management-----" << endl << endl;

	cout << "Default constructor called. Allocating memory..." << endl ;
	DynamicObject object1;
	object1.display();

	cout << "Parameterized constructor called. Allocating memory..." << endl;
	DynamicObject object2(42);
	object2.display();
	return 0;
}
