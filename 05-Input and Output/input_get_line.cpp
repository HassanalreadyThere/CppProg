/**********************************************************************
  
  Program Title : Input Entire Line in C++
  File Name: "input_get_line.cpp"
  
  Programmer : Sathish Sarma
  Contact Details : sathish.sarma@newinti.edu.my
  Date : 25 August 2025
  
 **********************************************************************/

#include <iostream>
#include <string>   // required for string
using namespace std;

int main() {
    string fullName;
    int age;

    cout << "Enter your full name: ";
    getline(cin, fullName);   // Reads the entire line (including spaces)

    cout << "Enter your age: ";
    cin >> age;   // Reads number

    cout << "\n--- User Information ---\n";
    cout << "Full Name: " << fullName << endl;
    cout << "Age: " << age << endl;

    return 0;
}
