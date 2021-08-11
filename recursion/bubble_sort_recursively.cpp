#include <iostream>
using namespace std;


void bubbleSort_recur(int a[], int n) {
	// base case
	if (n == 0) {
		return;
	}

	// after you have moved the largets element int the current part to the
	// end of the array by pair wise swapping
	for (int j = 0; j < n - 1; j++) {
		if (a[j] > a[j + 1]) {
			swap(a[j], a[j + 1]);
		}
	}

	// sort the first n-1 elements
	bubbleSort_recur(a, n - 1);
}

int main() {
	int a[] = {5, 4, 3, 2, 1};
	int n = sizeof(a) / sizeof(int);

	bubbleSort_recur(a, n);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
}