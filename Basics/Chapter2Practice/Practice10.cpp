/*Factory Outlet Store is having a sale.All items are on sale
with 30 % discount to the original price.The store manager wants 
a program that allows a sales clerk to enter the original price 
of an item and calculate the price after discount.Also, a fixed 
sales tax of 6 % is charged to the total bill.Write a C++ code 
to calculate the total amount to pay*/
#include<iostream>
using namespace std;
int main()
{
	double price = 0.0, afterDiscount=0.0, afterTax = 0.0;
	const double tax = 0.06, discount = 0.30;
	cout << "Enter the price of the item: ";
	cin >> price;
	afterDiscount = price - (price * discount) ;
	afterTax = afterDiscount + (afterDiscount * 0.06);
	cout << "After Discount: " << afterDiscount << endl;
	cout << "After Tax: " << afterTax;
	return 0;
}