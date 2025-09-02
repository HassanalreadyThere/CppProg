#include <iostream>
using namespace std;

int main() {
	int *ptr = nullptr;   // null pointer (points to nothing)
	
	cout << "Attempting to access pointer value..." << endl;
	
	cout << *ptr << endl;   // Causes runtime crash (segmentation fault)
	
	cout << "This text does not appear";
	return 0;
}
