//read ans write text file using functions and struct
#include<fstream>
#include<iomanip>
#include<iostream>
#include<string>
using namespace std;

struct person
{
	string fname,lname;
	int age;
};

//function to read from file
//first parameter-->for file 
//second parameter->array of struct
//third parameter-->size of array struct
void readData(ifstream& in, person p[],int size)
{
	int i=0;
	while(i<size)
	{
		in>>p[i].fname>>p[i].lname>>p[i].age;
		i++;
	}
}

//function to print in console
void print(const person p[],int size)
{
	cout<<"FName"<<setw(10)<<"LName"<<setw(10)<<"Age"<<endl;
	//use for loop to display data one by one
	for(int i=0;i<size;i++)
		cout<<p[i].fname<<setw(10)<<p[i].lname<<setw(10)<<p[i].age<<endl;
}

//function to write data into another text file from the array of structs
void writeData(ofstream& out, person p[],int size)
{
	//use loop to write data into text file one by one
	int i=0;
	while(i<size)
	{
		out<<p[i].fname<<"#"<<p[i].lname<<"#"<<p[i].age<<endl;
		i++;
	}

}

void main()
{
	//create a ifstream variable and open input.txt
	ifstream in;
	in.open("input.txt");
	//create a ofstream variable and open output.txt
	ofstream out;
	out.open("output.txt");

	//check if file exists
	if(in.fail())
	{
		cout<<"file does not exist";
		exit(0);
	}
	if(out.fail())
	{
		cout<<"file does not exist";
		exit(0);
	}
		
	//create a struct variable
	person p[5];//array of structs
	//call the read function
	readData(in,p,5);//3 parameters
	//call print function
	print(p,5);
	//call the write function
	writeData(out,p,5);
	cout<<"Data has been written to output.txt"<<endl;
	//close file
	out.close();
	in.close();

	system("pause");
}