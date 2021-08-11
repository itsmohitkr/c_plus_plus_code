#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);
    rotate(arr, arr + 2, arr + n);

    /*-------
      */
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // apply the same on the vector

    vector<int>v{1, 2, 3};
    next_permutation(v.begin(), v.end()); //gives next nos which is greater than 123->132->213
    //rotate(v.begin(),v.begin()+2,v.end());
    for (int i = 0; i < 3; i++) {
        cout << v[i] << " ";
    }
}
