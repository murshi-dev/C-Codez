#include "Employee.h"
#include <iostream>
using namespace std;
void main()
{
	Employee obj1;
	cout<<"Enter Employee ID: "<<endl;
	int empid;
	cin>>empid;
	obj1.setEmpNum(empid);//set the entered value to empid

	cout<<"Enter Employee Compensation: "<<endl;
	double empcomp;
	cin>>empcomp;
	obj1.setEmpComp(empcomp);

	//display values
	cout<<"Entered data: "<<endl;
	cout<<"Employee ID: "<<obj1.getEmpNum()<<endl;
	cout<<"Employee Compensation: "<<obj1.getEmpComp()<<endl;

	system("pause");
}