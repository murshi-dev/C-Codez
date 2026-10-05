#include <iostream>
using namespace std;
int main() {
    double attendance=0.0;
    char feePaid=' ';
    cout << "Enter attendance percentage: ";
    cin >> attendance;

    if (attendance < 75) {
        cout << "Not allowed to sit for the exam";
    }
    else 
    {
        cout << "Has the examination fee been paid? ";
        cin >> feePaid;
        if (feePaid == 'y' || feePaid == 'Y') 
            cout << "Student can sit for the exam";
        else 
            cout << "Please pay the examination fee";
    }
    return 0;
}

