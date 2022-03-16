#include<iostream>
#include<string>
using namespace std;
//create struct
struct Car
{
	string brand;
	string model;
	string color;
	int seats;
};
void main()
{
	//create variable for car struct
	Car c;
	//direct initialise members one by one
	c.brand="Honda";
	c.model="XYZ";
	c.color="Red";
	c.seats=4;
		
	//display the output in console
	cout<<"Brand: "<<c.brand<<endl;
	cout<<"Model: "<<c.model<<endl;
	cout<<"Color: "<<c.color<<endl;
	cout<<"Seats: "<<c.seats<<endl;
	
	//direct initialise using curly brace as a group
	Car d={"Hyundai","ABC","Grey",8};
	//display the output in console
	cout<<"Brand: "<<d.brand<<endl;
	cout<<"Model: "<<d.model<<endl;
	cout<<"Color: "<<d.color<<endl;
	cout<<"Seats: "<<d.seats<<endl;


	system("pause");
}