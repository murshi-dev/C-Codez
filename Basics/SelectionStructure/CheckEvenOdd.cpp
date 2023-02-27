//code to check if an entered number is even or odd

#include<iostream>
using namespace std;
int main()
{
	//declare and initialise variable
	int number = 0;
	//prompt and accept input from user
	cout << "Enter a number to check even or odd: ";
	cin >> number;
	//write if condition with boolean expression
	if (number % 2 == 0) //use modulo operator, use double equal to
	{
		cout << number << " is even number";
	}
	else
	{
		cout << number << " is odd number";
	}
	return 0;
}