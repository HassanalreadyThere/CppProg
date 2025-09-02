/**********************************************************************

Program Title : Temperature Converter Application
FileName: "TemperatureConverter.cpp"

Programmer : Sathish Sarma
Contact Details : sathish.sarma@newinti.edu.my
Date : 25 August 2025

**********************************************************************/

#include <iostream>
using namespace std;

int main() {
    int choice;
    double celsius, fahrenheit;

    cout << "Temperature Converter" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "Choose an option: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter Celsius: ";
        cin >> celsius;
        fahrenheit = (celsius * 9.0 / 5.0) + 32;
        cout << celsius << " °C = " << fahrenheit << " °F" << endl;
    } else if (choice == 2) {
        cout << "Enter Fahrenheit: ";
        cin >> fahrenheit;
        celsius = (fahrenheit - 32) * 5.0 / 9.0;
        cout << fahrenheit << " °F = " << celsius << " °C" << endl;
    } else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}
