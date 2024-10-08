/*	Calculate and display the area of circle using the formula area =πr^2.  
Declare π as constant. Using while loop repeat the code until user wishes to exit the code.*/
#include<iostream>
using namespace std;
int main() {
    const double PI = 3.14159;
    double radius, area;
    char choice = 'y';

    while (choice == 'y' || choice == 'Y') {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        while (radius <= 0)
        {
            cout << "Invalid Input. Enter the radius again: ";
            cin >> radius;
        }

        area = PI * radius * radius;
        cout << "The area of the circle is: " << area<<"\n";

        cout << "Continue(Y/N)?: ";
        cin >> choice;
    }
    return 0;
}
