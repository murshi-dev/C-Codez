#include<iostream>
#include<string>
using namespace std;
//create struct
struct Car
{
	string brand;
	string model;
	//constructor to initialise members
	//do the initialisation inside struct itself, not in main
	//constructor name and struct name are same
	Car(string b,string m)//-->constructor function
	{
		brand=b;
		model=m;
	}
	//function to display the brand and model
	void displayDetails()
	{
		cout<<"Brand: "<<brand;
		cout<<"Model: "<<model;
	}
};

void main()
{
	//create variable
	Car c=Car("Honda","XYZ");//way to initialise constructor
	//display info by calling function
	c.displayDetails();
	system("pause");
}