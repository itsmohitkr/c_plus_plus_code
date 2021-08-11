#include <iostream>
using namespace std;

// 1. recursive approch O(2^n)
int fib(int n){
	//base case
	if(n==0 or n==1){
		return n;
	}
	int ans;
	ans = fib(n - 1) + fib(n - 2);
	return ans;
}

// 2. top down approch O(N)

int fib(int n, int dp[]) {
	// base case
	if (n == 0 or n == 1) {
		return n;
	}
	// recur case
	// look up
	if (dp[n] != 0) {
		return dp[n];
	}
	int ans;
	ans = fib(n - 1, dp) + fib(n - 2, dp);

	return dp[n] = ans;
}

int main() {
	int n;
	cin >> n;
	int dp[100000] = {0};
	cout << fib(n, dp) << endl;
}