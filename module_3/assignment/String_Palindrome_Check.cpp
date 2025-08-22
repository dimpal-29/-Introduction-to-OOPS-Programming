//String Palindrome Check 
//	o Write a C++ program to check if a given string is a palindrome (reads the same forwards and backwards).

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    bool isPalindrome = true;

    cout << "Enter a string: ";
    cin >> str;   

    int n = str.length();
    for (int i = 0; i < n / 2; i++) 
	{
        if (str[i] != str[n - i - 1]) 
		{
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << str << " is a Palindrome." << endl;
    else
        cout << str << " is NOT a Palindrome." << endl;

    return 0;
}

