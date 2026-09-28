#include<iostream>
using namespace std;
int main()
{
	int n1 = 0, n2 = 0;
	cout << "Input any two numbers: ";
	cin >> n1 >> n2;
	//check for larger number 
	if (n1 > n2)
		cout << n1 << " is larger than " << n2;
	else
		cout << n2 << " is larger than " << n1;
	return 0;
}