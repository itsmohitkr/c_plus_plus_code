#include <iostream>
#include <climits>
using namespace std;
// recursive sol
int max_profit(int price[],int n){
    // base case

    if(n==0){
        return 0;
    }
    int ans = INT_MIN;
    // rec case

    for (int i = 0; i < n;i++){
        int cut_length = i + 1;
        int current_profit = price[i] + max_profit(price, n - cut_length);
        ans = max(ans, current_profit);
    }
    return ans;
}

// recursion + memoimsation
int max_profitII(int price[],int n,int dp[]){
    // base case

    if(n==0){
        return 0;
    }
    int ans = INT_MIN;
    // rec case
    if(dp[n]!=0){
        return dp[n];
    }
    for (int i = 0; i < n;i++){
        int cut_length = i + 1;
        int current_profit = price[i] + max_profitII(price, n - cut_length,dp);
        ans = max(ans, current_profit);
    }
    dp[n] = ans;
    return dp[n];
}

// bottom up approch
int max_profit_dp(int price[],int n){
    int dp[n+1];
    dp[0] = 0;

    for (int len = 1; len <= n;len++){
        
        int ans = INT_MIN;
        for (int i = 0; i < len;i++){
            int cut_length = i + 1;
            int current_profit = price[i] + dp[len - cut_length];
            ans = max(ans, current_profit);
        }
        dp[len] = ans;
    }
    return dp[n];
}

int main(){
    int price[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int n = sizeof(price) / sizeof(int); // rod length
    int dp[1000] = {0};
    cout << max_profit(price, n) << endl;
    cout << max_profitII(price, n,dp) << endl;
    cout << max_profit_dp(price, n) << endl;
}