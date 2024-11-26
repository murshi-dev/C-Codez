//read and write using user input through console
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	//create ofstream
	ofstream output("clients.txt");
	//create variable sto accept user input
	int accountnum;
	string name;
	double balance;
	//prompt user input (loop)
	cout << "Enter account number, name and balance: (e exits output): " << endl;
	while (cin >> accountnum >> name >> balance)
	{
		//as user enters value, place them in the text file
		output << accountnum << " " << name << " " << balance << endl;
		cout << "Enter account number, name and balance: (e exits output): " << endl;
	}
	cout << "File created and data added" << endl;

	return 0;
}