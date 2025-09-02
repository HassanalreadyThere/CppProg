/**********************************************************************
Program Title : Bitwise Operators Demonstration
FileName: "bitwise_operators.cpp"

Programmer : Sathish Sarma
Contact Details : sathish.sarma@newinti.edu.my
Date : 2 September 2025
**********************************************************************/

#include <iostream>
using namespace std;

int main() {
    unsigned int a = 12;   // 12 in binary = 00001100
    unsigned int b = 25;   // 25 in binary = 00011001

    cout << "a = " << a << " (Binary: 00001100)" << endl;
    cout << "b = " << b << " (Binary: 00011001)" << endl;
    cout << "-----------------------------------------" << endl;

    // Bitwise AND
    cout << "a & b = " << (a & b) << " (AND)" << endl;   // 00001100 & 00011001 = 00001000 (8)

    // Bitwise NOT
    cout << "~a = " << (~a) << " (NOT)" << endl;         // Inverts bits (depends on system representation)

    // Left shift
    cout << "a << 1 = " << (a << 1) << " (Left Shift by 1)" << endl; // 00001100 << 1 = 00011000 (24)

    return 0;
}
