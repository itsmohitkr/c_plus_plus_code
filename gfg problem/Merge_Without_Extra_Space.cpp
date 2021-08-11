/*Given two sorted arrays arr1[] of size N and arr2[] of size M. Each array is sorted in non-decreasing order.
Merge the two arrays into one sorted array in non-decreasing order without using any extra space.*/


// method 1-O(n*m) and O(1)
void merge(int arr1[], int arr2[], int n, int m) {
	// code here
	for (int i = 0; i < n; i++) {

		if (arr2[0] < arr1[i]) {
			swap(arr2[0], arr1[i]);
			int j = 0;
			while (arr2[j] > arr2[j + 1] and j + 1 < m) {
				swap(arr2[j], arr2[j + 1]);
				j++;
			}
		}
	}
}

// method 2-O()
// gap method
void merge(int arr1[], int arr2[], int n, int m) {
	// code here
	int i = 0;
	int j = 0;
	int k = n - 1;

	while (i <= k and j < m) {
		if (arr1[i] < arr2[j]) {
			i++;
		}
		else {
			swap(arr1[k], arr2[j]);
			k--;
			j++;
		}
	}
	sort(arr1, arr1 + n);
	sort(arr2, arr2 + n);
}