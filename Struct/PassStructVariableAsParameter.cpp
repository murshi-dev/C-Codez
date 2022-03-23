//pass struct variable as parameter 
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
//pass struct variable as parameter
void outputData(student s)//s is the struct variable
{
	//display all info using the 's' variable
	cout<<"ID: "<<s.id<<endl;
	cout<<"Name: "<<s.name<<endl;
	cout<<"Contact: "<<s.contact<<endl;
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
	//function call outputData by passing a struct variable
	outputData(st);
	system("pause");
}