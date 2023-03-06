//practice 3
#include<iostream>
using namespace std;
int main()
{
	double temperature = 0.0;
	const double MAX_TEMP = 102.5;
	cout << "Enter substance temperature: ";
	cin >> temperature;
	while (temperature > MAX_TEMP)
	{
		cout << "Temperature is too high!"<<endl;
		cout << "Turn the thermostat down ansd wait" << endl;
		cout << "Wait five minutes. Take the temperature!" << endl;
		cout << "again and enter it here!" << endl;
		cin >> temperature;
	}
	cout << "The temperature is acceptable" << endl;
	cout << "Check again in 15 minutes" << endl;
	return 0;
}