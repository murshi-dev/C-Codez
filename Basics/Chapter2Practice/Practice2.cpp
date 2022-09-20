//Write a C++ code to find the square of an entered number.
#include<iostream>
using namespace std;
int main()
{
	//declare and initialise variable
	int num = 0, square = 0;
	//prompt input from user
	cout << "Enter a number to find the square" << endl;
	cin >> num;
	//calculate
	square = num * num;
	//display output
	cout << "Square of " << num << " is " << square;
	return 0;
}