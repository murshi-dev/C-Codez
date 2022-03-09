//Practice 9
//menu driven program
//function-->enter album info(album name and artist name) as input
//store it in "albums.txt"
//function-->display info from text file to the console
#include <iostream>
#include<fstream>
#include<string> //for getline
using namespace std;
//prototype
void saveAlbum();
void displayAlbum();
void mainn()
{
	int menuOption=0;
	do{
		//display info in console
		cout<<"1. Enter Album Info"<<endl;
		cout<<"2. Display Album Info"<<endl;
		cout<<"3. Exit"<<endl;
		cout<<"Enter menu option"<<endl;
		cin>>menuOption;
		//to skip the additional charecters left in the stream
		//use the ignore function
		//100->number of chars to ignore
		cin.ignore(100,'\n');

		if(menuOption==1)
			saveAlbum();
		else if(menuOption==2)
			displayAlbum();
	}while(menuOption!=3);
	system("pause");
}//end main
void saveAlbum()
{
	//write codes to store album name and artist name
	//obtained as user input
	//and store in 'albums.txt' file
	//declare local variables to accept album name and artist name
	string albumName="";
	string artistName="";

	//create file
	ofstream outfile;
	//file opened in append mode
	//existinf data will not be deleted when program run again
	outfile.open("albums.txt",ios::app);
	//check if file is open
	if(outfile.is_open())
	{
		//get the album name
		cout<<"Enter Album Name: (-1 to stop)";
		//use getline to accept input with blankspaces
		getline(cin,albumName);
		//use while loop to check input
		while(albumName!="-1")
		{
			//get artist name
			cout<<"Enter Artist Name:";
			getline(cin,artistName);
			//now input is over
			//write these info into file
			outfile<<albumName<<'#'<<artistName<<endl;

			//ask for next input
			//get the album name
			cout<<"Enter Album Name: (-1 to stop)";
			getline(cin,albumName);
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
void displayAlbum()
{
	//declare variables
	string albumName="";
	string artistName="";

	//create file object and open the file in input mode
	ifstream infile;
	infile.open("albums.txt",ios::in);

	//check if file is open
	if(infile.is_open())
	{
		//display info from file
		//read a record
		getline(infile,albumName,'#');
		getline(infile,artistName);
		//read until end of file is reached
		while(!infile.eof())
		{
			cout<<albumName<<","<<artistName<<endl;
			//read another record
			getline(infile,albumName,'#');
			getline(infile,artistName);
		}//end while
		//close the file
		infile.close();
	}//end if
	else
	{
		cout<<"cannot open file";
	}//end else
}//end function