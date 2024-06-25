//search for an element in the array
#include<iostream>
using namespace std;
int main()
{
	const int size = 5;
	string names[size] = { "Jane","Kate","Amy","Tan","Joe" };

	//output the array
	for (int counter = 0; counter <= 4; counter++)
	{
		cout << names[counter] << endl;
	}
	//prompt a searchName
	string searchName = " ";
	bool found = false;
	cout << "Enter the name to be searched: ";
	cin >> searchName;
	for (int counter = 0; counter <= 4; counter++)
	{
		//compare each element in the array with the searchName -use if
		if (names[counter] == searchName)
		{
			//name is found display the return true 
			found = true;
			cout << searchName << " is FOUND" << endl;
			break;
		}
	}
	if (!found)
	{
		cout << searchName << " is Not FOUND" << endl;
	}
	return 0;
}


