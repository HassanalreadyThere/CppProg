/**********************************************************************
  
  Program Title : Manipulating String in C++
  File Name: "string_manipulation.cpp"
  
  Programmer : Sathish Sarma
  Contact Details : sathish.sarma@newinti.edu.my
  Date : 25 August 2025
  
 **********************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare strings
    string firstName = "John";
    string lastName = "Smith";
    string fullName;

    // Concatenation using + operator
    fullName = firstName + " " + lastName;
    cout << "Concatenation using + : " << fullName << endl;

    // Concatenation using append()
    string sentence = "Hello";
    sentence.append(" World");  // adds " World" at the end
    cout << "After append(): " << sentence << endl;

    // Using += operator
    string greeting = "Good";
    greeting += " Morning";
    cout << "Using += : " << greeting << endl;

    // Other string manipulations
    cout << "\n--- String Manipulations ---\n";
    cout << "Length of fullName: " << fullName.length() << endl;
    cout << "Character at index 2: " << fullName.at(2) << endl;
    cout << "Substring (0 to 4): " << fullName.substr(0, 4) << endl;

    // Modifying a character
    fullName[0] = 'j';
    cout << "Modified fullName: " << fullName << endl;

    return 0;
}
