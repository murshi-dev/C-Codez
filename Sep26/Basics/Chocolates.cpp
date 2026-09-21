#include <iostream>
using namespace std;
int main()
{
    //declare and initialise the variables
    int chocolates = 0, students = 0;
    int chocolatesEach = 0, chocolatesRemaining = 0;

    //prompt and input
    cout << "Input the number of chocolates: ";
    cin >> chocolates;

    cout << "Input the number of students: ";
    cin >> students;

    //calculation
    chocolatesEach = chocolates / students;
    chocolatesRemaining = chocolates % students;

    //output
    cout << "Chocolates Received by Each Student: "
        << chocolatesEach << endl;

    cout << "Chocolates Remaining: "
        << chocolatesRemaining;

    return 0;
}