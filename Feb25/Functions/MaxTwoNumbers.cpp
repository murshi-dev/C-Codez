//Create a program using functions to find the largest among two 
// numbers entered.
// Pass the input numbers as parameters to the function.
//prototype
double larger(double x, double y);
#include<iostream>
using namespace std;
int main()
{
	double n1 = 0.0, n2 = 0.0;
	cout << "Enter the first number: ";
	cin >> n1;
	cout << "Enter the second number: ";
	cin >> n2;
	//function call
	cout<<"Max of "<<n1<<" and "<<n2<<" is:"<<larger(n1, n2);
	return 0;
}
//function definition
double larger(double x, double y)
{
	double max = 0.0;
	if (x == y)
	{
		cout << "Both the numbers are equal";
		return 1;
	}
	else if (x > y)
		max = x;
	else
		max = y;
	return max;
}