#include <iostream>
using namespace std;
int main() {
    string username = "", password = "";
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
    //using logical operator AND 
    if (username == "admin" && password == "12345")
    {
        cout << "Login Successful";
    }
    else 
    {
        cout << "Incorrect Username/Password";
    }
    return 0;
}


