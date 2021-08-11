#include <iostream>
#include<climits>
using namespace std;

int mincoins(int n,int coins[],int T,int dp[]){
    // base case
    if(n==0){
        return 0;
    }
    // look up
    if(dp[n]!=0){
        return dp[n];
    }

    //recursive case -- for all other case you have to make change
    int ans = INT_MAX;
    for (int i = 0; i < T; i++){
        if(n-coins[i]>=0){ // you can not pick coins of size bigger than n
            int subProblems = mincoins(n - coins[i], coins, T, dp);
            ans = min(ans, subProblems+1);
        }
    }
    dp[n] = ans;
    return dp[n];
}

int main(){

    int n=15;
    int coins[] = {1, 7, 10};
    int dp[100] = {0};
    cout << mincoins(n, coins, 3, dp);
    return 0;
}