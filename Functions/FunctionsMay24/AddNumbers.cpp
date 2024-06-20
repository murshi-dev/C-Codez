#include<iostream>
using namespace std;
void getInput(int& a, int& b);//function prototype
int addNumbers(int a, int b);
int subNumbers(int a, int b);
int main()
{
	int n1 = 0, n2 = 0;
	getInput(n1, n2);
	cout << "Added Value: " << addNumbers(n1, n2);
	getInput(n1, n2);
	cout << "Subtracted Value: " << subNumbers(n1, n2);
	return 0;
}
//function definition to get input
void getInput(int& a, int& b)//void - no return values in the function
//a and b are the reference variables
{
	cout << "Input two numbers:  ";
	cin >> a >> b;
}
int addNumbers(int a, int b)
{
	return (a + b);
}
int subNumbers(int a, int b)
{
	return (a - b);
}