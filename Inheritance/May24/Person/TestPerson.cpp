#include "Customer.h"//will create a copy of Person
#include "Supplier.h"//again another copy of Person
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int id = 0;
	string fname = "", lname = "", productName="";
	double balDue = 0.0, credDue=0.0;

	cout << "Input the Customer ID:";
	cin >> id;
	cout << "Input the Customer first name: ";
	cin >> fname;
	cout << "Input the Customer last name: ";
	cin >> lname;
	cout << "Input the Customer balance due: ";
	cin >> balDue;

	Customer cust1;
	cust1.setId(id);
	cust1.setFirstName(fname);
	cust1.setLastName(lname);
	cust1.setBalanceDue(balDue);
	cout << "Customer ID: " << cust1.getId() << endl;
	cout << "Customer First Name: " << cust1.getFirstName() << endl;
	cout << "Customer Last Name: " << cust1.getLastName() << endl;
	cout << "Customer Balance Due: " << cust1.getBalanceDue() << endl;

	//repeat for supplier
	cout << "Input the Supplier ID:";
	cin >> id;
	cout << "Input the Supplier first name: ";
	cin >> fname;
	cout << "Input the Supplier last name: ";
	cin >> lname;
	cout << "Input the Supplier credit due: ";
	cin >> credDue;

	//create object for Supplier
	Supplier supplier1;
	supplier1.setId(id);
	supplier1.setFirstName(fname);
	supplier1.setLastName(lname);
	supplier1.setCreditDue(credDue);

	//display all the info
	cout << "Supplier ID: " << supplier1.getId() << endl;
	cout << "Supplier First Name: " << supplier1.getFirstName() << endl;
	cout << "Supplier Last Name: " << supplier1.getLastName() << endl;
	cout << "Supplier Credit Due: " << supplier1.getCreditDue() << endl;
	return 0;
}