//3
#include<iostream>
using namespace std;
struct studentType
{
	int SID;
	string SName;
	double testScores[3];
	double programmingScores[2];
	double GPA;
	char coursegrade;
};
//function to calculate the average
double calculateAverage(double scores[], int size)
{
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum = sum + scores[i];
	}
	return (sum / size);
}
//function to calculate course grade
char calculateGrade(double averageScore)
{
	if (averageScore >= 70)
		return 'A';
	else if (averageScore >= 50)
		return 'B';
	else
		return 'F';
}
//function to input student data
void readStudentData(studentType& student)
{
	cout << "Enter Student ID: ";
	cin >> student.SID;
	cout << "Enter Student Name: ";
	cin >> student.SName;
	cout << "Enter the 3 test scores: \n";
	for (int i = 0; i < 3; i++)
	{
		cout << "Test " << i + 1 << ": ";
		cin >> student.testScores[i];
	}
	cout << "Enter the 2 programming scores: \n";
	for (int i = 0; i < 2; i++)
	{
		cout << "Programming " << i + 1 << ": ";
		cin >> student.programmingScores[i];
	}
	//calculate the average grade
	double testAverage = calculateAverage(student.testScores, 3);
	double programmingAverage = calculateAverage(student.programmingScores, 2);
	student.GPA = (testAverage + programmingAverage) / 2;
	student.coursegrade = calculateGrade(student.GPA);
}
//function to display student data and results
void displayStudentData(studentType& student)
{
	cout << "Student ID: " << student.SID << endl;
	cout << "Student Name: " << student.SName << endl;
	cout << "Test Scores\n";
	for (int i = 0; i < 3; i++)
	{
		cout << "Test " << i + 1 <<": " << student.testScores[i] << endl;
	}
	cout << "Programming Scores\n";
	for (int i = 0; i < 2; i++)
	{
		cout << "Programming " << i + 1 <<": " << student.programmingScores[i] << endl;
	}
	cout << "Course GPA: " << student.GPA << endl;
	cout << "Course Grade: " << student.coursegrade << endl;
}
int main()
{
	studentType student;
	readStudentData(student);
	displayStudentData(student);
	return 0;
}