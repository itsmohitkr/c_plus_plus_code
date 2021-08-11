#include <iostream>
#include<queue>
using namespace std;


int kth_smallest_element(int arr[], int n, int k) {
    priority_queue<int, vector<int>, greater<int>> minheap(arr, arr + n);

    for (int i = 1; i < k; i++)
    {
        minheap.pop();
    }

    return minheap.top();

}
int kth_largest_element(int arr[], int n, int k) {
    priority_queue<int> maxheap(arr, arr + n);

    for (int i = 1; i < k; i++)
    {
        maxheap.pop();
    }

    return maxheap.top();
}

int main() {
    //code here
    int arr[] = {4, 3, 2, 7, 8, 9};
    int n = sizeof(arr) / sizeof(int);
    int k;
    cin >> k;
    cout << kth_smallest_element(arr, n, k);
    cout << endl;
    cout << kth_largest_element(arr, n, k);
}