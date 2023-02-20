//Write a C++ code to display the total amount to be paid for an apparel with a discount of 20 % to its original price.
#include<iostream>
using namespace std;
int main()
{
	double price = 0.0, toPay = 0.0;
	//constant-value does not change  - discount 20%
	const double discount = 0.20;
	cout << "Enter the price of the item: ";
	cin >> price;
	toPay = price - (price * discount);
	cout << "Total Due: " << toPay;
	return 0;
}