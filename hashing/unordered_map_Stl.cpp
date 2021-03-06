#include <iostream>
#include<unordered_map>
#include<string>
using namespace std;
/* 	Internally unordered_map is implemented using Hash Table,
	the key provided to map are hashed into indices of hash table
	that is why performance of data structure depends on hash
	function a lot but on an average the cost of search, insert and delete from hash table is O(1).

	                | map                 | unordered_map
	---------------------------------------------------------
	Ordering        | increasing  order   | no ordering
	                | (by default)        |

	Implementation  | Self balancing BST  | Hash Table
	                | like Red-Black Tree |

	search time     | log(n)              | O(1) -> Average
	                |                     | O(n) -> Worst Case

	Insertion time  | log(n) + Rebalance  | Same as search

	Deletion time   | log(n) + Rebalance  | Same as search

*/
int main() {

	unordered_map<string, int> m;

	//1. Insert
	m.insert(make_pair("Mango", 100));

	pair<string, int> p;
	p.first = "Apple";
	p.second = 120;

	m.insert(p);

	m["Banana"] = 20;

	//2. Search
	string fruit;
	cin >> fruit;

	//update the price
	//m[fruit] += 22;

	auto it = m.find(fruit);

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
