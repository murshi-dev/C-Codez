#include<iostream>
using namespace std;

double claculateCharges(double hours);

void main()
{
	char input = 'Y';
	double parkingHours=0, toPay=0;
	while (input == 'Y')
	{
		cout << "Enter the parking hours: ";
		cin >> parkingHours;
		toPay = claculateCharges(parkingHours);
		cout << "RM "<<toPay << endl;
		cout << "Continue?(Y/N): ";
		cin >> input;
	}
	
}
double claculateCharges(double hours)
{
	double h = hours;
	double charge = 2.0;
	if (h < 24)
	{
		if (h <= 3)
		{
			return charge;
		}
		else
		{
			while (h > 3)
			{
				charge += 0.5;
				h--;
				
			}
			return charge;
		}
	
	}
	else
	{
		cout << "No car parks for longer than 24 hours at a time.";
	}
}
