#include <iostream>
#include<string>
using namespace std;
int main() {


	//srting init
	string s0;  // null character;
	string s1("hello");

	string s2 = "hello mohit ";
	string s3(s2);// calling copy constructor and passing s2

	string s4 = s2;

	char a[] = {'a', 'b', 'c', '\0'};
	string s5(a);

	cout << s0 << endl;
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	cout << s5 << endl;

	if (s0.empty()) {
		cout << "s0 is empty" << endl;
	}

	// append

	s0.append("i love c++");
	cout << s0 << endl;
	s0 += "and python";
	cout << s0 << endl;

	// remove and clear

	cout << s0.length() << endl;
	s0.clear();
	cout << s0.length() << endl;


	// compare two string
	s0 = "Apple";
	s1 = "Mango";

	cout << s1.compare(s1) << endl; // returns an integer==0 equal ,>0or <0

	//overloaded operator

	if (s1 > s0) {
		cout << "s1 is lexi grater than apple" << endl;
	}


	cout << s1[0] << endl;// access ith character

	// find sub strings
	string s = "i want to have apple juice";
	int idx = s.find("apple");
	cout << idx << endl;


	//remove a word from the string

	string word = "apple";
	int length = word.length();
	s.erase(idx, length + 1); // from that indx upto how many length
	cout << s << endl;

	// iterate all over the character string
	for (int i = 0; i < s1.length(); ++i)
	{
		cout << s1[i] << ":";
	}

	cout << endl;
	// iterators

	for (auto it = s1.begin(); it != s1.end(); it++) {// end is not included
		cout << (*it) << ",";
	}

	cout << endl;
	// for each loop
	for (auto c : s1) {// for auto c thats belong in s1
		cout << c;
	}
	cout << endl;

}