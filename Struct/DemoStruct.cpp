#include<iostream>
using namespace std;

//create a struct
//Person-->struct name
struct Person
{
	char name[10];//member1 of Person struct
	int age;////member2 of Person struct
};//end with semicolon
//NOTE-memory will not be allocated to struct yet
//memory will be created only after creating a variable
void main()
{
	//create a variable for struct
	//syntax-->structname structvariable;
	Person p;//only now memory will be allocated for Person structure
	//get input from user for name and age
	cout<<"Enter name: "<<endl;
	//accept input
	cin>>p.name;//use the variable p to access name
	//here .(dot) is the 'member access operator'
	cout<<"Enter age: "<<endl;
	cin>>p.age;

	//display the output
	cout<<"Name is: "<<p.name<<endl;
	cout<<"Age is: "<<p.age<<endl;

	system("pause");
}