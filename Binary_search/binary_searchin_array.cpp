#include<iostream>

using namespace std;

// binary search works for sorted array.

int binary_search(int a[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    while (s <= e) {
        int mid = (s + e) / 2;
        if (a[mid] == key)
            return mid;
        else if (a[mid] > key)
            e = mid - 1;
        else
            s = mid + 1;
    }
    return 0;
}
int main()
{
    int n, key;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "enter elements for search ";
    cin >> key;
    cout << binary_search(a, n, key);
    return 0;
}
