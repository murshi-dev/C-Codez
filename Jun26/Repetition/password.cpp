#include <iostream>
#include <string>
using namespace std;
int main()
{
    string password;
    int attempts = 0;
    while (attempts < 3)
    {
        cout << "Enter password: ";
        cin >> password;
        if (password == "cpp123")
        {
            cout << "Access Granted.";
            break;
        }
        else
        {
            cout << "Incorrect password." << endl;
            attempts++;
        }
    }
    if (attempts == 3)
    {
        cout << "Access Denied. Maximum attempts reached.";
    }
    return 0;
}
