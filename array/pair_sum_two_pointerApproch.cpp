#include<iostream>
using namespace std;
int main() {
	int a[1000];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int s;
	cin >> s;

	// keep two pointer i and j

	int i = 0;
	int j = sizeof(a) / sizeof(int) - 1;

	while (i < j) {
		int current_sum = a[i] + a[j];
		if (current_sum > s) {
			j--;
		}
		else if (current_sum < s) {
			i++;
		}
		else if (current_sum == s) {
			cout << a[i] << " and " << a[j] << endl;
			i++;
			j--;
		}
	}
}
