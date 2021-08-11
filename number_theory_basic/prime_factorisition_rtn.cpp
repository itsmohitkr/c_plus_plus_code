#include <iostream>
#include<vector>
using namespace std;


void printfactors(int n) {
	vector<pair<int, int>>factors;
	int cnt; // occuring of prime nos

	for (int i = 2; i * i <= n; ++i) {

		if (n % i == 0) {
			// keep on dividing it by i till it is divisible
			cnt = 0;
			while (n % i == 0) {
				cnt++;
				n = n / i;
			}
			factors.push_back(make_pair(i, cnt));
		}

	}
	if (n != 1) {
		//whataver is left is prime nos in itself
		factors.push_back(make_pair(n, 1));

	}
	//print the factors
	for (auto p : factors)
		cout << p.first << "^" << p.second << endl;
}



int main() {
	int n;
	cin >> n;

	printfactors(n);
	return 0;
}