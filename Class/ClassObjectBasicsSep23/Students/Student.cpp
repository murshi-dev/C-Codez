#include "Student.h"
Student::Student() //classname::methodname()
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