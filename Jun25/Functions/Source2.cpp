//extra practice -- function
#include<iostream>
using namespace std;
double calculateSalary(double wage, int hours);
int main()
{
	double wage = 0.0, totalPayrol = 0.0;
	int hours = 0;
	while (true)
	{
		cout << "Enter the hourly wage(-1 to stop):";
		cin >> wage;
		if (wage == -1)
			break;
		cout << "Enter the number of hours worked: ";
		cin >> hours;
		double salary = calculateSalary(wage, hours);
		cout << "Salary: " << salary << endl;
		//totalPayrol = totalPayrol + salary;
		totalPayrol += salary;
	}
	cout << "Total Payroll Amount: " << totalPayrol << endl;
	return 0;
}
double calculateSalary(double wage, int hours)
{
	return (wage * hours);
}