#include "CircleWithPrivateDataMembers.h"
//start implementing the members declared in
//the CircleWithPrivateDataMembers.h header file
Circle::Circle()
{
	radius=1;
}
//the value 'radius' cannot be initialised as radius=100
//anymore
//access them using constructor
//or access them using setter and getter methods

//Setter methods-->MUTATOR methods-changing values of member
//Getter methods-->ACCESSOR methods-displays/returns a member

//setter method implement
void Circle::setRadius(double r)
{
	radius=r;
}
//getter method implement
double Circle::getRadius()
{
	return radius;
}
//calArea method implement
double Circle::calArea()
{
	return 3.14*radius*radius;
}