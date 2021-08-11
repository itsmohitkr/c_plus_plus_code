#include <iostream>
#include<unordered_map>
using namespace std;


/*time comp-- O(n)*/
int largest_subarray_sum_K(int arr[], int n, int k) {

    unordered_map<int, int>m;
    int max_length = 0;
    int cs = 0;
    for (int i = 0; i < n; i++) {
        cs += arr[i];
        if (cs == k) {
            max_length = i + 1;
        }
        if (m.find(cs) == m.end()) {  // if current sum is not present then push to cs and i in map
            m[cs] = i;
        }
        if (m.find(cs - k) != m.end()) {
            int l = i - m[cs - k];
            max_length = max(max_length, l);
        }
    }
    return max_length;
}

int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << largest_subarray_sum_K(arr, n, k);

}