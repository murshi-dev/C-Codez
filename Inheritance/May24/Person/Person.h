#pragma once
#include<string>
using namespace std;
class Person
{
protected://limits access to own class and derived classes
	int idNum;
	string firstName, lastName;
public:
	Person();
	void setId(int id);
	void setFirstName(string fn);
	void setLastName(string ln);
	int getId();
	string getFirstName();
	string getLastName();
};