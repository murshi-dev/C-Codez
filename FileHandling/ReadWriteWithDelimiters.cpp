#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void main()
{
	//write to a file
	ofstream out("state.txt");
	out<<"new"<<" "<<"jersey"<<"#"<<"new"<<" "<<"york"<<"#"<<"new"<<" "<<"orleans"<<endl;
	out.close();
	cout<<"data written"<<endl;

	//read from file
	ifstream in("state.txt");
	string city;
	//use loop to read from file
	while(!in.eof())
	{
		//use getline method to read with delimiters in a file
		//takes three parameters--input file variable, actual variable and delimiter symbol
		getline(in,city,'#');
		cout<<city<<endl;
	}
	cout<<"cities displayed";
	system("pause");
}
