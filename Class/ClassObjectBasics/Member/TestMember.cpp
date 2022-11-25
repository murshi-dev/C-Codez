#include "Member.h"
#include<iostream>
using namespace std;
int main()
{
	//local variables
	string n;
	int m, c, b;

	cout << "Enter the name of member: ";
	cin >> n;
	cout << "Enter the member id of member: ";
	cin >> m;
	cout << "Enter the contact of member: ";
	cin >> c;
	cout << "Enter the birth year of member: ";
	cin >> b;

	//create object for Member class
	Member obj1;
	//using this object call the setter methods
	obj1.setName(n);
	obj1.setMemberID(m);
	obj1.setContact(c);
	obj1.setBirthYear(b);
	//using the same object call the getter methods
	cout << "Member Name: " << obj1.getName() << endl;
	cout << "Member ID: " << obj1.getMemberID() << endl;
	cout << "Member Contact: " << obj1.getContact() << endl;
	cout << "Member Birth year: " << obj1.getBirthYear() << endl;
		return 0;
}