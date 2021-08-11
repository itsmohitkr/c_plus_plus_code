#include<iostream>
using namespace std;
long long magicNumberHire2020(int num) {

	if (num <= 0) {
		return 0;
	}

	int a = 1, b = 0, c, d, sum = 0;
	for (int i = 1; i <= num; i++) {
		c = a + b;
		d = c * c;

		sum = sum + d;

		a = b;
		b = c;

	}
	return sum;
}
int main() {
	int m;
	cin >> m;
	cout << magicNumberHire2020(m);
	return 0;
}
