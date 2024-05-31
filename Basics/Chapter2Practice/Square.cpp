//C++ code to find the square of an entered number.
#include<iostream>
using namespace std;
int main()
{
	int number = 0, square = 0;
	cout << "Enter the number to find square";
	cin >> number;
	square = number * number;
	cout << "Square is: " << square;
	return 0;
}