#include <iostream>
#include<climits>
using namespace std;

int mincoinsBU(int N,int coins[],int T){
    int dp[100] = {0};

    // iterate over all states 1... N

    for (int i = 1; i <= N;i++){
        // init the current ans as int max;
        dp[i] = INT_MAX;
        for (int t = 0; t < T;t++){
            if(i-coins[t]>=0){
                int subproblem = dp[i - coins[t]];
                dp[i] = min(dp[i], subproblem + 1);
            }
        }
    }
    return dp[N];
}

int main(){

    int N=15;
    int coins[] = {1, 7, 10};
    cout << mincoinsBU(N, coins, 3);
    return 0;
}