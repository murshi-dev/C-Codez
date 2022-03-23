//pass array of structs as parameter 
#include<iostream>
#include<string>
using namespace std;
struct student
{
	//struct members
	char id[5];
	string name;
	int contact;
};
//create a function to display the members
//pass array of struct as parameter
void outputData(student s[], int size)
{
	//display all info 
	//array of struct=>kind of array
	//use for loop to display each row
	for(int i=0;i<3;i++)
	{
		cout<<"ID: "<<s[i].id<<endl;
		cout<<"Name: "<<s[i].name<<endl;
		cout<<"Contact: "<<s[i].contact<<endl;
	}
}
void main()
{
	//create an array of struct
	student st[3];
	//use for loop to accept input from user
	for(int i=0;i<3;i++)
	{
		cout<<"Enter ID: "<<endl;
		cin>>st[i].id;
		cout<<"Enter Name: "<<endl;
		cin>>st[i].name;
		cout<<"Enter Contact: "<<endl;
		cin>>st[i].contact;
	}
	//display output
	//function call outputData by passing a struct variable and size
	outputData(st,3);
	system("pause");
}