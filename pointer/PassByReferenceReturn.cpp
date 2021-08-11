/* Passing back return value using reference (TestPassByReferenceReturn.cpp) */
#include <iostream>
using namespace std;

int * &squareRef(int & rNumber) {
	cout << "In squareRef( ): " << &rNumber << endl; // 0x22ff14
	return rNumber;
}

int* squarePtr(int * pNumber) {
	cout << "In squarePtr( ) : " << pNumber << endl ; // 0x22ff10
	*pNumber *= *pNumber ;
	return pNumber;
}

int main( ) {
	int number1 = 8;
	cout << "in main() &number1:" << &number1 << endl; //0x22ff14

	int & result = squareRef (number1) ;
	cout << "main ( ) &result :" << &result << endl; // 0x22ff14

	cout << result << endl; // 64
	cout << number1 << endl; // 64

	int number2 = 9;
	cout << "in main() &number2:" << &number2 << endl; // 0x22ff10

	int * pResult = squarePtr(&number2);
	cout << *pResult << endl; // 81
	cout << number2 << endl; // 81
}
