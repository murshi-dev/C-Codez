/*Assume there are 5 students in class and each students takes 3 subjects. Create an array to input the marks of 3 subjects for 5 students. After the entry completed display the entered marks. calculate and display the average marks for each student */
#include<iostream>
using namespace std;
int main()
{
	//create and initialise 2d array
	double grades[5][3] = { 0,0 };

	//input the array using for loop
	for (int student = 0; student <= 4; student++)
	{
		cout << "Student" << student + 1 << ": " << endl;
		for (int subject = 0; subject <= 2; subject++)
		{
			cout << "Input Subject " << subject + 1 << " marks: ";
			cin >> grades[student][subject];
		}
	}

	//output the array using for loop
	for (int student = 0; student <= 4; student++)
	{
		cout << "Student " << student + 1 << ":\n";
		for (int subject = 0; subject <= 2; subject++)
		{
			cout << "Subject " << subject + 1 << " marks: ";
			cout << grades[student][subject] << "\t";
		}
		cout << endl;
	}

	//calculate the average of each student's marks
	for (int student = 0; student <= 4; student++)
	{
		double sum = 0;
		for (int subject = 0; subject <= 2; subject++)
		{
			sum += grades[student][subject];
		}
		double average = sum / 3;
		cout << "Student " << student + 1 << " average is: " << average<<endl;
	}

}
