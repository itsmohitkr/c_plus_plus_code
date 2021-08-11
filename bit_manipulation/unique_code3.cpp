#include <iostream>
using namespace std;
int main()
{	// arary of fixed size o(1)space
	int cnt[64] = {0};
	int n, no;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> no;
		// update the count array by extracting bits
		int j = 0;
		while (no > 0) {
			int last_bit = (no & 1);
			cnt[j] = cnt[j] + last_bit;
			no = no >> 1;
			j++;
		}
	}
	// iterate over the array and form the answer by converting 0s and 1s into a nos
	int p = 1;
	int ans = 0;
	for (int i = 0; i < 64; ++i)
	{
		cnt[i] %= 3;
		// convert to decimal
		ans = ans + (cnt[i] * p);
		p = p * 2;
	}

	// print the final ans
	cout << ans << endl;
}