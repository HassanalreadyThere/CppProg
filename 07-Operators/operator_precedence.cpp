/**********************************************************************
Program Title : Operator Precedence Demonstration
FileName: "operator_precedence.cpp"

Programmer : Sathish Sarma
Contact Details : sathish.sarma@newinti.edu.my
Date : 2 September 2025
**********************************************************************/

#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5, c = 2;

    cout << "Initial values: a = " << a << ", b = " << b << ", c = " << c << endl;
    cout << "---------------------------------------------------" << endl;

    // Example 1: Multiplication has higher precedence than addition
    int result1 = a + b * c;   // evaluated as a + (b * c)
    cout << "a + b * c = " << result1 
         << " (Multiplication is done before addition)" << endl;

    // Example 2: Parentheses override precedence
    int result2 = (a + b) * c; // evaluated as (a + b) * c
    cout << "(a + b) * c = " << result2 
         << " (Parentheses force addition first)" << endl;

    // Example 3: Division vs multiplication (same precedence, left-to-right associativity)
    int result3 = a / b * c;   // evaluated as (a / b) * c
    cout << "a / b * c = " << result3 
         << " (Evaluated left to right since / and * have same precedence)" << endl;

    // Example 4: Unary minus has higher precedence than multiplication
    int result4 = -a * b;      // evaluated as (-a) * b
    cout << "-a * b = " << result4 
         << " (Unary minus applied before multiplication)" << endl;

    // Example 5: Relational operators come after arithmetic
    bool result5 = a + b > c * 2;  // (a + b) compared to (c * 2)
    cout << "a + b > c * 2 = " << result5 
         << " (Arithmetic done before comparison)" << endl;

    // Example 6: Assignment has lowest precedence
    int x;
    x = a + b * c;   // (b * c) evaluated first, then added to a, then assigned
    cout << "x = a + b * c -> x = " << x << endl;

    return 0;
}
