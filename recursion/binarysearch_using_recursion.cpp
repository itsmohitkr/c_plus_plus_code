#include <iostream>
using namespace std;

int  binarsearch(int a[], int s, int e, int key) {

    if (s <= e)
    {
        int mid = (s + e) / 2;

        if (a[mid] == key) {
            return mid;
        }

        if (a[mid] > key) {
            return binarsearch(a, s, mid - 1, key);
        }

        else {
            return binarsearch(a, mid + 1, e, key);
        }
    }
    return -1;
}
int main() {
    int a[] = {1, 2, 3, 4, 5, 10, 20};
    int n = sizeof(a) / sizeof(int);
    int x;
    cin >> x;
    int ans = binarsearch(a, 0, n - 1, x);

    (ans == -1) ? cout << "not present" : cout << ans;

    return 0;
}
