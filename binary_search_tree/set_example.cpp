#include<iostream>
#include<set>
// set stores unique element

using namespace std;
int main()
{
	set<pair<int , int>>s;
	s.insert(make_pair(10, 5));
	s.insert(make_pair(1, 5));
	s.insert(make_pair(1, 6));
	s.insert(make_pair(10, 4));
	s.insert(make_pair(10, 2));
	s.insert(make_pair(3, 5));

	for (auto p : s) {
		cout << p.first << " and " << p.second << endl;
	}
	cout << endl;

	s.erase(s.find(make_pair(3, 5)));
	s.insert(make_pair(10, 20));

	for (auto p : s) {
		cout << p.first << " and " << p.second << endl;
	}
	cout << endl;

	auto it = s.upper_bound(make_pair(10, 11));
	cout << it->first << "," << it->second << endl;

	return 0;
}