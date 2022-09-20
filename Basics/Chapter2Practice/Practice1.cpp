//Write a C++ code to input two numbers, calculate the sum and display the result.
#include<iostream>
using namespace std;
int main()
{
	//declare and initialise variables
	int num1 = 0, num2 = 0, sum = 0;
	//prompt user for input
	cout << "Enter the first number" << endl;
	//accept the input
	cin >> num1;
	//prompt user for input
	cout << "Enter the second number" << endl;
	//accept the input
	cin >> num2;
	//calculation
	sum = num1 + num2;
	//display the result
	cout << "Sum of " << num1 << " and " << num2 << " is " << sum << endl;
	return 0;
}