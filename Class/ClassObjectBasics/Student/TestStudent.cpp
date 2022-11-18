//demo First OOP program
#include "Student.h"
#include<iostream>
using namespace std;
int main()
{
	string input1;
	int input2;
	//create object using class
	Student s1;//s1 is an object of type Student class
	//using s1 access all the functions.
	cout << "Enter a student name: ";
	cin >> input1;
	s1.setName(input1);

	cout << "Enter the student mark:";
	cin >> input2;
	s1.setMark(input2);

	cout << "Entered name is: " << s1.getName() << endl;
	cout << "Entered mark is: " << s1.getMark() << endl;

	return 0;
}