#include<iostream>
#include<vector>
using namespace std;

bool minheap = false;
bool compare(int a, int b) {
	if (minheap) {
		return a < b;
	}
	else {
		return a > b;
	}	
}
void heapify(vector<int>&v, int idx, int size)
{
	int left = 2 * idx;
	int right = left + 1;

	int min_idx = idx;
	int last = size - 1;

	if (left <= last && compare(v[left], v[idx])) {
		min_idx = left;
	}
	if (right <= last && compare(v[right], v[min_idx])) {
		min_idx = right;
	}
	if (min_idx != idx) {
		swap(v[idx], v[min_idx]);
		heapify(v, min_idx, size);
	}
}

// o(N)
void buildHeap(vector<int>&v) {
	for (int i = ( v.size() - 1 ) / 2; i >= 1; i--) {
		heapify(v, i, v.size());
	}
}
void print(vector<int>v) {
	for (int x = 1; x < v.size(); x++) {
		cout << v[x] << " ";
	}
	cout << endl;
}
void heapSort(vector<int> &arr) {
	buildHeap(arr);
	int n = arr.size();
	//remove n-1 elemnent from the heap
	while (n > 1) {
		swap(arr[1], arr[n - 1]);
		// remove the element from the top
		n--;
		heapify(arr, 1, n);
	}
}

int main()
{
	vector<int >v;
	v.push_back(-1);

	int n;
	cin >> n;
	int temp;

	for (int i = 0; i < n; ++i)
	{

		cin >> temp;
		v.push_back(temp);
	}
	// remove all the elemnts one by one
	heapSort(v);
	print(v);
	return 0;
}