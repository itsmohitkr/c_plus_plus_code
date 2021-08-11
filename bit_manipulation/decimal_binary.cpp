#include <iostream>
using namespace std;

int decimalTObinary(int n)
{
	int ans = 0;
	int pwr = 1;
	while (n > 0) {
		int last_bit = (n & 1);
		ans = ans + pwr * last_bit;
		pwr = pwr * 10;
		n = n >> 1;
	}
	return ans;
}
int main()
{
	int n;
	cin >> n;
	cout << decimalTObinary(n) << endl;
	return 0;
}