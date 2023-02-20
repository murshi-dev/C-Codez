//Write a C++ code to display the age based on the year of birth entered
#include<iostream>
using namespace std;
int main()
{
	int yearOfBirth = 0, age = 0;
	cout << "Enter the year of birth: ";
	cin >> yearOfBirth;
	age = 2023 - yearOfBirth;
	cout << "Age is: " << age;
	return 0;
}