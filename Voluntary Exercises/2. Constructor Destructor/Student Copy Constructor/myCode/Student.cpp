#include<iostream>
#include "Student.h"

Student::Student(int rollNumber, string name, float marks) :
		rollNumber(rollNumber), name(name), marks(marks), type(1)
{
	cout << "Parameterized constructor called for roll number " << rollNumber
			<< endl;
}

Student::Student(const Student &other) :
		rollNumber(other.rollNumber), name(other.name), marks(other.marks), type(
				0)
{
	cout << "Copy constructor called for roll number " << rollNumber << endl;
}

void Student::displayDetails()
{
	cout << "Student Details: " << endl;
	cout << "Roll Number: " << rollNumber << endl;
	cout << "Name: " << name << endl;
	cout << "Marks: " << marks << endl << endl;
}

Student::~Student()
{

	// TODO Auto-generated destructor stub
	if (type == 1)
	{
		cout << "Destructor called for roll number " << rollNumber
				<< "(original)" << endl;
	}
	else
		cout << "Destructor called for roll number " << rollNumber << "(copy)"
				<< endl;

}

