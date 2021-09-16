#include<iostream>
#include<cstring>
using namespace std;

int t[101][101];
int profit(int n, int c, int wt[], int val[])
{   
    // base case
    for (int i = 0; i < n + 1;i++){
        for (int j = 0; j < c + 1;j++){
            if(i==0 || j==0){
                t[i][j] = 0;
            }
        }
    }

    // rec case

    for (int i = 1; i < n + 1;i++){
        for (int j = 1; j < c + 1;j++){
            if(wt[i-1]<=j){
                t[i][j] = max(val[i - 1] + t[i - 1][j - wt[i - 1]], t[i - 1][j]);
            }
            else{
                t[i][j] = t[i - 1][j];
            }
        }
    }

    return t[n][c];
}

int main()
{
    int weight[] = {1, 2, 3, 5};
    int val[] = {40, 20, 30, 100};
    int n = 4;
    int c = 7;
    cout << profit(n, c, weight, val);

}
