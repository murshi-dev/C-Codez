//store alphabets
#include<iostream>
#include<fstream>
using namespace std;
void main()
{
	char letter=' ';
	ofstream out;
	out.open("alpha.txt");
	//check if file open
	if(out.is_open())
	{
		//get 26 alphabets
		for(char x='A'; x <='Z';x++)
		{
			//writes A to Z in text file
			out<<x<<endl;
		
		}//close for
		out.close();
	}//close if
	system("pause");
}
