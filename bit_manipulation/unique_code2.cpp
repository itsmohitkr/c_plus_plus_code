#include <iostream>
using namespace std;
int main()
{
	int n;
	int a[100005];   // constraint 10^5;
	cin >> n;

	int no;
	int result = 0;

	for (int i = 0; i < n; ++i)
	{
		cin >> no;
		a[i] = no;
		result = result ^ no;
	}

	//result=a^b
	int temp = result;
	int pos = 0;
	while ((temp & 1) != 1) {

		temp = temp >> 1;
		pos++;

	}

	//the first bit in result is at position 'position'
	int mask = (1 << pos);

	// find those nos which contain set bit at position pos
	int x = 0;
	int y = 0;
	for (int i = 0; i < n; ++i)
	{
		if ((a[i]&mask) > 0) {
			x = x ^ a[i];

		}
	}
	y = result ^ x;
	cout << min(x, y) << " " << max(x, y);
	return 0;

}