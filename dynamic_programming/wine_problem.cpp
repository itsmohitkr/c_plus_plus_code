#include <iostream>
using namespace std;

int profit(int wines[],int i,int j,int year,int dp[][100]){
    // base case

    if(i>j){
        return 0;
    }

    // lookup
    if(dp[i][j]!=0){
        return dp[i][j];
    }

    int op1 = wines[i] * year + profit(wines, i + 1, j, year + 1, dp);
    int op2 = wines[j] * year + profit(wines, i, j - 1, year + 1, dp);
    return dp[i][j]=max(op1, op2);
}
int main(){
    int dp[100][100] = {0};
    int wines[] = {2, 3, 5, 1, 4};
    int n = sizeof(wines) / sizeof(int);
    int year = 1;
    cout << profit(wines, 0, n - 1, year, dp);
    return 0;
}