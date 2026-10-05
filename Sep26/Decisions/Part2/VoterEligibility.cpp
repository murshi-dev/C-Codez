#include <iostream>
using namespace std;
int main() {
    int age=0;
    char status=' ';
        cout << "Enter age: ";
    cin >> age;
    if (age < 18) {
        cout << "Applicant is too young to vote";
    }
    else {
        cout << "Are you registered?(Y/N): ";
        cin >> status;
        if (status == 'Y' || status == 'y')
            cout << "Applicant can vote";
        else 
            cout << "Applicant must register to vote";
         }
    return 0;
}

