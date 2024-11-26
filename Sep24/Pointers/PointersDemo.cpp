#include<iostream>
using namespace std;
int main()
{
	//declare a normal variable
	int var = 10;
	char charvar = 'A';
	double doublevar = 25.5;

	//declare a pointer variable
	int* ptr = &var;//address of var is assigned to ptr
	char* cptr = &charvar;
	double* dptr = &doublevar;

	//display the ptr(address of var)
	cout << "Memory Address of var is: " << ptr << endl;//an address
	cout << "Memory Address of charvar is: " << cptr << endl;//an address
	cout << "Memory Address of doublevar is: " << dptr << endl;//an address

	//display the value that ptr refers to
	cout << "Value that ptr refers is: " << *ptr << endl;//10
	cout << "Value that cptr refers is: " << *cptr << endl;//A
	cout << "Value that dptr refers is: " << *dptr << endl;//25.5

	//change the value of var using ptr
	*ptr = 20;
	*cptr = 'B';
	*dptr = 35.8;

	cout << "New value of var is: " << var << endl;//20
	cout << "New value of charvar is: " << charvar << endl;//B
	cout << "New value of doublevar is: " << doublevar << endl;//35.8
	return 0;
}