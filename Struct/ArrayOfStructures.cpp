#include<iostream>
#include<string>
using namespace std;
//create struct
struct employee
{
	int emp_no;
	char name[10];
	double salary;
	
};
void mainn()
{
	//create an array of structure 
	employee emp[2];
	//get all the input from user for 2 employees
	//using for loop
	for(int i=0;i<2;i++)
	{
		cout<<"Enter Employee"<<i+1<<"information"<<endl;
		cout<<"Enter Emp ID"<<endl;
		cin>>emp[i].emp_no;
		cout<<"Enter Emp Name"<<endl;
		cin>>emp[i].name;
		cout<<"Enter Emp Salary"<<endl;
		cin>>emp[i].salary;
	}

	//display the info
	for(int i=0;i<2;i++)
	{
		cout<<"Employee Info of"<<i+1<<"are"<<endl;
		cout<<"ID: "<<emp[i].emp_no<<endl;
		cout<<"Name: "<<emp[i].name<<endl;
		cout<<"Salary: "<<emp[i].salary<<endl;

	}


	system("pause");
}