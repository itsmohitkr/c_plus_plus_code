#include <iostream>
#include<unordered_map>
using namespace std;

int unoptimize_largest_subarray(int arr[], int n) {
    int max_length = 0;
    for (int i = 0; i < n; i++) {
        int cs = 0;
        for (int j = i; j < n; j++) {
            cs += arr[i];
            if (cs == 0) {
                max_length = max(max_length, j - i + 1)
            }
        }
    }
    return max_length;
}

/*time comp-- O(n)*/
int largest_subarray(int arr[], int n) {

    unordered_map<int, int>m;
    int max_length = 0;
    int cs = 0;
    for (int i = 0; i < n; i++) {
        cs += arr[i];
        if (cs == 0) {
            max_length = i + 1;
        }
        else if (m.find(cs) != m.end()) {
            int l = i - m[cs];
            max_length = max(max_length, l);
        }
        else {
            m[cs] = i;
        }
    }
    return max_length;
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << largest_subarray(arr, n);

}