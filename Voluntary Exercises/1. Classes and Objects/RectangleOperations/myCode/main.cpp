// Standard (system) header files
#include <iostream>
#include <cstdlib>
#include "Rectangle.h"

using namespace std;
// Main program
int main ()
{
    // TODO: Add your program code here
	cout << "RectangleOperations started." << endl << endl;

	Rectangle rect1(15.2f, 10.0f);
	Rectangle rect2(0.0f, 0.0f);

	rect1.setDimensions(12,14);
	rect1.displayDetails();

	rect2.setDimensions(15.2f, 10.0f);
	rect2.displayDetails();

	return 0;
}
