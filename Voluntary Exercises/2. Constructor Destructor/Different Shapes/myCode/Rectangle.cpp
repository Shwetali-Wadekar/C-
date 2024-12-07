
#include "Rectangle.h"

Rectangle::Rectangle():width(0),height(0),Shape()
{
	// TODO Auto-generated constructor stub

}

Rectangle::Rectangle(double width, double height):width(width), height(height)
{
}

Rectangle::Rectangle(const Rectangle &other): width(other.width),height(other.height)
{
}

Rectangle::Rectangle(Rectangle &&other) noexcept
{
}

Rectangle::~Rectangle()
{
	// TODO Auto-generated destructor stub
}

double Rectangle::getArea() const
{
	return area = width * height;
}
