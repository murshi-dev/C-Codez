#include<iostream>
using namespace std;
int main()
{
	int n1 = 0, n2 = 0;
	cout << "Enter any two numbers: ";
	cin >> n1 >> n2;
	//check if the numbers are positive --Use OR operator 
	if (n1 <= 0 || n2 <= 0)
	{
		cout << "Enter POSITIVE numbers only";
	}
	else 
	{
		if (n1 == n2)
				cout << "Both the numbers are SAME";
		else if (n1 > n2)
				cout << "n1 is larger than n2";
		else
				cout << "n2 is larger than n1";
	}
	return 0;
}