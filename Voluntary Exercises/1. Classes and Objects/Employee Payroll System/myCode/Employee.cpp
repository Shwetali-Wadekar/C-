#include "Employee.h"
#include<iostream>


Employee::Employee(int employeeID, string name, float basicSalary):employeeID(employeeID),
name(name),basicSalary(basicSalary)
{
}

float Employee::calculateGrossSalary()
{
	return basicSalary + (basicSalary*0.2) + (basicSalary*0.5);
}

void Employee::displayDetails()
{
	cout << "Employee ID: " << employeeID << endl;
		cout << "Name: " << name << endl;
		cout << "Basic Salary: " << basicSalary << endl;
		cout <<"Gross Salary: " << calculateGrossSalary() <<"$" << endl;

}
