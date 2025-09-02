/**********************************************************************
Program Title : If Statements Demonstration
FileName: "if_condition.cpp"

Programmer : Sathish Sarma
Contact Details : sathish.sarma@newinti.edu.my
Date : 2 September 2025
**********************************************************************/

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "\n=== Demonstration of If Statements ===\n" << endl;

    // 1. Simple if
    if (number > 0) {
        cout << "Simple if: " << number << " is positive." << endl;
    }

    // 2. if...else
    if (number % 2 == 0) {
        cout << "if...else: " << number << " is even." << endl;
    } else {
        cout << "if...else: " << number << " is odd." << endl;
    }

    // 3. if...else if...else
    if (number < 0) {
        cout << "if...else if: " << number << " is negative." << endl;
    } else if (number == 0) {
        cout << "if...else if: The number is zero." << endl;
    } else {
        cout << "if...else if: " << number << " is positive." << endl;
    }

    // 4. Nested if...else
    if (number != 0) {
        cout << "Nested if...else: Number is non-zero. " << endl;
        if (number > 0) {
            cout << "  Inside nested if: Number is positive." << endl;
            if (number % 2 == 0) {
                cout << "    Further nested: Number is positive and even." << endl;
            } else {
                cout << "    Further nested: Number is positive and odd." << endl;
            }
        } else {
            cout << "  Inside nested if: Number is negative." << endl;
        }
    } else {
        cout << "Nested if...else: Number is zero." << endl;
    }

    return 0;
}
