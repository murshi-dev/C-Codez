//pass struct member as parameter 
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
//pass struct member as parameter
void outputData(char id[],string name,int contact)//these three are the members of struct
{
	//display all info 
	cout<<"ID: "<<id<<endl;
	cout<<"Name: "<<name<<endl;
	cout<<"Contact: "<<contact<<endl;
}
void main()
{
	//create a variable for struct student
	student st;
	//get input from user
	cout<<"Enter ID: "<<endl;
	cin>>st.id;
	cout<<"Enter Name: "<<endl;
	cin>>st.name;
	cout<<"Enter Contact: "<<endl;
	cin>>st.contact;

	//display output
	//function call outputData by passing a struct members
	outputData(st.id,st.name,st.contact);
	system("pause");
}