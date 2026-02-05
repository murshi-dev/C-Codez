/*Convert an entered RM amount to its equivalent USD. 
Assume a fixed exchange rate. (1 USD = RM 3.90 ).*/
#include<iostream>
using namespace std;
int main()
{
	const double USD = 3.90;
	double RM, USDEqual = 0.0;

	cout << "Input the RM value: ";
	cin >> RM;

	USDEqual = RM / USD;

	cout << "USD Equivalent of entered RM is " << USDEqual;

	return 0;
}