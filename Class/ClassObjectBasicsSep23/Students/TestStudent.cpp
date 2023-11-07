#include "Student.h"
#include<iostream>
using namespace std;
int main()
{
	Student student1;
	student1.setName("Amy");
	student1.setMark(78);
	cout << "Student name: " << student1.getName() << endl;
	cout << "Student mark: " << student1.getMark() << endl;
	return 0;
}