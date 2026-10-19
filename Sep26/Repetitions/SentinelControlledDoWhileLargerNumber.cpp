#include<iostream>
using namespace std;
int main()
{
	int n1 = 0, n2 = 0;
	char option = 'Y';//rule 1
	do{
		cout << "Input any two numbers";
		cin >> n1 >> n2;
		if (n1 > n2)
			cout << "n1 is larger" << endl;
		else
			cout << "n2 is larger" << endl;
		cout << "Continue Checking for larger numbers?(Y/N): ";
		cin >> option;//rule 3		
	} while (option == 'Y' || option == 'y');//rule 2
	return 0;
}