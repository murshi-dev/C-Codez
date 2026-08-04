//struct operations
#include<iostream>
using namespace std;
struct Product
{
	int prodId;
	string prodName;
	double prodPrice;
	double salesValue[4];//ARRAY INSIDE STRUCT
};
int main()
{
	//update to input 3 products' data
	Product prod[3];//ARRAY OF STRUCT
	
	//data input
	for (int count = 0; count < 3; count++)
	{
		cout << "Enter the product id: ";
		cin >> prod[count].prodId;
		cout << "Enter the product name: ";
		cin >> prod[count].prodName;
		cout << "Enter the product price: ";
		cin >> prod[count].prodPrice;
		//loop to input 4 sales values 
		for (int salesCounter = 0; salesCounter < 4; salesCounter++)
		{
			cout << "Enter the sales " << salesCounter << "value: ";
			cin >> prod[count].salesValue[salesCounter];//ATTENTION

		}
	}

	//data output
	for (int count = 0; count < 3; count++)
	{
		cout << "Product ID: " << prod[count].prodId << endl;
		cout << "Product Name: " << prod[count].prodName << endl;
		cout << "Product Price: " << prod[count].prodPrice << endl;
		//loop to output 4 sales values 
		for (int salesCounter = 0; salesCounter < 4; salesCounter++)
		{
			cout<< prod[count].salesValue[salesCounter]<<"\t";//ATTENTION

		}
	}
	return 0;
}