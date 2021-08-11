/* Pass-by-reference using reference (TestPassByReference.cpp) */

/*Instead of passing pointers into function, you could also pass references into function, to avoid
the clumsy syntax of referencing and dereferencing. For example,*/

#include <iostream>
using namespace std;

void square(int & rNumber) { 						//  Function takes an int reference (non-const)

	cout << "In square(): " << rNumber << endl; 	// 0x22ff1c
	rNumber += rNumber; 						// Implicit de-referencing (without ‘*’)
}

int main() {
	int number = 8;   // original copy
	cout << "In main(): " << &number << endl; 		// 0x22ff1c
	cout << number << endl; 						// 8

	square(number); 								// Implicit referencing (without ‘&’)
	cout << number << endl; 						// 16
}