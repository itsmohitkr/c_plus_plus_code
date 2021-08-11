#include<iostream>
using namespace std;

/* here we dont use any storage */
int main() {
	int n;
	cin >> n;
	int no;
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> no;
		ans = ans ^ no;
	}
	cout << ans << endl;
	return 0;
}