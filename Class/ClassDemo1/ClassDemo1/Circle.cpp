//find area of a circle
//using Class and Objects
#include<iostream>
using namespace std;
//create a class using class keyword followed by classname
class Circle
{
	//by default all members of a class are 'private'
	//which means they are not accessible outside class
	//to make them accessible outside class change the 
	//access specifier to 'public'
	//declared private to make the data secure from unauthorised access
public:
	//declare state/properties/data members/attributes
	double radius;
	//declare behaviors/member functions/methods/functions
	//Constructor to initialise variables
	//constructor is a function has same name as class
	//has no return type
	Circle()
	{
		radius=1;//not directly initialised when declared
		//to separate access from other classes
	}
	//create another (parametrised)constructor by passing the radius
	//this function will be called in the main function when object is created
	Circle(double r)
	{
		radius=r;
	}
	//function to calculate area
	double calArea()
	{
		return 3.14*radius*radius;
	}
};//class ends here
void mainr()
{
	//NOTE! Circle is a general format of a class
	//object1 and object2 represent a particular INSTANCE of the class
	//any number of instances/objects ccan be created with only one class
	//create object for the Circle class
	//craeting objects is called as INSTANTIATION
	Circle object1(25);
	Circle object2(3.5);
	//display area by calling the function calArea
	cout<<"Area of circle with radius "<<object1.radius<<" is "<<object1.calArea()<<endl;
	cout<<"Area of circle with radius "<<object2.radius<<" is "<<object2.calArea()<<endl;
	system("pause");
}

