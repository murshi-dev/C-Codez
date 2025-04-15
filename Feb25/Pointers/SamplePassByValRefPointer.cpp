#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
void printValue(int x);
void printValue2(int& x);
void printValue3(int* x);
int main()
{
	int value = 10;
	cout << "Pass by Value\n";
	printValue(value);//20
	cout << endl;

	cout << "Pass by Reference\n";
	printValue2(value);//20
	cout << endl;

	cout << "Pass by Pointer\n";
	printValue3(&value);//20
	cout << endl;

	return 0;
}
/*PASS BY VALUE - here a copy of the variable is passed to the function
use this method when you do not need to modify the original data
ensuring the data remains unchanged*/
void printValue(int x)//copy of variable(x) is passed here 
{
	x = 20;
	cout << x;
}
/*PASS BY REFRENCE - instead of passing variables, function gets a reference
to the original variable. Use this method when copying
data takes too much memory*/
void printValue2(int& x)//address of variable(x) is passed here
{
	x = 20;
	cout << x;
}
/*PASS BY POINTER - here pass the address of the variable,
using which function can modify the original data. Use this method
to modify the original variable value*/
void printValue3(int* x)
{
	*x = 20;
	cout << *x;
}