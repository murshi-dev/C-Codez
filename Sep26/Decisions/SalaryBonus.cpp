#include <iostream>
using namespace std;

int main()
{
    double salary, bonus, finalSalary;

    cout << "Enter employee salary: RM";
    cin >> salary;

    if (salary >= 3000)
    {
        bonus = salary * 0.10;
    }
    else
    {
        bonus = salary * 0.05;
    }

    finalSalary = salary + bonus;

    cout << "Bonus: RM" << bonus << endl;
    cout << "Final Salary: RM" << finalSalary << endl;

    return 0;
}

