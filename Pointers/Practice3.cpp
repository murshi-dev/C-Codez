#include<iostream>
using namespace std;
void main()
{

	//calculate area of circle using the pointer varaibles
	double radius=3.5;
	//normal way of calculate area using radius variable
	cout<<"Radius is: "<<radius<<endl;
	cout<<"Area is "<<3.14*radius*radius<<endl;
	cout<<endl;

	//now calculate area using pointers
	//first declare a pointer variable and store the address of 'radius'
	double *ptr=&radius;
	//now use this ptr variable to calculate radius
	cout<<"Area calculate using pointer is "<<3.14 * (*ptr) * (*ptr)<<endl;

	//display the address of variable 
	cout<<"Address of radius "<<*ptr<<endl;

	//dereferencing---change value of radius through pointer
	//then display area
	*ptr=8.5;//new radius value
	cout<<"Area calculate using pointer is(updated radius value) "<<3.14 * (*ptr) * (*ptr)<<endl;


	system("pause");
}