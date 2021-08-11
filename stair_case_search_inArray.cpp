#include <iostream>
using namespace std;

int search(int a[][30], int n, int m, int key) {
	if (n == 0 && m == 0)
		return -1;

	if (key < a[0][0] || key > a[n - 1][n - 1])
		return -1;
	// set indexes for top right element
	int i = 0;
	int j = m - 1;
	while (i < n && j >= 0) {
		if (a[i][j] == key) {
			cout << "n Found at "
			     << i << ", " << j;
			return 1;
		}
		if (a[i][j] > key)
			j--;
		else // if a[i][j] < key
			i++;
	}

	cout << "n Element not found";
	return 0; // if ( i==n || j== -1 )
}




int main() {
	int n, m;
	cin >> n >> m;

	int a[30][30];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	int key;
	cin >> key;

	search(a, n, m, key);

	return 0;
}
