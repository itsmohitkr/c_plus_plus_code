

/*Instead of define an int variable (int number), and assign the address of the variable to the int pointer
(int *pNumber = &number), the storage can be dynamically allocated at runtime, via a new operator.

In C++, whenever you allocate a piece of memory dynamically via new, you need to use delete to
remove the storage (i.e., to return the storage to the heap).

The new operation returns a pointer to the memory allocated. The delete operator takes a pointer
(pointing to the memory allocated via new) as its sole argument.
*/


#include <iostream>
using namespace std;

int main() {

	// Static allocation

	int number = 88;
	int * p1 = &number; // Assign a “valid” address into pointer

	// Dynamic Allocation

	int * p2; // Not initialize, points to somewhere which is invalid
	cout << p2 << endl; // Print address before allocation
	p2 = new int;
	// Dynamically allocate an int and assign its address to pointer
	// The pointer gets a valid address with memory allocated
	*p2 = 99;

	cout << p2 << endl; // Print address after allocation
	cout << *p2 << endl; // Print value point-to
	delete p2; // Remove the dynamically allocated storage
}


/*To initialize the allocated memory, you can use an initializer for fundamental types, or invoke a
constructor for an object. For example,*/
// use an initializer to initialize a fundamental type (such as int, double)


int * p1 = new int(88);
double * p2 = new double(1.23);
// c++11 brace initialization syntax
int * p1 = new int {88};
double * p2 = new double {1.23};
// invoke a constructor to initialize an object (such as Date, Time)
Date * date1 = new Date(1999, 1, 1);
Time * time1 = new Time(12, 34, 56);
