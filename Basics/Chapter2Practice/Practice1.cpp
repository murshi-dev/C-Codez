//Write a C++ code to find the average of three numbers.
#include<iostream>
using namespace std;
int main()
{
	//declare and initialise the variables
	double num1 = 0.0, num2 = 0.0, num3 = 0.0, average = 0.0;
	//prompt and accept first number
	cout << "Enter the first number: ";
	cin >> num1;
	//prompt and accept second number
	cout << "Enter the second number: ";
	cin >> num2;
	//prompt and accept third number
	cout << "Enter the third number: ";
	cin >> num3;
	//calculation
	average = (num1 + num2 + num3) / 3;
	//result
	cout << "Average is: " << average;

	return 0;
}
