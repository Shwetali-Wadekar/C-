// Standard (system) header files
#include <iostream>
#include <cstdlib>
#include "Product.h"
#include "Order.h"

using namespace std;

// Main program
int main()
{
	// TODO: Add your program code here
	cout << "------E-Commerce System started-----" << endl << endl;

	Product prod1(1001, "Laptop", 999.99f);
	Order order1(1, "John Doe", &prod1, 2);

	// Display order details
	order1.displayOrderDetails();

	// Create a copy of order1 using the copy constructor
	Order order2 = order1;

	// Display copied order details
	std::cout << "\nCopied Order Details:" << std::endl;
	order2.displayOrderDetails();

	return 0;
}
