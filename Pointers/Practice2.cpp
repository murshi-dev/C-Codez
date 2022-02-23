#include<iostream>
using namespace std;
void main()
{
	//declare char variable and initialise with any value
	char name='A';
	//declare double variable and initialise with any value
	double num='5.0';

	//create pointer to store the address of char variable name
	char *ptr1=&name;
	//create pointer to store the address of double variable num
	double *ptr2=&num;

	//display the content of *ptr1
	cout<<"Content of ptr1 is: "<<*ptr1<<endl;
	cout<<"Value of ptr1 is: "<<ptr1<<endl;
	//display the content of *ptr2
	cout<<"Content of ptr1 is: "<<*ptr2<<endl;
	cout<<"Value of ptr1 is: "<<ptr2<<endl;

	//dereferencing--change value of name and num
	*ptr1='B';
	*ptr2=35.6;
	cout<<"new value of name: "<<name<<endl;
	cout<<"new value of num is: "<<num<<endl;
	system("pause");
}