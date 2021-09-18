#include<iostream>
using namespace std;

int t[101][101];
int max_ways_toMake_sum(int n, int coins[],int sum)
{   
    // base case
    for (int i = 0; i < n + 1;i++){
        for (int j = 0; j < sum + 1;j++){
            if(i==0){
                t[i][j] = 0;
            }
            else if(i>0 and j==0){
                t[i][j] = 1;
            }
        }
    }

    // rec case
    for (int i = 1; i < n + 1;i++){
        for (int j = 1; j < sum + 1;j++){ // sum 
            if(coins[i-1]<=j){
                t[i][j] = t[i][j - coins[i - 1]] + t[i - 1][j];
            }
            else{
                t[i][j] = t[i - 1][j];
            }
        }
    }

    for (int i = 0; i < n+1; i++){
        for (int j = 0; j < sum+1;j++){
            cout << t[i][j] << " ";
        }
        cout << endl;
    }

    return t[n][sum];
}

int main()
{
    int coins[] = {1,2,3}; 
    int n = sizeof(coins) / sizeof(int); // size of price arra
    int sum = 5;
    cout << max_ways_toMake_sum(n, coins,sum);
}
