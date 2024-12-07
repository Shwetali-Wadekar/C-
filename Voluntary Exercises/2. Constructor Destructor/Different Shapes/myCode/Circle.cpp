

#include "Circle.h"
#define float pi=3.14;

Circle::Circle():radius(0)
{
	// TODO Auto-generated constructor stub

}

Circle::Circle(double radius):radius(radius),Shape(getArea())
{
}

Circle::Circle(const Circle &other):radius(other.radius),Shape(other.getArea())
{
}

Circle::Circle(Circle &&other) noexcept
{

}

Circle::~Circle()
{
	// TODO Auto-generated destructor stub
}

double Circle::getArea() const
{
	return area = 2*pi *radius;
}
