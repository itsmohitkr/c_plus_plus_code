#include <iostream>
using namespace std;
// method 1

int countBIts(int n)
{
	int cnt = 0;
	while (n > 0) {
		if(n&1){  // last bit is one 
			cnt++;
		}
		n = n >> 1;
	}
	return cnt;
}
// 2nd method
int countBItsfast(int n)
{
	int cnt = 0;
	while (n > 0) {
		n = n & (n - 1);
		cnt++;
	}
	return cnt;
}
int main()
{
	int n;
	cin >> n;
	cout << countBIts(n) << endl;
	cout << countBItsfast(n) << endl;
	cout << __builtin_popcount(n); 
	return 0;
}