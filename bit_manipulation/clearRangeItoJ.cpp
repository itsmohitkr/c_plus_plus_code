#include <iostream>
using namespace std;

// clear bits from i to j
int clearrange_Itoj(int n, int i, int j) {
	int a = (-1 << (j + 1));
	int b = (1 << i) - 1; // 1<<i is 2^
	int mask = a | b;
	return mask & n;
}

int main() {
	int n, i, j;
	cin >> n >> i >> j;
	cout << clearrange_Itoj(n, i, j);
	return 0;

}
