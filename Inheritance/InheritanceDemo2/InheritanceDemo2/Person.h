//Person.h
//add codes here such that person.h will be added 
//onlu=y one when called in main cpp file
#ifndef PERSON_H //if not defined person header file
#define PERSON_H //define header file
#include<string>
using namespace std;
class Person
{
protected:
	int id;
	string firstname,lastname;
public:
	void setInput(int,string,string);
	int getId();
	string getFname();
	string getLname();
};

#endif //close the if condition