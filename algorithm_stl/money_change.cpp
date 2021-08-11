#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b) {
	return a <= b;
}

int main() {

	int coin[] = {1, 2, 5, 10, 20, 50, 50, 50, 100, 200, 500, 2000};
	int n = sizeof(coin) / sizeof(int);
	int money;
	cin >> money;


	while (money > 0) {

		int lb = lower_bound(coin, coin + n, money, compare) - coin - 1;

		int m = coin[lb];

		cout << m << ",";
		money = money - m;
	}
	return 0;
}