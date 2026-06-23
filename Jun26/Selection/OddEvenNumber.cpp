#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    if (number < 0)
    {
        cout << "Enter positive number only.";
    }
    else if (number % 2 == 0)
    {
        cout << "Even number";
    }
    else
    {
        cout << "Odd number";
    }

    return 0;
}