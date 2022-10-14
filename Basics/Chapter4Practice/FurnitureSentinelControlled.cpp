/*Using switch structure write a program for a furniture company. Ask the user to choose P for pine, O for oak, 
or M for mahogany. Show the price of a table manufactured with the chosen wood. Pine tables cost RM100, 
oak tables cost RM 225, and mahogany tables cost RM 310.
Use sentinel controlled repetition structure such that the program continues or stops based on the users choice.
*/
#include<iostream>
using namespace std;
int main()
{
	char code;
	char choice = 'Y';
	while (choice == 'Y')
	{
		cout << "Enter the code for furniture: ";
		cin >> code;
		switch (code)
		{
		case 'P':
			cout << "Price for Pine is RM 100" << endl;;
			break;
		case 'M':
			cout << "Price for Mahogany is RM 310"<<endl;
			break;
		case 'O':
			cout << "Price for Oak is RM 225"<<endl;
			break;
		default:
			cout << "Enter P M O charecters only";
			break;
		}//close switch
		cout << "Continue(Y/N): ";
		cin >> choice;
	}
	return 0;
}