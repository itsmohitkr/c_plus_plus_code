/* Test Function const and non-const parameter (FuncationConstParameter.cpp) */
#include <iostream>
using namespace std;

int squareConst(const int number) {
	//number *= number;// error: assignment of read-only parameter
	return number * number;
}

int squareNonConst(int number) { // non-const parameter
	number *= number;
	return number;
}

int squareConstRef(const int & number) { // const reference
	return number * number;
}

int squareNonConstRef(int & number) { // non-const reference
	return number * number;
}

int main() {
	int number = 8;
	const int constNumber = 9;

	cout << squareConst(number) << " " << number << endl;
	cout << squareConst(constNumber) << " " << constNumber << endl;

	cout << squareNonConst(number) << " " << number << endl;
	cout << squareNonConst(constNumber) << " " << constNumber << endl;

	cout << squareConstRef(number) << " " << number << endl;
	cout << squareConstRef(constNumber) << " " << constNumber << endl;

	cout << squareNonConstRef(number) << " " << number << endl;
	// cout << squareNonConstRef(constNumber) << endl;
	// error: invalid initialization of reference of
	// type ‘int&’ from expression of type ‘const int’
}