#include<iostream>
using namespace std;
#include "CircleWithPrivateDataMembers.h"
void main()
{
	//main function must have only two tasks:
	//1.create objects
	//2.call the member functions

	//1.create object
	Circle circle1;
	//circle1.radius=2.5; direct initialisation is not possible
	//since radius is declared 'private' in Circle class

	//2.call the member functions using the object
	//set the radius first
	circle1.setRadius(2.5);
	//display the radius
	cout<<"Radius is: "<<circle1.getRadius()<<endl;
	//calculate the area
	cout<<"Area is: "<<circle1.calArea()<<endl;
	system("pause");
}