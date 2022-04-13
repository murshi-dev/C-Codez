#include "Person.h"

void Person::setInput(int i,string f,string l)
{
	id=i;
	firstname=f;
	lastname=l;
}
	int Person::getId()
	{
		return id;
	}
	string Person::getFname()
	{
		return firstname;
	}
	string Person::getLname()
	{
		return lastname;
	}