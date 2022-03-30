//add the required header file to implement all the members
//declared in the header file
#include "Circle.h"
//implement deafult constructor
Circle::Circle()//Classname::functionname --- here :: is called 'scope resolution operator'
{
	radius=1;
}
//implement parametrised constructor
Circle::Circle(double r)
{
	radius=r;
}
//implement calArea
double Circle::calArea()
{
	return 3.14*radius*radius;
}
