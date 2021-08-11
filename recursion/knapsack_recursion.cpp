#include<iostream>
using namespace std;
int profit(int n, int c, int wt[], int price[])
{
    if (n == 0 || c == 0) {
        return 0;
    }

    int ans = 0;
    int inc = 0;
    int exc = 0;

    // inc

    if (wt[n - 1] <= c) {
        inc = price[n - 1] + profit(n - 1, c - wt[n - 1], wt, price);
    }

    //exc

    exc = profit(n - 1, c, wt, price);

    ans = max(inc, exc);

    return ans;

}

int main()
{
    int weight[] = {1, 2, 3, 5};
    int price[] = {40, 20, 30, 100};
    int n = 4;
    int c = 7;
    cout << profit(n, c, weight, price);

}
