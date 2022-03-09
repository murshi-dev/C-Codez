//Practice 10
//menu driven program
//function-->enter sales 
//store it in "sales.txt"
//function-->display info from text file to the console
//and display the total sales
#include <iostream>
#include<fstream>
#include<string> //for getline
using namespace std;
//prototype
void saveSales();
void displaySales();
void main()
{
	int menuOption=0;
	do{
		//display info in console
		cout<<"1. Enter Sales Info"<<endl;
		cout<<"2. Display Sales Info"<<endl;
		cout<<"3. Exit"<<endl;
		cout<<"Enter menu option"<<endl;
		cin>>menuOption;
		cin.ignore(100,'\n');

		if(menuOption==1)
			saveSales();
		else if(menuOption==2)
			displaySales();
	}while(menuOption!=3);
	system("pause");
}//end main
void saveSales()
{
	string name="";
	int sales=0;
	//create file
	ofstream outfile;
	//file opened in append mode
	//existing data will not be deleted when program run again
	outfile.open("sales.txt",ios::app);
	//check if file is open
	if(outfile.is_open())
	{
		//get the album name
		cout<<"Enter Salesperson Name: (-1 to stop)";
		//use getline to accept input with blankspaces
		getline(cin,name);
		//use while loop to check input
		while(name!="-1")
		{
			cout<<"Enter Sales Amount:";
			cin>>sales;
			cin.ignore();
			//now input is over
			//write these info into file
			outfile<<name<<'#'<<sales<<endl;
			//ask for next input
			cout<<"Enter Salesperson Name: (-1 to stop)";
			getline(cin,name);
		}//end while
		//close file
		outfile.close();
	}//close if
	else
	{
		cout<<"file cannot be opened"<<endl;
	}//close else
}//close function

//function to display album info
void displaySales()
{
	//declare variables
	string name="";
	int sales=0;
	//to display total sales
	int total=0;

	//create file object and open the file in input mode
	ifstream infile;
	infile.open("sales.txt",ios::in);

	//check if file is open
	if(infile.is_open())
	{
		//display info from file
		//read a record
		getline(infile,name,'#');
		infile>>sales;
		infile.ignore();
		//read until end of file is reached
		while(!infile.eof())
		{
			total+=sales;//accumulate each sales value to total
			//total=total+sales;
			cout<<name<<","<<sales<<endl;
			//read another record
			getline(infile,name,'#');
			infile>>sales;
		}//end while
		//close the file
		infile.close();
		//display total sales after cloe file
		cout<<"Total sales"<<total<<endl;
	}//end if
	else
	{
		cout<<"cannot open file";
	}//end else
}//end function