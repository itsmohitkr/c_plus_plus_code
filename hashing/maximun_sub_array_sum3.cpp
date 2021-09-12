#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[1000];

    int cs = 0;
    int ms = INT_MIN;


    for (int i = 0; i < n; i++) {
        cin >> a[i];

    }
    
    // kadanes algorithm for maximum subarray-- O(n)-- best approch
    // you would have to check for separate for all -ve elements of array

    for (int i = 0; i < n; i++) {
        cs = cs + a[i];

        if (cs < 0) {
            cs = 0;
        }
        ms = max(cs, ms);
    }

    cout << "maximum sub array sum is " << ms << endl;

    return 0;
}

