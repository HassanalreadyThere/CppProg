/**********************************************************************
  
  Program Title : Data Types Modifiers and Data Type Size in C++
  File Name: "data_types_modifiers.cpp"
  
  Programmer : Sathish Sarma
  Contact Details : sathish.sarma@newinti.edu.my
  Date : 25 August 2025
  
 **********************************************************************/

#include <iostream>
#include <limits> // For numeric_limits
using namespace std;

int main() {
	cout << "Demonstrating C++ Data Type Modifiers\n";
	cout << "--------------------------------------\n";
	
	// short int
	short int s;
	cout << "short int: " << sizeof(s) << " bytes, "
	<< numeric_limits<short int>::min() << " to "
	<< numeric_limits<short int>::max() << endl;
	
	// unsigned short int
	unsigned short int us;
	cout << "unsigned short int: " << sizeof(us) << " bytes, "
	<< numeric_limits<unsigned short int>::min() << " to "
	<< numeric_limits<unsigned short int>::max() << endl;
	
	// int
	int i;
	cout << "int: " << sizeof(i) << " bytes, "
	<< numeric_limits<int>::min() << " to "
	<< numeric_limits<int>::max() << endl;
	
	// unsigned int
	unsigned int ui;
	cout << "unsigned int: " << sizeof(ui) << " bytes, "
	<< numeric_limits<unsigned int>::min() << " to "
	<< numeric_limits<unsigned int>::max() << endl;
	
	// long int
	long int l;
	cout << "long int: " << sizeof(l) << " bytes, "
	<< numeric_limits<long int>::min() << " to "
	<< numeric_limits<long int>::max() << endl;
	
	// unsigned long int
	unsigned long int ul;
	cout << "unsigned long int: " << sizeof(ul) << " bytes, "
	<< numeric_limits<unsigned long int>::min() << " to "
	<< numeric_limits<unsigned long int>::max() << endl;
	
	// long long int
	long long int ll;
	cout << "long long int: " << sizeof(ll) << " bytes, "
	<< numeric_limits<long long int>::min() << " to "
	<< numeric_limits<long long int>::max() << endl;
	
	// unsigned long long int
	unsigned long long int ull;
	cout << "unsigned long long int: " << sizeof(ull) << " bytes, "
	<< numeric_limits<unsigned long long int>::min() << " to "
	<< numeric_limits<unsigned long long int>::max() << endl;
	
	return 0;
}

