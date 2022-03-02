//Read and Write Files by user input
#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>//for formatting output
using namespace std;
void main()
{
	//create ofstream file
	ofstream output("city.txt", ios::app);//append file-old data is not deleted
	//create variables to accept user input
	string city;
	//prompt user input
	cout<<"Enter a city name(Ctlr+Z exits input)"<<endl;
	//accept input in loop as long as user enters them
	while(cin>>city)
	{
		//as user enters values simultaneously place them in the text file
		output<<city<<endl;
		cout<<"Enter a city name: ";
	}//close while
	cout<<"File created and data added"<<endl;
	//read from city.txt and display in console
	ifstream input("city.txt",ios::in);
	//check if file exists
	if(!input)
	{
		cout<<"File does not exist";
		exit(1);
	}//end if
	//display heading 
	cout<<setw(10)<<"City"<<endl;
	//read from text file in loop
	while(getline(input,city))//read each line 
	{
		//read each line
		input>>city;
		//display in console
		cout<<setw(10)<<city<<endl;
	}//end while
	system("pause");
}
