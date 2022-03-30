//main function to test the circle class
#include<iostream>
#include "Circle.h"
using namespace std;
void main()
{
	//create objects
	Circle object1(25);
	Circle object2(3.5);
	//display area by calling the function calArea
	cout<<"Area of circle with radius "<<object1.radius<<" is "<<object1.calArea()<<endl;
	cout<<"Area of circle with radius "<<object2.radius<<" is "<<object2.calArea()<<endl;

	system("pause");
}