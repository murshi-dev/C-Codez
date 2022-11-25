//Person.cpp
#include "Person.h"
//constructor
Person::Person()
{
	idNum=0;
	lastName = "";
	firstName = "";
}
//setter
void Person::setIdNum(int id)
{
	idNum = id;
}
void Person::setLastName(string lname)
{
	lastName = lname;
}
void Person::setFirstName(string fname)
{
	firstName = fname;
}
//getter
int Person::getIdNum()
{
	return idNum;
}
string Person::getLastName()
{
	return lastName;
}
string Person::getFirstName()
{
	return firstName;
}