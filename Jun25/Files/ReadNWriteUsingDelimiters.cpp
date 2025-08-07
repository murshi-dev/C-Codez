#include<iostream>
#include<fstream>
#include<string>//to work with getline
using namespace std;
int main()
{
	ofstream out("states.txt");
	out << "new" << " " << "jersey" << "#" 
		<< "new" << " " << "york" << "#" 
		<< "new" << " " << "orleans" << endl;

	out.close();
	cout << "data written" << endl;

	ifstream in("states.txt");
	string city;
	while (!in.eof())
	{
		getline(in, city, '#');
		cout << city << endl;
	}

	return 0;
}