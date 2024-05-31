/*Calculate the average temperature from the 
maximum and minimum temperature entered. */
#include<iostream>
using namespace std;
int main()
{
	double maxTemp = 0.0, minTemp = 0.0, avgTemp = 0.0;
	cout << "Enter the maximum temperature: ";
	cin >> maxTemp;
	cout << "Enter the minimum temperature: ";
	cin >> minTemp;
	avgTemp = (maxTemp + minTemp) / 2;
	cout << "Average of " << maxTemp << " and " << minTemp 
						<< " is " << avgTemp;
	return 0;
}