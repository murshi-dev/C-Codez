/*Henry belongs to a book club. Last year, he bought all his 
books from the club at RM8 per book. 
He wants to know how much he saved last year by buying the books 
through the club rather than through a book store that charges RM12 per book. 
The output is the savings. The input is the number of books purchased, 
the club’s book price, and the store’s book price. 
Write a C++ code to calculate and display the savings.
*/
#include<iostream>
using namespace std;
void main()
{
	int numberOfBooksPurchased = 0, savings=0;
	const int CLUBPRICE = 15;
	const int STOREPRICE = 20;

	cout << "Enter the number of books purchased" << endl;
	cin >> numberOfBooksPurchased;

	savings = (numberOfBooksPurchased * STOREPRICE) - (numberOfBooksPurchased * CLUBPRICE);

	cout << "Total Savings is " << savings << endl;

	system("pause");
}