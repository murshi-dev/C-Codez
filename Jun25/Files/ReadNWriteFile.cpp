//Write to a text file from the console input
//Read from the text file and display in the console
#include<iostream>
#include<fstream>//to work with file related ops
using namespace std;
int main()
{
	ofstream output;//craete a variable for output file
	//using this outout var open a text file
	output.open("scores.txt");
	//fill/write data in the text file
	output << "Jane " << "T " << "Doe " << 78 << endl;
	output << "Amy " << "K " << "John " << 85 << endl;
	//close the file
	output.close();
	//display confirmation message in console
	cout << "File created and data is written" << endl;

	//Read data from scores.txt and display in the console
	//open the file for reading --ifstream
	ifstream input;
	//open the file
	input.open("scores.txt");

	//declare varibles to hold the values from the file
	string fname, lname;
	char initial;
	int score;

	//start reading from the file
	input >> fname >> initial >> lname >> score;
	//display in console
	cout<< fname << " " << initial <<" " << lname << " " << score << endl;

	//start reading from the file
	input >> fname >> initial >> lname >> score;
	//display in console
	cout << fname << " " << initial << " " << lname << " " << score << endl;

	return 0;
}