#include "Customer.h"
#include "Supplier.h"
#include<iostream>
using namespace std;
int main()
{
	//local variables
	int id;
	string l, f,p;
	double bdue,cdue;
	//prompt and accept user inputs
	cout << "Enter Id: ";
	cin >> id;
	cout << "Enter Last Name:";
	cin >> l;
	cout << "Enter First Name:";
	cin >> f;
	cout << "Enter Balance Due:";
	cin >> bdue;

	//create object for Customer
	Customer cust1;
	cust1.setIdNum(id);
	cust1.setLastName(l);
	cust1.setFirstName(f);
	cust1.setBalanceDue(bdue);

	cout << "Customer ID: " << cust1.getIdNum() << endl;
	cout << "Customer LastName: " << cust1.getLastName() << endl;
	cout << "Customer FirstName: " << cust1.getFirstName() << endl;
	cout << "Customer Balance Due: " << cust1.getBalanceDue() << endl;

	cout << "Enter Id: ";
	cin >> id;
	cout << "Enter Last Name:";
	cin >> l;
	cout << "Enter First Name:";
	cin >> f;
	cout << "Enter Product Name ";
	cin >> p;
	cout << "Enter Credit Due";
	cin >> cdue;

	//create object for Supplier
	Supplier supp1;
	supp1.setIdNum(id);
	supp1.setLastName(l);
	supp1.setFirstName(f);
	supp1.setSupplierInfo(p, cdue);

	cout << "Supplier ID: " << supp1.getIdNum() << endl;
	cout << "Supplier LastName: " << supp1.getLastName() << endl;
	cout << "Supplier FirstName: " << supp1.getFirstName() << endl;
	cout << "Supplier Product Name: " << supp1.getProduct() << endl;
	cout << "Supplier Credit Due: " << supp1.getCreditDue() << endl;

	return 0;
}