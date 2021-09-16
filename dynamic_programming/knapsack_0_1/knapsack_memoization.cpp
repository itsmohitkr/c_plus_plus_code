#include<iostream>
#include<cstring>
using namespace std;

int t[101][101];
int profit(int n, int c, int wt[], int val[])
{   
    // base case
    if (n == 0 || c == 0) {
        return 0;
    }
    
    // look up
    if(t[n][c]!=-1){
        return t[n][c];
    }
    // choice diagram
    if (wt[n - 1] <= c) {
        return t[n][c]=max(val[n - 1] + profit(n - 1, c - wt[n - 1], wt, val),
        0 + profit(n - 1, c, wt, val));
    }

    else{
        return t[n][c]=0 + profit(n - 1, c, wt, val);
    }

    return 0;
}

int main()
{
    int weight[] = {1, 2, 3, 5};
    int val[] = {40, 20, 30, 100};
    int n = 4;
    int c = 7;
    memset(t, -1, sizeof(t));
    cout << profit(n, c, weight, val);

}
