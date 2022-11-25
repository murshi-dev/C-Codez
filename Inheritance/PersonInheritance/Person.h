//Person.h
//base class for all derived classes - Customer and Supplier
#pragma once
#include<string>
using namespace std;
class Person
{
protected:
	int idNum;
	string lastName, firstName;
public:
	//constructor
	Person();
	//setter
	void setIdNum(int id);
	void setLastName(string lname);
	void setFirstName(string fname);
	//getter
	int getIdNum();
	string getLastName();
	string getFirstName();

};