#include<iostream>
using namespace std;
struct Sales
{
	//property/attributes of the Sales struct
	double salesValue[4];
	//methods/behaviour of the Sales struct
	double calculateTotalSales()
	{
		double total = 0.0;
		for (int i = 0; i < 4; i++)
		{
			total += salesValue[i];
		}
		return total;
	}
};
struct Product
{
	int prodID;
	string prodName;
	Sales productSales;//struct inside struct/nested structs
};
int main()
{
	Product pObject;
	cout << "Enter Product ID: ";
	cin >> pObject.prodID;
	cout << "Enter Product Name: ";
	cin >> pObject.prodName;
	cout << "Enter Sales value for 4 Quarters: ";
	for (int i = 0; i < 4; i++)
	{
		//input to struct inside struct
		cin >> pObject.productSales.salesValue[i];
	}

	cout << "Product Details: \n";
	cout << "Product ID: " << pObject.prodID << endl;
	cout << "Product Name: " << pObject.prodName << endl;
	cout << "Sales value for 4 Quarters: ";
	for (int i = 0; i < 4; i++)
	{
		//output struct inside struct
		cout << pObject.productSales.salesValue[i] << " ";
	}
	//calculate and display total sales value
	double totalSales = pObject.productSales.calculateTotalSales();
	cout << "Total Sales: " << totalSales << endl;
	return 0;
}