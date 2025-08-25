/**********************************************************************

Program Title : Constants and Literals in C++
FileName: "constant_literals.cpp"

Programmer : Sathish Sarma
Contact Details : sathish.sarma@newinti.edu.my
Date : 25 August 2025

**********************************************************************/

#include <iostream>
using namespace std;

#define MY_NAME "SATHISH SARMA"

int main() {
    // Constants
    const int MAX_VALUE = 100;     // Integer constant
    const double PI = 3.14159;     // Floating-point constant
    const char NEWLINE = '\n';     // Character constant

    // Literals
    cout << "Integer literal: " << 25 << NEWLINE;
    cout << "Floating-point literal: " << 3.14 << NEWLINE;
    cout << "Character literal: " << 'A' << NEWLINE;
    cout << "String literal: " << "Hello, C++!" << NEWLINE;

    cout << "Constant MAX_VALUE = " << MAX_VALUE << NEWLINE;
    cout << "Constant PI = " << PI << NEWLINE;
	cout << "Lecturer Name = " << MY_NAME << NEWLINE;

    return 0;
}
