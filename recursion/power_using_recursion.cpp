#include <bits/stdc++.h>
using namespace std;

int power(int n, int p) {
	if (p == 1) {
		return n;
	}

	int smallproblem = power(n, p - 1);
	return n * smallproblem;
}
int main() {
	int n, p;
	cin >> n >> p;

	cout << power(n, p);
}
