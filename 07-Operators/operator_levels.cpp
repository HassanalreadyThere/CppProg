/**********************************************************************
Program Title : Unary, Binary and Ternary Operators Demonstration
FileName: "operator_levels.cpp"

Programmer : Sathish Sarma
Contact Details : sathish.sarma@newinti.edu.my
Date : 2 September 2025
**********************************************************************/

#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;

    cout << "Initial values: a = " << a << ", b = " << b << endl;
    cout << "-------------------------------------------" << endl;

    // 1. Unary Operators
    cout << "Unary Operators:" << endl;
    cout << " -a = " << -a << " (Unary minus)" << endl;
    cout << " ++a = " << ++a << " (Prefix increment)" << endl;
    cout << " b-- = " << b-- << " (Postfix decrement, value before decrement)" << endl;
    cout << " b after b-- = " << b << endl;
    cout << endl;

    // Reset values
    a = 10;
    b = 5;

    // 2. Binary Operators
    cout << "Binary Operators:" << endl;
    cout << " a + b = " << (a + b) << " (Addition)" << endl;
    cout << " a - b = " << (a - b) << " (Subtraction)" << endl;
    cout << " a * b = " << (a * b) << " (Multiplication)" << endl;
    cout << " a / b = " << (a / b) << " (Division)" << endl;
    cout << " a % b = " << (a % b) << " (Modulus)" << endl;
    cout << endl;

    // 3. Ternary Operator
    cout << "Ternary Operator:" << endl;
    int maxVal = (a > b) ? a : b;
    cout << " (a > b) ? a : b = " << maxVal 
         << " (Selects the larger value between a and b)" << endl;

    return 0;
}
