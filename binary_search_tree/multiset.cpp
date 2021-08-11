#include<iostream>
#include<set>
using namespace std;

typedef multiset<int>::iterator It;

int main()
{
	int arr[] = {10, 20, 40, 20, 30, 30, 30, 80, 10, 10};
	int n = sizeof(arr) / sizeof(int );
	multiset<int>m(arr, arr + n);
	for (int x : m) {
		cout << x << ",";
	}
	cout << endl;
	m.erase(20); // erase will erase all counts of that nos
	m.insert(50);// insert
	// Iterate
	for (int x : m) {
		cout << x << ",";
	}
	cout << endl;
	cout << "count=" << m.count(10) << endl; // count all the occurances of 10

	//find
	auto it = m.find(30);
	cout << *(it) << endl;

	//print all ocurrance of 30
	pair<It, It> range = m.equal_range(30);
	for (auto it = range.first; it != range.second; it++) {
		cout << *it << "-";
	}
	cout << endl;
	//Lower Bound->nos which is >= and Upper Bound->nos which is <
	for (auto it = m.lower_bound(29); it != m.upper_bound(31); it++) {
		cout << *it << ",";
	}
	return 0;
}