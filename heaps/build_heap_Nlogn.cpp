#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>v) {
	for (int x : v) {
		cout << x << " ";
	}
	cout << endl;
}

// O(NLogN)
// top down approch
void buildHeap(vector<int>&v) {
	for (int i = 2; i < v.size(); i++) {
		int indx = i;
		int parent = i / 2;
		while (indx > 1 and v[indx] > v[parent]) {
			swap(v[indx], v[parent]);
			indx = parent;
			parent = parent / 2;
		}
	}
}
int main()
{
	vector<int>v{ -1, 10, 20, 5, 6, 1, 8, 9, 4}; // heap
	print(v);
	buildHeap(v);
	print(v);
}