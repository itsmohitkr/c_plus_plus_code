/*
	Input matrix
	0 1 1 1
	0 0 1 1
	1 1 1 1  // this row has maximum 1s
	0 0 0 0

Output: 2
*/
// O(n*n)
int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	// code here
	int max_sum = 0;
	int ans = -1;

	for (int i = 0; i < arr.size(); i++) {
		int cs = 0;
		for (int j = 0; j < arr[i].size(); j++) {
			cs += arr[i][j];
		}
		// max_sum=max(max_sum,cs);
		if (cs > max_sum) {
			ans = i;
			max_sum = cs;
		}
	}
	return ans;
}

// O(n+m)

int row_with_max_ones(vector<vector<int> > arr, int n, int m) {
	int j = m - 1;
	int ans = -1;
	for (int i = 0; i < n; i++) {
		while (j >= 0 and arr[i][j] == 1) {
			j--;
			ans = i;
		}
	}
	return row;
}