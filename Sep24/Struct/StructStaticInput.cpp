#include<iostream>
using namespace std;
//declare the struct
struct Product
{
	int pID;
	string pName;
	double pPrice;
};
int main()
{
	//create an object for the struct
	Product p1;
	//initialise the object with values
	p1.pID = 101;
	p1.pName = "Laptop";
	p1.pPrice = 5300.00;
	//display the object values
	cout << "Product ID: " << p1.pID << endl;
	cout << "Product Name: " << p1.pName << endl;
	cout << "Product Price: " << p1.pPrice << endl;
	return 0;
}