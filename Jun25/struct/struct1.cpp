#include<iostream>
#include<fstream>
using namespace std;
//declare the struct
struct Product
{
	int productID;
	string productName;
	double productPrice;
};
int main()
{
	Product product[3];//create an array for the struct ---accepts 3 products
	//INPUT
	for (int i = 0; i < 3; i++)
	{
		cout << "Input the product id: ";
		cin >> product[i].productID;
		cout << "Input the product name: ";
		cin >> product[i].productName;
		cout << "Input the product price: ";
		cin >> product[i].productPrice;
	}
	//OUTPUT
	for (int i = 0; i < 3; i++)
	{
		cout << "Product ID: " << product[i].productID << endl;
		cout << "Product Name: " << product[i].productName << endl;
		cout << "Product Price: " << product[i].productPrice << endl;
	}
	//DISPLAY THE PRODUCTS PRICED > 100
	for (int i = 0; i < 3; i++)
	{
		if (product[i].productPrice > 100)
		{
			cout << "Product ID: " << product[i].productID << endl;
			cout << "Product Name: " << product[i].productName << endl;
			cout << "Product Price: " << product[i].productPrice << endl;
		}
	}
	//SAVE THE PRODUCTS IN A TEXT FILE
	ofstream output("products.txt");
	//check if the file is open
	if (output.is_open())
	{
		output << "Products List:" << endl;
		for (int i = 0; i < 3; i++)
		{
			output << "Product " << i + 1 << ": ";
			output << "ProductID: " << product[i].productID<<", ";
			output << "ProductName: " << product[i].productName<<", ";
			output << "ProductPrice: " << product[i].productPrice<<endl;
		}
		output.close();
		cout << "Product details stored in text file";
	}
	else
	{
		cout << "Error opening the text file";
	}
	return 0;
}