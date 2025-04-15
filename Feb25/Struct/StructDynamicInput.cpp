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
	cout << "Enter the product ID: ";
	cin >> p1.pID;
	cout << "Enter the product Name: ";
	cin >> p1.pName;
	cout << "Enter the product Price: ";
	cin >> p1.pPrice;
	//display the object values
	cout << "Product ID: " << p1.pID << endl;
	cout << "Product Name: " << p1.pName << endl;
	cout << "Product Price: " << p1.pPrice << endl;
	return 0;
}