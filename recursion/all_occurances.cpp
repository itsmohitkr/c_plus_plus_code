#include <iostream>
using namespace std;

int store_all_ocuur(int a[], int i, int n, int key, int out[], int j) {
	// base case
	if (i == n) {
		return j;
	}

	if (a[i] == key) {
		out[j] = i;

		// increment j to accomodate current element
		return store_all_ocuur(a, i + 1, n, key, out, j + 1);
	}
	// otherwise j remains unchanged
	return store_all_ocuur(a, i + 1, n, key, out, j);
}

void all_occurances(int a[], int i, int n, int key) {

	if (i == n) {
		// no element is present
		return;
	}
	if (a[i] == key) {
		cout << i << " ";
	}

	return all_occurances(a, i + 1, n, key);
}
int main() {
	int a[] = {1, 2, 3, 4, 5, 10, 10, 10, 20};
	int n = sizeof(a) / sizeof(int);
	int x;
	cin >> x;

	all_occurances(a, 0, n, x);
	cout << endl;
	int out[1000];

	int cnt = store_all_ocuur(a, 0, n, x, out, 0);

	cout << "count " << cnt << " ";
	for (int k = 0; k < cnt; k++) {
		cout << out[k] << " ";
	}

}

