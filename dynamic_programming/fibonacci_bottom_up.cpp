#include <iostream>
using namespace std;

// 3. fib bottom up approch
int fib(int n){
    int dp[100] = {0};
    dp[1] = 1;

    for (int i = 2; i <=n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

// 4. fib bottom up approch with space optimisation
int fib_Space_Opt(int n){
    if(n==0 and n==1){
        return n;
    }
    int a = 0;
    int b = 1;
    int c;

    for (int i = 2; i <= n;i++){
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}
int main(){
    //code here
    int n;
    cin >> n;
    // cout << fib(n) << endl;
    cout << fib_Space_Opt(n) << endl;
}