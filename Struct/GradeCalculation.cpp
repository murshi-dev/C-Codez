#include<iostream>
#include<string>
using namespace std;
//create struct
struct studentType
{
	//declare members
	//user input
	string firstName;
	string lastName;
	int testScore;
	int programmingScore;
	//calculate and display coursegrade
	char courseGrade;
};

void main()
{
//create variable to access struct
studentType newStudent;
cout<<"Enter first name: "<<endl;
cin>>newStudent.firstName;
cout<<"Enter last name: "<<endl;
cin>>newStudent.lastName;
cout<<"Enter testScore: "<<endl;
cin>>newStudent.testScore;
cout<<"Enter programmingScore: "<<endl;
cin>>newStudent.programmingScore;

//calculate score and then course grade
int score=(newStudent.testScore+newStudent.programmingScore)/2;

if(score>=90)
	newStudent.courseGrade='A';
else if(score>=80)
	newStudent.courseGrade='B';
else if(score>=70)
	newStudent.courseGrade='C';
else if(score>=60)
	newStudent.courseGrade='D';
else
	newStudent.courseGrade='F';

//display result
cout<<"Name:"<<newStudent.firstName+newStudent.lastName<<endl;
cout<<"Course Grade: "<<newStudent.courseGrade<<endl;

system("pause");
}