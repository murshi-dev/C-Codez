/*	Display all the even numbers from 2 to 100 inclusive.*/
#include<iostream>
using namespace std;
int main() {
    cout << "Even numbers from 2 to 100: " << endl;

    for (int i = 2; i <= 100; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}






