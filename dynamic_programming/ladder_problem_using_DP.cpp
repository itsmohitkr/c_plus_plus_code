#include<iostream>
using namespace std;

// top down approch
int ladder_topDown(int n, int k,int dp[])
{
    // base case
    if (n == 0) {
        return 1;
    }
    if (n < 0) {
        return 0;
    }
    // look up
    if(dp[n]!=0){
        return dp[n];
    }
    int ans = 0;
    for (int i = 1; i <= k; i++) {
        ans = ans + ladder_topDown(n - i, k, dp);
    }
    dp[n] = ans;
    return dp[n];
}

// bottom up approch
int ladder_bottomUp(int n,int k){

    int dp[1000] = {0};
    dp[0] = 1; // base case

    for (int i = 1; i <=n;i++){
        dp[i] = 0;
        for (int j = i-1; j >=(i - k); j--){
            if(j>=0){
                dp[i] += dp[j];
            }
        }
    }

    for (int i = 0; i <= n;i++){
        cout << dp[i] << " ";
    }
    cout << endl;
    return dp[n];
}

// O(N) and space optimised

int ladder_space_opt(int n,int k){
    int dp[1000] = {0};
    dp[0] = dp[1] = 1;

    for (int i = 2; i <= k;i++){
        dp[i] = 2 * dp[i - 1];
    }

    for (int i = k + 1; i <= n;i++){
        dp[i] = 2 * dp[i - 1] - dp[n-k-1];
    }

    return dp[n];
}

int main()
{
    int n, k; // k is maximum jump can take.
    int dp[1000] = {0};
    cin >> n >> k;
    // cout << ladder_topDown(n, k, dp);
    // cout << ladder_bottomUp(n, k);
    cout << ladder_space_opt(n, k);
}
