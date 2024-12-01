

#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(int rollNumber, string name, float marks) :
		rollNumber(rollNumber), name(name), marks(marks)
{
	// TODO Auto-generated constructor stub

}

void Student::setMarks(float marks)
{
	this->marks = marks;
}

char Student::getGrade()
{
	char grade;
	if (marks > 90 || marks == 90){
		grade = 'A';
	}else if (marks > 75 || marks == 75){
		grade = 'B';
	} else if (marks > 50 || marks == 50){
		grade = 'C';
	}else if (marks < 50){
		grade = 'F';
	}
	return grade;
}

void Student::displayDetails()
{
	cout << " -----------Student Details--------\n";
 cout << "Roll Number: " << rollNumber << endl;
 cout << "Name: " << name << endl;
 cout << "Marks: " << marks << endl;
 cout << "Grade: " << getGrade() << endl << endl;
}

Student::~Student()
{
	// TODO Auto-generated destructor stub
}

