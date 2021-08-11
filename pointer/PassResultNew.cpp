/*  Test passing the result (TestPassResultNew.cpp)  */

/**Passing Dynamically Allocated Memory as Return Value by Reference
Instead, you need to dynamically allocate a variable for the return value, and return it by reference.
*You should not pass Function’s local variable as return value by reference*/

#include <iostream>
using namespace std;

int * squarePtr(int number) {
	int * dynamicAllocatedResult = new int(number * number);
	return dynamicAllocatedResult;
}

int & squareRef(int number) {
	int * dynamicAllocatedResult = new int(number * number);
	return *dynamicAllocatedResult;
}

int main( ) {
	int number = 8;
	cout << number << endl; // 8
	cout << *squarePtr(number) << endl; // 64
	cout << squareRef(number) << endl; // 64
}