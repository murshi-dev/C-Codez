#include "Customer.h" //Person.h added here once
#include "Supplier.h" //Person.h added again
#include<iostream>
using namespace std;
void main()
{
	Customer cust;
	cust.setInput(007,"Jane","Doe");
	cust.setBalanceDue(2500);
	cout<<"Id:"<<cust.getId()<<endl;
	cout<<"Firstname:"<<cust.getFname()<<endl;
	cout<<"Lastname:"<<cust.getLname()<<endl;
	cout<<"Customer Balance due:"<<cust.getBalanceDue()<<endl;


	Supplier supp;
	supp.setInput(001,"Amy","Doe");
	supp.setProduct("Books");
	supp.setCreditdue(5000);
	cout<<"Id:"<<supp.getId()<<endl;
	cout<<"Firstname:"<<supp.getFname()<<endl;
	cout<<"Lastname:"<<supp.getLname()<<endl;
	cout<<"Product:"<<supp.getProduct()<<endl;
	cout<<"Supplier Credit Due:"<<supp.getCreditdue()<<endl;

	system("pause");
}