#include <iostream>
#include<list>
using namespace std;

int main() {


	//list to create  graph data structure

	list<pair<int , int>> *l;

	int n;
	cin >> n;

	l = new list<pair<int, int>>[n];

	int e;
	cin >> e;

	for (int i = 0; i < n; i++) {
		int x, y, wt;
		cin >> x >> y >> wt;

		l[x].push_back(make_pair(y, wt));
		l[y].push_back(make_pair(x, wt));
	}

	//print list

	for (int i = 0; i < n; i++) {

		//print every linked list

		cout << "linked list " << i << "->";
		for (auto xp : l[i]) {
			cout << "(" << xp.first << "," << xp.second << "),";
		}
		cout << endl;
	}

}