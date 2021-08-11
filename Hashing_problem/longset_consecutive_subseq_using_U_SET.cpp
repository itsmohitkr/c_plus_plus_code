#include<iostream>
#include<unordered_set>
using namespace std;

// using unordered_set
int findLargest_subsequence(int arr[], int n) {

	unordered_set<int> s;
	for (int i = 0; i < n; i++) {
		s.insert(arr[i]);
	}
	int max_length = 1;
	// iterate over all the elements
	// target those from which a streak can start

	for (int i = 0; i < n; i++) {
		if (s.find(arr[i] - 1) == s.end()) {
			// a[i] is a starting point of streak
			// traverse the entire range that is contained in that streak
			int next_nos = arr[i] + 1;
			int length = 1;
			while (s.find(next_nos) != s.end()) {
				length++;
				next_nos++;
			}
			max_length = max(max_length, length);
		}
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