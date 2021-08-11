#include<iostream>
using namespace std;

int Partition(int arr[], int s, int e) {

    int pivot = arr[e];
    int p_index = s;
    for (int i = s; i < e; i++) {
        if (arr[i] <= pivot) {
            swap(arr[i], arr[p_index]);
            p_index++;
        }
    }
    swap(arr[p_index], arr[e]);
    return p_index;
}

void quick_Sort(int arr[], int s, int e) {
    if (s >= e) {
        return;
    }
    int p_index = Partition(arr, s, e);
    quick_Sort(arr, s, p_index - 1);
    quick_Sort(arr, p_index + 1, e);

}

int main() {
    int arr[] = {6, 4, 2, 8, 9, 0, 1, 5};
    int n = sizeof(arr) / sizeof(int);
    quick_Sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}