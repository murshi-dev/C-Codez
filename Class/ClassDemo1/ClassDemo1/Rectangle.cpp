//find area of a rectangle
#include<iostream>
using namespace std;
class Rectangle
{
	public:
	double length,width;
	Rectangle()
	{
		length=1;
		width=1;
	}
	Rectangle(double l,double w)
	{
		length=l;
		width=w;
	}
	double calArea()
	{
		return length*width;
	}
};//class ends here
void main()
{
	Rectangle object1(25,50);
	Rectangle object2(3.5,8.2);
	cout<<"Area of Rectangle with length "<<object1.length<<" and width "<<object1.width<<" is "<<object1.calArea()<<endl;
	cout<<"Area of Rectangle with length "<<object2.length<<" and width "<<object2.width<<" is "<<object2.calArea()<<endl;
	system("pause");
}

