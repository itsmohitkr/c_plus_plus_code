#include <iostream>
#include <climits>
using namespace std;

int fib(int n,int dp[]){
    if(n==0 or n==1){
        return n;
    }

    // look up
    if(dp[n]!=0){
        return dp[n];
    }

    int ans = fib(n - 1, dp) + fib(n - 2, dp);
    dp[n] = ans;
    return dp[n];
}

int fib2(int n){
    int dp[1000] = {0};
    // add base to ur dp array
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n;i++){
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

int fib3(int n){
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

int minsteps(int n,int dp[]){
    // base case 
    if(n==1){
        return 0;
    }

    // look up
    if(dp[n]!=0){
        return dp[n];
    }
    // recursive case it means that dp[n] doesnt exist

    int op1, op2, op3;
    op1 = op2 = op3 = INT_MAX;

    if(n%3==0){
        op1 = minsteps(n / 3, dp) + 1;
    }
    if(n%2==0){
        op2 = minsteps(n / 2, dp) + 1;
    }
    
    op3 = minsteps(n - 1, dp) + 1;
    

    dp[n] = min(min(op1, op2), op3);
    return dp[n];
}

// bottom up approch

int min_steps(int n){
    int dp[1000] = {0};
    dp[1] = 0;
    for (int i = 2; i <= n;i++){
        int op1, op2, op3;
        op1 = op2 = op3 = INT_MAX;
        if(n%3==0){
            op1 = dp[i / 3];
        }
        if(n%2==0){
            op2 = dp[i / 2];
        }
        op3 = dp[i - 1];

        dp[i] = min(min(op1, op2), op3)+1;
    }
    return dp[n];
}

int coinchange(int n,int coins[],int T,int dp[]){
    // base case
    if(n==0)
    {
        return 0;
    }

    // lookup 
    if(dp[n]!=0){
        return dp[n];
    }

    // recursive case
    int ans = INT_MAX;
    for (int i = 2; i <= T;i++){
        if(n>=coins[i]){
            int sub_prob = coinchange(n - coins[i], coins, T, dp);
            ans = min(ans, sub_prob + 1);   
        }
    }

    // mark in dp array first

    dp[n] = ans;
    return dp[n];
}

int coin_change(int n,int coins[],int T){
    int dp[1000] = {0};

    for (int i = 1; i <= N;i++){
        dp[i] = INT_MAX;
        for (int t = 0; t <= T;t++){
            if(n>=coins[t]){
                int sub_prob = coin_change(n - coins[t], coins,T);
                dp[i] = min(dp[i], sub_prob + 1);
            }
        }
    }
    return dp[n];
}

int main(){
    int n;
    cin >> n;
    int dp[1000] = {0};
    // cout<<fib3(n);
    // cout << minsteps(n, dp);
    // cout << min_steps(n);
    int coins[] = {1, 7, 10};
    cout << coinchange(n, coins, 3, dp);
}