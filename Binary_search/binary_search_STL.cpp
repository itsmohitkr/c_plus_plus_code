#include <iostream>
#include <algorithm>
using namespace std;
    
int main(){
    int arr[] = {1, 2, 3, 4, 4, 4, 5, 10, 10};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;
    // binary search stl
    bool present = binary_search(arr, arr + n, key);
    if(present){
        cout << "present" << endl;
    }
    else{
        cout << "absent!" << endl;
    }

    // upper bound and lower bound

    auto lb = lower_bound(arr, arr + n, key);  // gives nos >= key
    cout << "lb of key is " << lb - arr << endl;

    auto ub = upper_bound(arr, arr + n, key); // gives nos > key
    cout << "ub of key is " << ub - arr << endl;

    cout << "first index of key = " << lb - arr <<endl
         << "and last index of key = " << ub - arr - 1 << endl;
    // frequency of key

    cout << "occurences of key = " << ub - lb << endl;
}