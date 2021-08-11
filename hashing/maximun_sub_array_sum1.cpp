#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int max_sum = 0;
    int si = -1;
    int ei = -1;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int cs = 0;
            for (int k = i; k <= j; k++) {
                cs += a[k];
                // cout << a[k] << " ";
            }
            if (cs > max_sum) {
                max_sum = cs;
                si = i;
                ei = j;
            }
            // cout << endl;
        }
    }
    cout << "max_sum" << " " << max_sum << " ";
    while (si <= ei) {
        cout << a[si++] << " ";
    }
}

/*#include<iostream>
#include<conio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];

    int max_sum = 0;
    int sum = 0;

    int left = -1;
    int right = -1;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // generate sub array---O(n^3)
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            sum = 0;
            //starting from i and ending from j
            for (int k = i; k <= j; k++) {
                sum = sum + a[k];

            }
            if (sum > max_sum) {
                max_sum = sum;
                left = i;
                right = j;
            }
        }
    }
    cout << "maximum sub array sum is " << max_sum << endl;
    for (int k = left; k <= right; k++) {
        cout << a[k] << " ";
    }
    return 0;
}

*/