/**********************************************************************

Program Title : Palindrome Checker Application
FileName: "PalindromeChecker.cpp"

Programmer : Sathish Sarma
Contact Details : sathish.sarma@newinti.edu.my
Date : 25 August 2025

**********************************************************************/

#include <iostream>
#include <string>
#include <cctype>   // for isalnum, tolower

using namespace std;

// Function to check palindrome
bool isPalindrome(string str) {
    string normalized = "";

    // Normalize: keep only alphanumeric and convert to lowercase
    for (char ch : str) {
        if (isalnum(static_cast<unsigned char>(ch))) {
            normalized += tolower(static_cast<unsigned char>(ch));
        }
    }

    int left = 0;
    int right = normalized.length() - 1;

    while (left < right) {
        if (normalized[left] != normalized[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string input;

    cout << "Enter a word or number: ";
    getline(cin, input);

    if (isPalindrome(input)) {
        cout << input << " is a Palindrome." << endl;
    } else {
        cout << input << " is NOT a Palindrome." << endl;
    }

    return 0;
}
