#include<iostream>
using namespace std;
void main()
{
	//declare a normal variable
	int var=10;
	cout<<"value of var is "<<var<<endl;
	//display the address of var
	//Note!address varies everytime when program is executed
	cout<<"Address of var is "<<&var<<endl;

	//store this address in a variable
	//int address=&var;-->cannot store address in a normal variable
	//declare a pointer variable to store the address of a variable
	int* address=&var;
	//int * address=&var;-->other way of declaring
	//int *address=&var;-->other way of declaring

	//display the value of pointer variable
	cout<<"Value of pointer variable is(stores the address of var): "<<address<<endl;
	cout<<"Pointer points to the value "<<*address<<endl;

	//change the value of var using the address(pointer) variable
	//DEREFERENCING-converting the value of a variable using pointers
	*address=200;
	cout<<"New value of var is: "<<var<<endl;

	//pointer can be initialised with 0, NULL or an address
	int* address1=&var;//storing the address using & symbol
	int* address2=0;//can initilaise with 0
	int* address3=NULL;//can initialise with NULL--a non zero value or non empty value

	system("pause");
}