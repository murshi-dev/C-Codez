//ShoppingApp using Functions
#include<iostream>
using namespace std;
//function declaration/function prototype
void displayWelcome();
void displayProduct(int productId, string productName);
double getTaxRate();
double calculateTotal(double price, int quantity, double taxRate);
int main()
{
	int prodId = 0;
	string prodName = " ";
	int prodQuantity = 0;
	double prodPrice = 0.0;

	//function call -- void function WITHOUT parameters
	displayWelcome();

	cout << "Input the product ID: ";
	cin >> prodId;
	cout << "Input the product name: ";
	cin >> prodName;
	cout << "Input the product price: ";
	cin >> prodPrice;
	cout << "Input the product quantity: ";
	cin >> prodQuantity;

	//function call -- void function WITH parameters
	displayProduct(prodId, prodName);

	//function call -- value returning function WITHOUT parameters
	double taxRate = getTaxRate();
	cout << "Tax Rate: " << taxRate << endl;

	//function call -- value returning function WITH parameters
	double totalBill = calculateTotal(prodPrice, prodQuantity, taxRate);
	cout << "Product Price: " << prodPrice << endl;
	cout << "Product Quantity: " << prodQuantity << endl;
	cout << "Total Bill: " << totalBill << endl;

	return 0;
}
//function definitions
//1. void function WITHOUT parameters
void displayWelcome()
{
	cout << "July Shopping App" << endl;
	cout << "Welcome to the store!" << endl;
}
//2. void function WITH parameters
void displayProduct(int productId, string productName)
{
	cout << "Product ID: " << productId << endl;
	cout << "Product Name: " << productName << endl;
}
//3. value returning function WITHOUT parameters
double getTaxRate()
{
	return 0.06;	//6% SST
}
//4. value returning function WITHOUT parameters
double calculateTotal(double price, int quantity, double taxRate)
{
	double subTotal = price * quantity;
	double total = subTotal + (subTotal * taxRate);
	return total;
}