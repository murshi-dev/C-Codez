#include "Person.h"
Person::Person()
{
	idNum = 0;
	firstName = "";
	lastName = "";
}
void Person::setId(int id)
{
	idNum = id;
}
void Person::setFirstName(string fn)
{
	firstName = fn;
}
void Person::setLastName(string ln)
{
	lastName = ln;
}
int Person::getId()
{
	return idNum;
}
string Person::getFirstName()
{
	return firstName;
}
string Person::getLastName()
{
	return lastName;
}