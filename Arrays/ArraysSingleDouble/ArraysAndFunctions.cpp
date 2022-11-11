//create an array and pass as a parameter to a function
#include<iostream>
using namespace std;
//prototype
double getTotal(double marks[], int numElements);
int main()
{
	double marks[5] = { 0 };
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter mark " << i+1<< ":";
		cin >> marks[i];
	}
	//function call
	cout << getTotal(marks, 5);
	return 0;
}
//function definition
double getTotal(double marks[], int numElements)
{
	int total = 0;
	for (int i = 0; i < 5; i++)
	{
		total += marks[i];
	}//end for
	return total;
}//end function