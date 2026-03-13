//create a text file
//add some text to the file
#include<iostream>
#include<fstream>//to work with text files
using namespace std;
int main()
{
	//create a variable for the output stream
	ofstream output;
	
	//using this variable 'output', create a text file
	output.open("scores.txt");

	//write some data to the text file 'scores'
	output << "Jane" << " " << "T" << " " << "Doe" << " " << 78 << endl;
	output << "Kate" << " " << "A" << " " << "Adam" << " " << 65 << endl;

	//close the file --after writing data
	output.close();

	//confirmation message after writing data to text file
	cout << "Data written to text file"<<endl;

	//read from the text file --and display the data in the console 

	//create a variable for the input stream
	ifstream input;

	//open the file for reading --read mode 
	input.open("scores.txt");

	//declare variables for the content from the text file
	string firstname, lastname;
	char initial;
	int score;

	//read from the text file
	input >> firstname >> initial >> lastname >> score;

	//display this in console
	cout << firstname << initial << lastname << score << endl;

	//for the second record
	// read from the text file
	input >> firstname >> initial >> lastname >> score;

	//display this in console
	cout << firstname << initial << lastname << score << endl;

	return 0;
}