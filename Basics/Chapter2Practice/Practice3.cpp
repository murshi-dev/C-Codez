//Write a C++ code to find the average of three numbers.
#include<iostream>
using namespace std;
int main()
{
	//declare and initialise variables
	int n1 = 0, n2 = 0, n3 = 0, sum = 0, average = 0;
	//prompt user for 3 inputs
	cout << "Input three numbers" << endl;
	cin >> n1 >> n2 >> n3;//get all inputs simultaneously
	//calculation
	sum = n1 + n2 + n3;
	average = sum / 3;
	//display output
	cout << "Entered numbers are" << endl;
	cout << "Number 1: " << n1 << " Number 2: " << n2 << " Number 3: " << n3 << endl;
	cout << "Sum is " << sum << " Average is " << average << endl;
	return 0;
}