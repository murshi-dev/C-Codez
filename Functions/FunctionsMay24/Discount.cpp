#include<iostream>
using namespace std;
double getPurchases();
double calculateDiscount(double sales);
int main()
{
	double gp = 0.0, tp = 0.0;
	gp = getPurchases();
	tp = calculateDiscount(gp);
	cout << "Amount To Pay: " << tp;
	return 0;
}
double getPurchases()
{
	double salesAmount = 0.0;
	cout << "Enter the purchase amount: ";
	cin >> salesAmount;
	return salesAmount;
}
double calculateDiscount(double sales)
{
	double discount = 0.0;
	//decide the discount range
	if (sales < 100)
		discount = 0;
	else if (sales >= 100 && sales <= 499.99)
		discount = sales * 0.10;
	else if (sales >= 500)
		discount = sales * 0.20;
	else
		discount = sales = 0.0;
	//subtract the discount 
	double toPay = sales - discount;
	//return the result
	return toPay;
}