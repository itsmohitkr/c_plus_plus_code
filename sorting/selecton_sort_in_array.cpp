#include<iostream>
using namespace std;


// Selection Sort-->for randomly shuffeld array
void selection_sort(int a[], int n) {

	for (int i = 0; i < n - 1; i++) {
		//find out the smallest element idx in the unsorted part
		int min_index = i;
		for (int j = i; j <= n - 1; j++) {
			if (a[j] < a[min_index]) {
				min_index = j;
			}
		}
		//After this loop we can do swap finally
		swap(a[i], a[min_index]);
	}
} p

int main() {


	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	selection_sort(a, n);

	for (int i = 0; i < n; i++) {
		cout << a[i] << ",";
	}


	return 0;

}