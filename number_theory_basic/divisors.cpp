#include <iostream>
using namespace std;
#include<vector>
vector<int> prime_sieve(int *p, int n) {

//special case
	p[2] = 1;
	p[1] = p[0] = 0;
	//first mark all odd nos as prime(initialization)

	for (int i = 3; i <= n; i = i + 2)
	{
		p[i] = 1; // potential prime nos
	}
	//seive login to mark all non prime nos as o
	//1. optimisation : iterate only over odd nos

	for (int i = 3; i <= n; i = i + 2) {
		// if current nos is not marked (it  is prime)
		if (p[i]) {
			//mark all multiple of that nos as not prime
			//2. optimasition takes a jump of 2i starting from i*i

			for (int j = i * i; j <= n; j = j + 2 * i) {
				p[j] = 0;
			}
		}
	}
	vector<int> primes;
	primes.push_back(2);
	for (int i = 3; i <= n; i += 2)
	{
		if (p[i] == 1)
		{
			primes.push_back(i);
		}
	}
	return primes;
}

int no_of_divisors(int m, vector<int> &primes) {


	int i = 0; //the first prime nos is at 0th index
	int p = primes[0];// store prime nos of 0th index to p variable
	int ans = 1;
	while (p * p <= m) {
		if (m % p == 0) {
			int cnt = 0;
			while (m % p == 0) {
				cnt++;
				m = m / p;
			}
			ans = ans * (cnt + 1);
		}
		// go to next position
		i++;
		p = primes[i];
	}
	if (m != 1) {
		ans = ans * 2;

	}
	return ans;


}
int main()
{	int N = 1000000;
	int p[N];
	for (int i = 0; i < N; i++) {
		p[i] = 0;
	}
	vector<int> primes = prime_sieve(p, 10000);

	int t;
	cin >> t;
	while (t--) {
		int no;
		cin >> no;
		int divs = no_of_divisors(no, primes);
		cout << divs << endl;
	}
	return 0;
}