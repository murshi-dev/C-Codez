#include<iostream>
using namespace std;
//declare a struct
struct Product
{
	int pID;
	string pName;
	double pPrice;
};
int main()
{
	Product p[3];//an array to hold 3 products
	
	//input values
	for (int counter = 0; counter < 3; counter++)
	{
		cout << "Enter the product ID: ";
		cin >> p[counter].pID;
		cout << "Enter the product Name: ";
		cin >> p[counter].pName;
		cout << "Enter the product Price: ";
		cin >> p[counter].pPrice;
	}

	//output values
	for (int counter = 0; counter < 3; counter++)
	{
		cout << "Product ID: " << p[counter].pID << endl;
		cout << "Product Name: " << p[counter].pName << endl;
		cout << "Product Price: " << p[counter].pPrice << endl;
	}
	
	//display the products with price greater than 100
	cout << "Products with price greater than 100: " << endl;
	for (int counter = 0; counter < 3; counter++)
	{
		if (p[counter].pPrice > 100)
		{
			cout << "Product ID: " << p[counter].pID << endl;
			cout << "Product Name: " << p[counter].pName << endl;
			cout << "Product Price: " << p[counter].pPrice << endl;
		}
	}

	return 0;
}