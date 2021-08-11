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
    // o(n*n)
    for (int i = 0; i < n; i++) {
        int cs = 0;
        for (int j = i; j < n; j++) {
            cs += a[j];
            if (cs > max_sum) {
                max_sum = cs;
                si = i;
                ei = j;
            }
        }
    }
    cout << "max_sum" << " " << max_sum << " -> ";
    while (si <= ei) {
        cout << a[si++] << ",";
    }

}



/*#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[1000];

    int cumSum[1000] = {0};

    int max_sum = 0;
    int sum = 0;

    int left = -1;
    int right = -1;

    cin >> a[0];
    cumSum[0] = a[0];

    for (int i = 1; i < n; i++) {
        cin >> a[i];
        cumSum[i] = cumSum[i - 1] + a[i];
    }

    // generate sub array-- O(n*n)

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            sum = 0;
            sum = cumSum[j] - cumSum[i - 1];
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