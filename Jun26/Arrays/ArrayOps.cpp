//arrays concepts
#include<iostream>
using namespace std;
int main()
{
	//declare and initialise an array
	int studentMarks[5] = { 0 };
	//prompt and input marks using LOOP
	for (int studentCounter = 0; studentCounter < 5; studentCounter++)
	{
		cout << "Enter student " << studentCounter + 1 << "marks: ";
		cin >> studentMarks[studentCounter];
	}

	//display each marks using LOOP
	for (int studentCounter = 0; studentCounter < 5; studentCounter++)
	{
		cout << "Student "<<studentCounter + 1 <<":"<<
			studentMarks[studentCounter] << endl;
	}

	//add all the marks --display the total, average
	int total = 0;
	int average = 0;
	for (int studentCounter = 0; studentCounter < 5; studentCounter++)
	{
		total = total + studentMarks[studentCounter];
	}
	cout << "Total marks: " << total << endl;
	average = total / 5;
	cout << "Average marks: " << average << endl;

	//find and display the highest marks, lowest marks
	int highest = studentMarks[0];//set the first element as the highest
	int lowest  = studentMarks[0];//set the first element as the lowest

	for (int studentCounter = 0; studentCounter < 5; studentCounter++)
	{
		//compare every element in the array with the highest value
		if (studentMarks[studentCounter] > highest)
			//if higher than the highest --replace highest with current marks
			highest = studentMarks[studentCounter];

		//compare every element in the array with the lowest value
		if (studentMarks[studentCounter] < lowest)
			//if lower than the lowest --replace lowest with current marks
			lowest = studentMarks[studentCounter];
	}
	cout << "Highest marks: " << highest << endl;
	cout << "Lowest  marks: " << lowest << endl;
	return 0;
}