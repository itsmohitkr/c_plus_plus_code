#include <iostream>
using namespace std;

// clear last i bits form right
int clear_last_I_bits(int n, int i) {
	int mask = (-1 << i);
	return mask & n;
}

int main() {
	int n, i;
	cin >> n >> i;
	cout << clear_last_I_bits(n, i);

	return 0;

}
