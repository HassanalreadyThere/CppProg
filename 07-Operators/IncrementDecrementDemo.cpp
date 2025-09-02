/**********************************************************************
Program Title : Prefix and Postfix Demonstration
FileName: "IncrementDecrementDemo.cpp"

Programmer : Sathish Sarma
Contact Details : sathish.sarma@newinti.edu.my
Date : 2 September 2025
**********************************************************************/

#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 10;
    
    int pre_a, post_b;

    cout << "Initial value of a: " << a << endl;

    // Prefix increment (++a): increases first, then uses the value
    pre_a = ++a;
    cout << "After prefix increment (++a), a = " << a << endl;
    cout << "After prefix increment (++a), pre_a = " << pre_a << endl;

    // Postfix decrement (b--): uses value first, then decreases
    post_b = b--;
    cout << "After postfix increment (b--), b = " << b << endl;
    cout << "After postfix increment (b--), post_b = " << post_b << endl;

    return 0;
}
