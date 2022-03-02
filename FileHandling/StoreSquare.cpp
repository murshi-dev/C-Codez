//store number and its square
#include<iostream>
#include<fstream>
using namespace std;
void main()
{
	ofstream out;
	out.open("square.txt");
	//check if file open
	if(out.is_open())
	{
		//initialise 10 to 25
		for(int x=10;x<=25;x++)
		{
			//writes the value of x and its square (x*x)
			out<<x<<"#"<<(x*x)<<endl;
		}//close for
		out.close();
	}//close if
	system("pause");
}
