//repetition structure 'while'
//display numbers from 1 to 10, display square and cube of n
#include<iostream>
using namespace std;
int main()
{
	cout << "Displays 1 to 10" << endl;
	//1.set first/initial value
	int n = 1;
	//2.check the condition using 'while'
	while (n <= 10)
	{
		//display the n value
		cout << n << " "<< n * n <<" "<<n * n * n<<endl;
		//3.increment the n value
		//n = n + 1;
		n++;//increment operator
	}
//display numbers from 10 to 1
	cout << "Displays 10 to 1" << endl;
	//1.initial value
	int m = 10;
	while (m >= 1)//2.check condition
	{
		cout << m << endl;
		//m = m - 1;//3.decrement 'm' value
		m--;//decrement operator
	}
	//display numbers from 1, 3, 5, 7, 9,.......19
	cout << "Displays 1, 3, 5, 7, 9,.......19" << endl;
	//1.initial value
	int p = 1;
	while (p<20)//2.check condition
	{
		cout << p << endl;
		p = p + 2;//3.increment p value by 2
	}

	return 0;
}
