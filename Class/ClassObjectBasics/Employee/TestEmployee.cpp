//TestEmployee.cpp
//has main function here
//create objects and call all the setter and getter methods
#include <iostream>
using namespace std;
#include "Employee.h"
int main()
{
	//create local variables
	int e = 0;
	double c = 0.0;
	//prompt user to enter input and accept the input
	cout << "Enter Employee number: ";
	cin >> e;
	cout << "Enter Employee compensation: ";
	cin >> c;

	//create object for Employee class
	Employee e1;//e1 is an object name 
	//using e1 call the setter method to assign values to empNum and empComp
	e1.setEmpNum(e);
	e1.setEmpComp(c);
	//using the same e1 call the getter methods to display the entered values
	cout << "Employee Number: " << e1.getEmpNum() << endl;
	cout << "Employee Compensation: " << e1.getEmpComp() << endl;
	return 0;
}