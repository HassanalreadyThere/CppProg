/**********************************************************************

Program Title : Variables, Data Types and Data Type Size in C++
FileName: "variable_data_types.cpp"

Programmer : Sathish Sarma
Contact Details : sathish.sarma@newinti.edu.my
Date : 25 August 2025

**********************************************************************/

#include <iostream>
using namespace std;

int main() {
    // Different data types
    int age = 21;
    float height = 5.9f;
    double salary = 12345.67;
    char grade = 'A';
    bool isStudent = true;

    // Display variable values
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Salary: " << salary << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Student: " << isStudent << endl;

    // Display sizes of data types
    cout << "\nSize of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;

    return 0;
}
