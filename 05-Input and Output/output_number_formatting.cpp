/**********************************************************************
  
  Program Title : Formatting Number Outputs in C++
  File Name: "output_number_formatting.cpp"
  
  Programmer : Sathish Sarma
  Contact Details : sathish.sarma@newinti.edu.my
  Date : 25 August 2025
  
 **********************************************************************/

#include <iostream>
#include <iomanip>  // for setw, setprecision, fixed, showpoint
using namespace std;

int main() {
    int num = 12345;
    double pi = 3.141592653589793;

    cout << "--- Integer Formatting ---\n";
    cout << "Default: " << num << endl;
    cout << "Right aligned (width 10): " << setw(10) << num << endl;
    cout << "Left aligned  (width 10): " << left << setw(10) << num << endl;
    cout << "Right aligned (width 10): " << right << setw(10) << num << endl;

    cout << "\n--- Floating Point Formatting ---\n";
    cout << "Default: " << pi << endl;
    cout << "Fixed (2 decimal places): " << fixed << setprecision(2) << pi << endl;
    cout << "Fixed (4 decimal places): " << fixed << setprecision(4) << pi << endl;
    cout << "Scientific notation: " << scientific << pi << endl;
    cout << "Show decimal point always: " << showpoint << fixed << setprecision(0) << pi << endl;

    return 0;
}

