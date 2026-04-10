#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	//initialise 2d array
	//5 students, 2 subjects each
	int marks[5][2] = { 0 };
	
	//input marks using loop
	for (int rcounter = 0; rcounter <= 4; rcounter++)
	{
		cout << "Enter Student " << rcounter + 1 << "marks: " << endl;
		for (int ccounter = 0; ccounter <= 1; ccounter++)
		{
			cout << "Enter Subject " << ccounter + 1 << ": ";
			cin >> marks[rcounter][ccounter];
		}
	}

	//display the student and their marks using loop
	for (int rcounter = 0; rcounter <= 4; rcounter++)
	{
		cout << "Student " << rcounter + 1 << ": " << endl;
		for (int ccounter = 0; ccounter <= 1; ccounter++)
		{
			cout << "Subject " << ccounter + 1 << ": ";
			cout << marks[rcounter][ccounter]<<"\t";
		}
		cout << endl;
	}

	//save the marks in a text file
	//open a file
	//append -- dont rewrite the file --instead add new data to the 
	//the existing file
	ofstream file("studentmarks.txt",ios::app);
	
	//save data --use loop
	for (int rcounter = 0; rcounter <= 4; rcounter++)
	{
		for (int ccounter = 0; ccounter <= 1; ccounter++)
		{
			file << marks[rcounter][ccounter] << " ";
		}
		file << endl;
	}
	cout << "data saved to text file" << endl;
	return 0;
}