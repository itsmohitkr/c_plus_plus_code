#include <iostream>
#include<unordered_set>
using namespace std;


// method 2 using unordered_map
/*
bool check_subarray(int arr[], int n) {
    unordered_map<int, bool> m;
    int cs = 0; // cumulative sum=0
    for (int i = 0; i < n; i++) {
        cs += arr[i];

        // check
        if (cs == 0 or m[cs] == true) {
            return true;
        }
        m[cs] = true;
    }
    return false;
}*/

bool check_subarray(int arr[], int n) {

    unordered_set<int>s;
    int cs = 0;

    for (int i = 0; i < n; i++) {
        cs += arr[i];

        // check if the sum was already present in the set
        // s.find(cs) is returning something that is not equal to s.end()-- then its is true

        if (cs == 0 or s.find(cs) != s.end()) {
            return true;
        }
        // else insert to s
        s.insert(cs);
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (check_subarray(arr, n)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}