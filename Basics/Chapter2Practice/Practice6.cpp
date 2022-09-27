//Write a C++ code to display the total amount to be 
//paid for an apparel with a discount of 20 % to its original price.
#include<iostream>
using namespace std;
void main()
{
	//declare required variables 
	double price = 0.0, amountToPay = 0.0;
	//since tax is a fixed value, declare it as a constant
	const double DISCOUNT = 0.2;
	//prompt user input
	cout << "Enter the price of an apparel" << endl;
	//accept user input
	cin >> price;
	//calculate
	amountToPay = price - (price * DISCOUNT);
	//display result
	cout << "Amount to pay for " << price << " is " << amountToPay << endl;


	system("pause");
}