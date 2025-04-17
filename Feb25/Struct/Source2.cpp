//struct inside struct -- nested structures
#include<iostream>
using namespace std;
//declare a struct to hold the sales values and a function to calculate the total sales value
struct Sales
{
	double salesValue[4];
	double calculateTotalSales()
	{
		double total = 0;
		for (int i = 0; i < 4; i++)
		{
			total += salesValue[i];
		}
		return total;
	}
};
//declare another struct Product with prodId,prodName and a struct Sales
struct Product
{
	int prodId;
	string prodName;
	Sales productSales;//nested struct
};

int main()
{
	Product product;

	//input product details
	cout << "Enter product id: ";
	cin >> product.prodId;
	cout << "Enter product name: ";
	cin >> product.prodName;
	cout << "Enter 4 Sales Values: ";
	for (int i = 0; i < 4; i++)
	{
		cin >> product.productSales.salesValue[i];
	}

	//output product details
	cout << "Product Info\n";
	cout << "Product Id: " << product.prodId << endl;
	cout << "Product Name: " << product.prodName << endl;
	cout << "Sales Values: ";
	for (int i = 0; i < 4; i++)
	{
		cout << product.productSales.salesValue[i] << endl;
	}
	//calculate and display the total sales
	double totalSales = product.productSales.calculateTotalSales();
	cout << "Total Sales: " << totalSales << endl;
	return 0;
}