#include<iostream>
using namespace std;
int main() {
    cout << "Numbers from 10 to 1: " << endl;

    int counter = 10;//rule 1
    while (counter >= 1) //rule 2
    {
        cout << counter << " ";
        counter--; //rule 3
    }
    return 0;
}
