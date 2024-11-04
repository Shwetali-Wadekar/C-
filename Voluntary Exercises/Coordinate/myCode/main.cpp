// Standard (system) header files
#include <iostream>
#include <cstdlib>
#include "Coordinate.h"

using namespace std;

// Main program
int main ()
{
    // TODO: Add your program code here
	cout << "Coordinate started." << endl << endl;


	Coordinate c1(4,4,2);
	Coordinate c2;
	Coordinate c3 (-4);


	c1.print(Coordinate::CARTESIAN);
	c1.print(Coordinate::CYLINDER);
	c2.print(Coordinate::CYLINDER);

	c1.print(Coordinate::POLAR);
	c2.print(Coordinate::POLAR);
	c3.print(Coordinate::POLAR);

	c1.add(c3);
	c2.add(Coordinate(1,2,3));

	c1.print(Coordinate::CARTESIAN);
	c2.print(Coordinate::CARTESIAN);

	return 0;
}
