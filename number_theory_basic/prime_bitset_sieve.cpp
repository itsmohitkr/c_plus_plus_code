#include <iostream>
#include<bitset>
#include<vector>
using namespace std;


const int n = 10000000;
bitset<1000005>b;
vector<int> primes;

void sieve() {

	// set all bits
	b.set(); // 1,1,1,1,1,


	b[0] = b[1] = 0;


	for (long long int i = 2; i <= n; i++) {

		if (b[i]) {
			primes.push_back(i);
			for (long long int j = i * i; j <= n; j = j + i) {
				b[j] = 0;
			}
		}
	}
}
bool isprime(long long int No) {
	if (No <= n) {
		return b[No] == 1 ? true : false;
	}
	for (long long int i = 0; primes[i] * (long long)primes[i] <= No; i++) {
		if (No % primes[i] == 0) {
			return false;
		}
	}
	return true;
}
int main()
{
	sieve();
	//7632577261 large prime nos
	if (isprime(7632577261)) {
		cout << "it is prime";
	}
	else {
		cout << "no it is prime ";
	}
	return 0;
}