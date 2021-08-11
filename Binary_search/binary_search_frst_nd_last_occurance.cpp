#include <iostream>
using namespace std;
int first_occurance(int a[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while (s <= e) {
        int mid = (s + e) / 2;
        if (a[mid] == key) {
            //do two things,
            ans = mid;
            e = mid - 1; //dont stop but explore to the left parts of the array
        }
        else if (a[mid] > key)
            e = mid - 1;
        else
            s = mid + 1;
    }
    return ans;
}
int last_occurance(int a[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while (s <= e) {
        int mid = (s + e) / 2;
        if (a[mid] == key) {
            //do two things,
            ans = mid;
            s = mid + 1; //dont stop but explore to the right parts of the array
        }
        else if (a[mid] > key)
            e = mid - 1;
        else
            s = mid + 1;
    }
    return ans;
}
int main()
{
    int n, key;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "enter elements for search ";
    cin >> key;

    // first and the last occurance
    cout << "firts occurance " << first_occurance(a, n, key) << endl;
    cout << "last occurance " << last_occurance(a, n, key) << endl;
    return 0;
}

