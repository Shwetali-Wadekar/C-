// Standard (system) header files
#include <iostream>
#include <cstdlib>
#include "Item.h"
#include <string>
using namespace std;



// Main program
int main ()
{
    // TODO: Add your program code here
	cout << "-----Inventory System-----" << endl << endl;
	Item def;
	def.displayDetails();

	Item laptop(101,"Laptop");
	laptop.displayDetails();

	Item mobile(102,"Mobile",699.99,50);
	mobile.displayDetails();

	return 0;
}
