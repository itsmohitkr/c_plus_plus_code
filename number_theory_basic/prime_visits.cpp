#include <iostream>
using namespace std;
#define ll long long
// naive approch
bool isprime(int n) {
	if (n == 1) {
		return false;
	}
	if (n == 2) {
		return true;
	}
	for (int i = 2; i * i < n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

// seive approch -generate a array containing prime nos
void prime_sieve(int *p) {
	//first mark all odd nos as prime
	for (int i = 3; i <= 1000000; i = i + 2)
	{
		p[i] = 1;
	}
	//seive
	for (ll i = 3; i <= 1000000; i = i + 2) {
		// if current nos is not marked (it prime)
		if (p[i] == 1) {
			//mark all multiple of i as not prime
			for (ll j = i * i; j <= 1000000; j = j + i) {
				p[j] = 0;
			}
		}
	}
	//special case
	p[2] = 1;
	p[1] = p[0] = 0;
}

int main()
{
	int p[1000005] = {0};
	prime_sieve(p);
	int csum[1000005] = {0};
	// pre compute the prime nos upto an index

	for (int i = 1; i <= 1000000; i++) {
		csum[i] = csum[i - 1] + p[i];

	}

	int q;
	cin >> q;
	while (q--) {
		int a, b;
		cin >> a >> b;
		cout << csum[b] - csum[a - 1] << endl;
	}
	return 0;
}