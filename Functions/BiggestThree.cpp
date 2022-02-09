/*Program using functions to determine the largest of three numbers.
*/
#include<iostream>
using namespace std;
int getInput1(int n1);
int getInput2(int n2);
int getInput3(int n3);
int findBiggest(int n1, int n2, int n3);
void displayResult(int b);


int main()
{
	int n1 = 0, n2 = 0, n3 = 0, biggest = 0;
	n1 = getInput1(n1);
	n2 = getInput2(n2);
	n3 = getInput3(n3);
	biggest = findBiggest(n1, n2, n3);
	displayResult(biggest);
	system("pause>0");
}
int getInput1(int n1) {
	cout << "Enter num1: ";
	cin >> n1;
	return n1;
}
int getInput2(int n2) {
	cout << "Enter num2: ";
	cin >> n2;
	return n2;
}
int getInput3(int n3) {
	cout << "Enter num3: ";
	cin >> n3;
	return n3;
}
int findBiggest(int n1, int n2, int n3)
{
	int b = 0;
	if (n1 > n2 && n1 > n3)
		b = n1;
	else if (n2 > n1 && n2 > n3)
		b = n2;
	else
		b = n3;
	return b;
}
void displayResult(int b)
{
	cout << "Biggest is: " << b;
}

