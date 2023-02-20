//Sarah is getting a raise rate of 5% to her weekly pay from next week. Write a C++ code to display the expected weekly pay for next week.
#include<iostream>
using namespace std;
int main()
{
	double weeklyPay = 0.0, newPay = 0.0;
	const double rate = 0.05;
	cout << "Enter the weekly pay: ";
	cin >> weeklyPay;
	newPay = weeklyPay + (weeklyPay * rate);
	cout << "New Pay: " << newPay;
	return 0;
}