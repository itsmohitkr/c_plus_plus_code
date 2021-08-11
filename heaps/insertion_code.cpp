#include <iostream>
#include<vector>
using namespace std;
class heap
{
private:
	vector<int>v;
	bool minheap;

	bool compare(int a, int b) {
		if (minheap) {
			return a < b;
		}
		else {
			return a > b;
		}
	}
	void heapify(int idx)
	{
		int left = 2 * idx;
		int right = left + 1;

		int min_idx = idx;
		int last = v.size() - 1;

		// left and right index should be less than last-- means last index tkk to hi hipify karegen

		if (left <= last && compare(v[left], v[idx])) {
			min_idx = left;
		}
		if (right <= last && compare(v[right], v[min_idx])) {
			min_idx = right;
		}
		if (min_idx != idx) {
			swap(v[idx], v[min_idx]);
			heapify(min_idx);
		}
	}


public:
	// this is basically a constructor
	heap(int default_size = 10, bool type = true) {
		v.reserve(default_size);
		v.push_back(-1); // for idx 0, to block the index 0
		minheap = type;
	}

	void push(int d) {
		v.push_back(d);  // insert the element in the last of the array
		int idx = v.size() - 1;
		int parent = idx / 2;

		// keep pushing to the top till you reach root node or stop midway because current
		//element is graeter then parent
		while (idx > 1 && compare(v[idx], v[parent])) {
			swap(v[idx], v[parent]);
			idx = parent;
			parent = parent / 2;
		}
	}

	int top() {   // return the top element
		return v[1];

	}
	void pop() {
		int last = v.size() - 1;
		swap(v[1], v[last]);
		v.pop_back();
		heapify(1);
	}

	bool empty() {
		return v.size() == 1;
	}

};


int main()
{
	//give some initial size,tupe
	heap h/*(10, false)*/;
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int no;
		cin >> no;
		h.push(no);
	}
	// remove all the elemnts one by one
	while (!h.empty()) {
		cout << h.top() << " ";
		h.pop();
	}
	return 0;
}