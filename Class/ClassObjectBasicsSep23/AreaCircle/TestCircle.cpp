#include "Circle.h"
#include<iostream>
using namespace std;
int main()
{
	Circle object1;
	double radius = 0.0;
	cout << "Enter the radius: ";
	cin >> radius;
	//set the radius using setter method
	object1.setRadius(radius);
	//display the entered radius using getter method
	cout<<"Entered radius is: "<<object1.getRadius()<<endl;
	//calculate the area
	cout << "Area is: " << object1.calculateArea();
	return 0;
}