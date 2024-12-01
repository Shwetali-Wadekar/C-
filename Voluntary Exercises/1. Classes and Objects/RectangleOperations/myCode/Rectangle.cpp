

#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(float length, float width): length(length), width(width)
{
	// TODO Auto-generated constructor stub

}

Rectangle::~Rectangle()
{
	// TODO Auto-generated destructor stub
}

void Rectangle::setDimensions(float length, float width)
{
	this->length = length;
	this->width = width;
}

float Rectangle::area()
{
	float area = 0.0f;

	area = length * width;

	return area;
}

float Rectangle::perimeter()
{
	float perimeter = 0.0f;
	perimeter = 2*(length + width);
	return perimeter;
}

void Rectangle::displayDetails()
{
	cout << " -----------Rectangle--------\n";
	 cout << "Length: " << length << endl;
	 cout << "Width: " << width << endl;
	 cout << "Area: " << area() << endl;
	 cout << "Perimeter: " << perimeter() << endl << endl;
}
