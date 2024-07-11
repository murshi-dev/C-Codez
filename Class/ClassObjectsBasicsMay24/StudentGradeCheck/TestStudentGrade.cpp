#include "Student.h"
#include<iostream>
using namespace std;
int main()
{
	Student s1;
	s1.setName("Jane");
	s1.setMark(85);
	cout << "Student Name: " << s1.getName() << endl;
	cout << "Student Mark: " << s1.getMark() << endl;
	cout << "Student Grade: " << s1.calculateGrade();
	return 0;
}