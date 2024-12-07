
#include "Shape.h"

Shape::Shape():area(0)
{
	// TODO Auto-generated constructor stub

}

Shape::~Shape()
{
	// TODO Auto-generated destructor stub
}

Shape::Shape(double area):area(area)
{
}

Shape::Shape(const Shape &other):area(other.area)
{
}

Shape::Shape(Shape &&other) noexcept
{
}
