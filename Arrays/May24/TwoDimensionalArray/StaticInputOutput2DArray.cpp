#include<iostream>
using namespace std;
int main()
{
	//create and initialise 2d array
	double sales[3][2] = { {20.0,31.5},{55.2,13.4},{11.2,12.1} };
	
	//display the 2d array 
	cout << "Row 1:\t";
	cout << sales[0][0]<<"\t"<<sales[0][1]<<endl;//20.0	31.5
	cout << "Row 2:\t";
	cout << sales[1][0] << "\t" << sales[1][1]<<endl;//55.2 13.4
	cout << "Row 3:\t";
	cout << sales[2][0] << "\t" << sales[2][1]<<endl;//11.2 12.1 

	//display the 2d array for char data type
	char initials[2][3] = { {'A','B','C'},{'D','E','F'}};
	cout << "Row 1:\t";
	cout << initials[0][0] << "\t" << initials[0][1] << "\t" << initials[0][2] << endl;
	cout << "Row 2:\t";
	cout << initials[1][0] << "\t" << initials[1][1] << "\t" << initials[1][2] << endl;
}
