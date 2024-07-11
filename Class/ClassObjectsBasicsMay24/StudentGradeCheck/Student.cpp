//describe/define the methods declared in the Student header file
#include "Student.h"
Student::Student()//:: class resolution operator 
{
	name = "";
	mark = 0;
}
void Student::setName(string n)
{
	name = n;
}
void Student::setMark(int m)
{
	mark = m;
}
string Student::getName()
{
	return name;
}
int Student::getMark()
{
	return mark;
}
int Student::calculateGrade()
{
	if (mark >= 80)
		return 4;
	else
		return 3;
}