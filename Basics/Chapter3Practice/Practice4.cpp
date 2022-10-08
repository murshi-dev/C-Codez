/*4.	Write a program to display the day of a week. 
If the user key in 1 display Monday, 2 display Tuesday, 3 display Wednesday and so on. 
Display a message ‘invalid input’ if the user key in number which is not in the range on 1 to 7.*/


#include <iostream>
using namespace std;
int main()
{
	int option=0;

	cout << "Enter the number to display the day:" << endl;
	cin >> option;
switch(option){
    case 1:
    cout<<"Monday";
    break;
    case 2:
    cout<<"Tuesday";
    break;
    case 3:
    cout<<"Wednesday";
    break;
    case 4:
    cout<<"Thursday";
    break;
    case 5:
    cout<<"Friday";
    break;
    case 6:
    cout<<"Saturday";
    break;
    case 7:
    cout<<"Sunday";
    break;
    default:
    cout<<"Enter between 1 to 7";
    break;
}
	return 0;
}