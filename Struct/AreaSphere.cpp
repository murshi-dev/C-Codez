#include<iostream>
#include<string>
using namespace std;
//create struct
struct Sphere
{
	double radius;
	Sphere(double r)//constructor 
	{
			radius=r;
	}
	
	void calArea()//function
	{
		cout<<"Area is: "<<(4*3.14)*radius*radius<<endl;
	}
};

void main()
{
	Sphere s=Sphere(2.3);//call constructor
	s.calArea();//call function
	system("pause");
}