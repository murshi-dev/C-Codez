#include<iostream>
#include<string>
#include<fstream>
using namespace std;
//program to read from data.txt and display in console
//create struct
struct Person
{
	//create members
	string code;
	string name;
	int contact;
	double salary;
};
void main()
{
	//open file 
	ifstream infile("newinfo.txt");
	//create variables to access files
	string code,name;
	int contact;
	double salary;
	double average=0.0;

	//create variable(array of struct) for struct person
	Person records[10];
	//check if file is open
	if(infile.fail())
	{
		cout<<"error opening file"<<endl;
		exit(1);
	}
	//if file is open, proceed to reading
	//use loop to read record by record
	int i=0;
	while(!infile.eof())//read until eof is reached
	{
		//read
		infile>>code>>name>>contact>>salary;
		//now assign these values to array of structures
		records[i].code=code;
		records[i].name=name;
		records[i].contact=contact;
		records[i].salary=salary;
		i++;
	}
	//display array of structures in console
	for(int j=0;j<i;j++)
	{
		cout<<"Code: "<<records[j].code<<endl;
		cout<<"Name: "<<records[j].name<<endl;
		cout<<"Contact: "<<records[j].contact<<endl;
		cout<<"Salary: "<<records[j].salary<<endl;
		//calculate average and display
		average+=(records[j].salary)/i;

	}
	cout<<"Average Salary is: "<<average<<endl;
	system("pause");
}