/**********************************************************************
  
  Program Title : Input and Output in C++
  File Name: "input_output.cpp"
  
  Programmer : Sathish Sarma
  Contact Details : sathish.sarma@newinti.edu.my
  Date : 25 August 2025
  
 **********************************************************************/

#include <iostream>
using namespace std;

int main() {
    // Variables
    string name;
    int age;
    double gpa;

    // Taking input from user
    cout << "Enter your name: ";
    cin >> name;   // reads a single word

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your GPA: ";
    cin >> gpa;

    // Displaying the output
    cout << "\n--- User Information ---\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;

    return 0;
}
