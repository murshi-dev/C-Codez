//create a text file and add some text to it
#include<iostream>
#include<string>//to read string data type
//fstream handles input output operations of a FILE
#include<fstream>
using namespace std;
void main()
{
	//create a variable for output file
	ofstream output;
	//create a file with the name of the file to be created
	output.open("scores.txt");

	//write some text to the scores.txt file
	output<<"Jane"<<""<<"T"<<""<<"Doe"<<""<<78<<endl;
	output<<"John"<<""<<"A"<<""<<"Amy"<<""<<65<<endl;

	//now close the file 
	output.close();

	//display confirmation message to user
	cout<<"file created and data written"<<endl;

	//practice 2- read from the scores.txt file and display in the console
	//open the file in ifstream mode to read from the file
	ifstream input;
	input.open("scores.txt");
	//declare variables to read the info from text file 
	string firstname;
	char initial;
	string lastname;
	int score;
	//start reading from file
	input>>firstname>>initial>>lastname>>score;
	cout<<firstname<<""<<initial<<""<<lastname<<""<<score<<endl;

	input>>firstname>>initial>>lastname>>score;
	cout<<firstname<<""<<initial<<""<<lastname<<""<<score<<endl;
	system("pause");
}
