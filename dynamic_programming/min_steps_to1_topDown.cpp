//https://www.geeksforgeeks.org/minimum-steps-minimize-n-per-given-condition/

#include<iostream>
#include<climits>
using namespace std;

// n-> n/3,n/2,n-1
int minSteps(int n,int dp[]){
    // base case , if reach 1 means you need 0 step to reach 1
    if(n==1){
        return 0;
    }
    // rec case
    // lookup if n is already computed
    if(dp[n]!=0){
        return dp[n];
    }

    // compute if dp[n] is not known

    int opt1, opt2, opt3; // these options is not valid for all n
    opt1 = opt2 = opt3 = INT_MAX;

    if(n%3==0){
        opt1 = minSteps(n / 3, dp);
    }
    if(n%2==0){
        opt2 = minSteps(n / 2, dp);
    }
    opt3 = minSteps(n-1, dp);
    int ans = min(min(opt1, opt2), opt3)+1;
    return dp[n] = ans;
}

int main(){
    int n;
    cin >> n;
    int dp[1000] = {0};
    cout << minSteps(n, dp);
}