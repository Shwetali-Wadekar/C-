#include<iostream>
#include<iomanip>
#include "ComplexNumber.h"

ComplexNumber::ComplexNumber()
{

}
ComplexNumber::ComplexNumber(float real, float imaginary) :
		real(real), imaginary(imaginary)
{
}

ComplexNumber ComplexNumber::add(const ComplexNumber &other)
{
	return ComplexNumber(this->real + other.real,
			this->imaginary + other.imaginary);
}

ComplexNumber ComplexNumber::subtract(const ComplexNumber &other)
{
	return ComplexNumber(this->real - other.real,
			this->imaginary - other.imaginary);
}

void ComplexNumber::display()
{
	char sign = (imaginary >= 0) ? '+' : '-';
	std::cout << std::setw(5) << std::fixed << std::setprecision(2) << real
			<< " " << sign << " " << abs(imaginary) << "i" << std::endl;
}
