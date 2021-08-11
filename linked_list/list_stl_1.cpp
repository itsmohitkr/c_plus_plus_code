#include <iostream>
#include <list>
using namespace std;

//http://www.cplusplus.com/reference/forward_list/forward_list/
/*
	 forward_list objects are thus more efficient than list objects, although
	 they can only be iterated forwards.

	 Compared to other base standard sequence containers (array, vector and deque),
	 forward_list perform generally better in inserting, extracting and moving elements in any
	 position within the container, and therefore also in algorithms that make intensive use
	 of these, like sorting algorithms.

	 The main drawback of forward_lists and lists compared to these other sequence containers is
	 that they lack direct access to the elements by their position; For example, to access the sixth
	 element in a forward_list one has to iterate from the beginning to that position, which takes
	 linear time in the distance between these. They also consume some extra memory to keep the
	 linking information associated to each element (which may be an important factor for large lists
	 of small-sized elements).
 */

int main() {
	list<int>l;

	// init
	list<int>l1{1, 2, 3, 10, 8, 5};
	//different data type

	list<string> l2{"apple", "guava", "mango", "banana"};
	cout << l2.front() << endl;

	l2.push_back("pineapple");

	//sort

	l2.sort();

	//reverse

	l2.reverse();

	//pop_front
	cout << l2.front() << endl;
	l2.pop_front();

	// add to the front of the list
	l2.push_front("kiwi");
	cout << l2.back() << endl;
	l2.pop_back();



	//iterate over the list and print the data

	for (auto it = l2.begin(); it != l2.end(); it++) {
		cout << *it << "-->";
	}

	cout << endl;

	for (string s : l2) {
		cout << s << "->";
	}

	cout << endl;
	l2.push_back("orange");
	l2.push_back("guava");


	for (string s : l2) {
		cout << s << "->";
	}
	cout << endl;

	// remove fruit

	string f;
	//cin >> f;

	//l2.remove(f); // remove all the occurances of "guava"

	//l2.remove("orange");
	for (string s : l2) {
		cout << s << "->";
	}
	cout << endl;

	// erase one or more element

	auto it = l2.begin();
	it++;
	it++;

	l2.erase(it);

	for (string s : l2) {
		cout << s << "->";
	}
	cout << endl;
// we can insert element in the list

	it = l2.begin();

	it++;

	l2.insert(it, "fruitjuice");
	for (string s : l2) {
		cout << s << "->";
	}
	cout << endl;


	return 0;
}