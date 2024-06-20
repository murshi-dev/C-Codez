#include<iostream>
using namespace std;
double findMax(double x, double y);
int mainccccc()
{
	double n1 = 0.0, n2 = 0.0;
	cout << "Input the first number:  ";
	cin >> n1;
	cout << "Input the second number: ";
	cin >> n2;
	cout << "Max value is: " << findMax(n1, n2);
	return 0;
}
double findMax(double x, double y)
{
	double max = 0.0;
	if (x > y)
		max = x;
	else
		max = y;
	return max;
}