#include<iostream>
#include<conio.h>

#include <math.h>
using namespace std;

// O(N)--approch
int power(int a, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return a * power(a, n - 1);
}
int fast_power(int a, int n) // this is more efficient way--- 0(logn)
{
    // base case
    if (n == 0) {
        return 1;
    }

    if (n % 2 == 0) {
        return pow(fast_power(a, n / 2), 2);
    }
    else{
        return a * pow(fast_power(a, n / 2), 2);
    }
}
int main()
{
    int a, n;
    cin >> a >> n;
    cout << power(a, n) << endl;
    cout << fast_power(a, n);
    return 0;
}
