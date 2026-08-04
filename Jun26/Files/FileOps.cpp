//file operations
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	//step 1 -- create file objects
	ofstream outFile;//object to write data to a text file

	//step 2 -- open/create a file for writing data -- open()
	outFile.open("student.txt", ios::app);

	string name= " ";
	int marks = 0;
	int numberOfStudents = 0;
	cout << "How many students?";
	cin >> numberOfStudents;

	//step 3 --write the data 
	if (outFile.is_open())//check if the file is open for writing
	{
		for (int i = 0; i < numberOfStudents; i++)
		{
			//prompt and input user name
			cout << "Enter the student name: ";
			cin >> name;
			cout << "Enter the student marks: ";
			cin >> marks;
			//write the name, marks to text file using 'outFile'
			outFile << name << endl;
			outFile << marks << endl;
		}
		cout << "Data written to text file" << endl;
	}

	//step 4 --close the file --close()
	outFile.close();

	//step 5 -- create file objects
	ifstream inFile;//object to read data from a text file

	//step 6 --open file for reading
	inFile.open("student.txt");

	//step 7 --read the data 
	if (inFile.is_open())//check if the file is open for reading
	{
		string name;//read data from file --store in this variable
		//use a loop to read until the end of text file is reached
		while (inFile >> name >> marks)
		{
			cout << name << endl;
			cout << marks << endl;		
		}
	}

	//step 8--close the file --close()
	inFile.close();

	return 0;
}