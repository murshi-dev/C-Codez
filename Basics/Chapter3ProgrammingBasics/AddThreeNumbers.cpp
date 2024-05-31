//predirective and header file
#include<iostream>
using namespace std;
//main function
int mainAdd()
{
	//declare and initialise variables
	int n1 = 0, n2 = 0, n3 = 0, sum = 0;
	//prompt and input the numbers
	cout << "Enter the first #: ";
	cin >> n1;
	cout << "Enter the second #: ";
	cin >> n2;
	cout << "Enter the third #: ";
	cin >> n3;
	//calculate
	sum = n1 + n2 + n3;
	//display output
	cout << "Sum of " << n1 << " , " << n2 << " and " 
				<< n3 << " is " << sum;
	return 0;
}



