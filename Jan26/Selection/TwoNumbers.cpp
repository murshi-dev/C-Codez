#include<iostream>
using namespace std;
int main()
{
	int n1=0, n2=0 ;
	cout << "Enter any two numbers: ";
	cin >> n1 >> n2;
	//if else structure to compare the numbers
	if (n1 == n2)
	{
		cout << "Both the numbers are equal";
	}
	else if (n1 > n2)
	{
		cout << n1 <<" is greater than "<< n2;
	}
	else
	{
		cout << n2 <<" is greater than "<< n1;
	}

	
	return 0;
}