#include<iostream>
using namespace std;
//prototype
int factorial(int n);
int main()
{
	int num = 0;
	cout << "Enter a number to find factorial: ";
	cin >> num;
	//function call
	cout << "Factorial of " << num << "is: " << factorial(num) << endl;
	return 0;
}
//function definition
int factorial(int n)
{
	if (n > 1)
		return n * factorial(n - 1);//recursive function used here
		//factorial function called itself inside its own function
	else
		return 1;
}
