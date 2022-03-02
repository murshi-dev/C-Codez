//Read and Write Files by user input
#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>//for formatting output
using namespace std;
void main()
{
	//create ofstream file
	ofstream output("clients.txt", ios::out);
	//create variables to accept user input
	int accountnum;
	string name;
	double balance;
	//prompt user input
	cout<<"Enter account#, name and balance (e exits input)"<<endl;
	cout<<"Enter info:";
	//accept input in loop as long as user enters them
	while(cin>>accountnum>>name>>balance)
	{
		//as user enters values simultaneously place them in the text file
		output<<accountnum<<" "<<name<<" "<<balance<<endl;
		cout<<"Enter info:";
	}//close while
	cout<<"File created and data added"<<endl;

	//read from clients.txt and display in console
	ifstream input("clients.txt",ios::in);
	//check if file exists
	if(!input)
	{
		cout<<"File does not exist";
		exit(1);
	}//end if
	//display heading 
	cout<<setw(10)<<"Account#"<<setw(15)<<"Name"<<setw(20)<<"Balance"<<endl;
	//read from text file in loop
	while(!input.eof())//read as long end of file is reached
	{
		//read each line
		input>>accountnum>>name>>balance;
		//display in console
		cout<<setw(10)<<accountnum<<setw(15)<<name<<setw(20)<<balance<<endl;
	}//end while
	system("pause");
}
