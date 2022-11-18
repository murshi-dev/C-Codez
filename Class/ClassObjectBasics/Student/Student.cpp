//function definition for all function create din Student.h header file
#include "Student.h"
Student::Student()//::scope resolution operator
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