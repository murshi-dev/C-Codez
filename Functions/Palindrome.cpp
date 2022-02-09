#include <iostream>
using namespace std;
bool isPalindrome(string str);
int main()
{
    string text;
    cout << "Enter a string to check palindrome: ";
    cin >> text;
    if (isPalindrome(text) == true)
        cout << "Entered text is a palindrome";
    else
        cout << "Entered text is NOT a palindrome";
    
    system("pause>0");
}
bool isPalindrome(string str)
{
    int length = str.length();
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i])
            return false;

        return true;
    }
}


