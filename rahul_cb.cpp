#include <iostream>
using namespace std;
int search_key(int a[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    while (s <= e) {
        int mid = (s + e) / 2;
        if (a[mid] == key) {
            return mid;
        }
        else if (a[s] <= [mid] {
        //2 acses-->element lies on the left or right of the mid
        if (key >= a[s] && key <= a[mid]) {
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        else {
            if (key >= a[mid] && key <= a[e]) {
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }
        return -1;
    }
}
int main()
{
    int n, key;
    cin >> n;
    int a[100000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "enter elements for search ";
    cin >> key;
    cout << search_key(a, n, key);




    return 0;
}

