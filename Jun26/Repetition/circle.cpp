#include<iostream>
using namespace std;
int main()
{
	//declare required variables 
	const double PI = 3.14;
	double radius = 0, area = 0;
	//set the initial value for loop --step 1
	char option = 'y';
	//while condition --step 2
	while (option == 'y')
	{
		//prompt and input radius
		cout << "Input radius: ";
		cin >> radius;
		//calculate area
		area = PI * radius * radius;
		//display area
		cout << "Area is: " << area<<endl;
		//continue(y/n) -- step 3
		cout << "Continue(y/n): ";
		cin >> option;
	}
	return 0; }
