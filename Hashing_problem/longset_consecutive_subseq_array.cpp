#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// naive method

int findLargest_subsequence(int arr[], int n) {

	int max_length = 0;
	int cnt = 1;

	sort(arr, arr + n);
	vector<int> v;
	v.push_back(arr[0]);

	for (int i = 1; i < n; i++)
	{
		if (arr[i] > arr[i - 1]) {
			v.push_back(arr[i]);
		}
	}

	for (int i = 0; i < v.size(); i++) {

		if (v[i] + 1 == v[i + 1]) {
			cnt++;
		}
		else {
			cnt = 1;
		}
		max_length = max(max_length, cnt);
	}
	return max_length;
}


int main() {
	int n;
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int x = findLargest_subsequence(arr, n);
	cout << x;

}