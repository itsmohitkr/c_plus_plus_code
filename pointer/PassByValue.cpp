/* Pass-by-value into function (TestPassByValue.cpp) */
#include <iostream>
using namespace std;

/* Changes to the clone copy inside the function has no effect to
the original argument in the caller. In other words,
the called function has no access to the variables in the caller.*/

int square(int n) { 							// non-const
	cout << "In square():" << &n << endl; 		// 0x22ff00
	n *= n; 									// clone modified inside the function /
	return n;
}

int main() {
	int number = 8;
	cout << "In main(): " << &number << endl; 	// 0x22ff1c
	cout << number << endl; 					// 8
	cout << square(number) << endl; 			// 64
	cout << number << endl; 					// 8 - no change
}