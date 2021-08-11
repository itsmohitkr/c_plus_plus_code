/* Pass-by-reference using pointer (TestPassByPointer.cpp) */

/*In many situations, we may wish to modify the original copy
directly (especially in passing huge objector array) to avoid the
overhead of cloning.
This can be done by passing a pointer of the object into the
function, known as pass-by-reference.The called function operates on the same
address, and can thus modify the variable in the caller.*/

#include <iostream>
using namespace std;

void square(int * pNumber) { 						// Function takes an int pointer (non-const)
	cout << "In square(): " << pNumber << endl; 	// 0x22ff1c
	*pNumber += *pNumber; 						// Explicit de-referencing to get the value pointed-to
}

int main() {
	int number = 8;   // original copy
	cout << "In main(): " << &number << endl; 		// 0x22ff1c
	cout << number << endl; 						// 8

	square(&number); 								// Explicit referencing to pass an address
	cout << number << endl; 						// 64
}

