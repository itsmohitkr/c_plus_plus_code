#include <iostream>
#include<map> // associative container that store mapping btwn key and value.
#include<string>
using namespace std;

int main() {

	map<string, int> m;

	//1. Insert
	m.insert(make_pair("Mango", 100));

	// 2nd method
	pair<string, int> p;
	p.first = "Apple";
	p.second = 120;
	m.insert(p);

	// 3rd method
	m["Banana"] = 20;

	//2. Search
	string fruit;
	cin >> fruit;

	//update the price
	//m[fruit] += 22;

	auto it = m.find(fruit);    // find return an iterator 

	if (it != m.end()) {
		cout << "price of " << fruit << " is" << m[fruit] << endl;
	}
	else {
		cout << "fruit is not present " << endl;
	}




	//3. Erase
	m.erase(fruit);


	//another way to find a particular map
	// it stores unique keys only once
	// count returns integer 0(if not found) and 1 (if found)
	if (m.count(fruit)) {		
		cout << "Price is " << m[fruit] << endl;
	}
	else {
		cout << "Couldnt find " << endl;
	}

	m["Litchi"] = 60;
	m["Pineapple"] = 80;

	//Iterate over all the key value pairs
	for (auto it = m.begin(); it != m.end(); it++) {
		cout << it->first << " and " << it->second << endl;
	}

	//for each loop
	for (auto p : m) {
		cout << p.first << " : " << p.second << endl;
	}

	return 0;
}
