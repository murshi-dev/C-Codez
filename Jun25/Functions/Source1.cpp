//florist discount
#include<iostream>
using namespace std;
void displayInfo();
string calculateDiscount(int orders, int amount);
int main2()
{
	int orders = 0, amount = 0;
	displayInfo();
	cout << "Input the number of orders: ";
	cin >> orders;
	cout << "Input the purchase amount: ";
	cin >> amount;
	cout<<calculateDiscount(orders, amount);
	return 0;
}
void displayInfo()
{
	cout << "25% discount for Orders>3 OR PurchaseAmount>250" << endl;
	cout << "50% discount for Orders>5 OR PurchaseAmount>500" << endl;
}
string calculateDiscount(int orders, int amount)
{
	if ((orders > 5) || (amount > 500))
		return "Eligible For 50% discount";
	else if((orders>=3&&orders<=5)||(amount>250 && amount<=500))
		return "Eligible For 25% discount";
	else
		return "No Discount";
}