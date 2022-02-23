//functions can be called in three ways
//1.by value
//2.by reference
//3.by pointers

//demo function by value
#include<iostream>
using namespace std;
void test(int a,int b);//prototype
void main()
{
	int a=10,b=20;//local variables
	cout<<"initial values before function call"<<endl;
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;

	//call the test function here
	test(a,b);
	
	cout<<"changed values after function call"<<endl;
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;
	system("pause");
}
//create a function that takes two parameters
//a and b and display the value
void test(int a,int b)
{
	//initialise values for a and b
	a=30;
	b=50;
}