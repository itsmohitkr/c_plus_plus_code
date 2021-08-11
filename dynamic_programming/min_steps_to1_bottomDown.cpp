#include <iostream>
#include<climits>
using namespace std;
    
int minSteps(int n){
    int dp[100] = {0};
    dp[1] = 0;
    for (int i = 2 ; i <=n; i++){
        int opt1, opt2, opt3;
        opt1 = opt2 = opt3 = INT_MAX;
        if(n%3==0){
            opt1 = dp[i / 3];
        }
        if(n%2==0){
            opt2 = dp[i / 2];
        }
        opt3 = dp[i - 1];
        dp[i] = min(min(opt1, opt2), opt3)+1;
    }

    return dp[n];
}
int main(){
    int n;
    cin >> n;
    cout << minSteps(n);
}