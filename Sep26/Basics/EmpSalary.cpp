#include <iostream>
using namespace std;
int main()
{
    //declare and initialise the variables
    double basicSalary = 0.0, allowance = 0.0,
        deduction = 0.0, finalSalary = 0.0;

    //prompt and input
    cout << "Input the basic salary: ";
    cin >> basicSalary;

    cout << "Input the allowance: ";
    cin >> allowance;

    cout << "Input the deduction: ";
    cin >> deduction;

    //calculation
    finalSalary = basicSalary + allowance - deduction;

    //output
    cout << "Final Salary: RM " << finalSalary;

    return 0;
}