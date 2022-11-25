#include "Member.h"
//Constructor
Member::Member() 
{
	name="";
	memberID=0, contact=0, birthYear=0;
}
//setters or mutators
void Member::setName(string n)
{
	name = n;
}
void Member::setMemberID(int mid)
{
	memberID = mid;
}
void Member::setContact(int contact)
{
	contact = contact;
}
void Member::setBirthYear(int year) {
	birthYear = year;
}
//getters or accessors
string Member::getName()
{
	return name;
}
int Member::getMemberID()
{
	return memberID;
}
int Member::getContact()
{
	return contact;
}
int Member::getBirthYear()
{
	return birthYear;
}