#include <iostream>
using namespace std;
// bubble sort recursively
void bubble_sort(int a[], int n)
{
    if (n == 1) {
        return;
    }
    // One pass of bubble sort. After
    // this pass, the largest element
    // is moved (or bubbled) to end.
    for (int j = 0; j < n - 1; j++) { // j tells at what index we are swapping operations
        if (a[j] > a[j + 1]) {
            swap(a[j], a[j + 1]);
        }
    }

    // Largest element is fixed,
    // recur for remaining array
    //sort the 1st n-1 line
    bubble_sort(a, n - 1);

}

// bubble sort completely recursive
void bubble_sort_recursive(int a[], int j, int n)
{
    //base case
    if (n == 1) {
        return;
    }
    if (j = n - 1) {
        //single pass of the current element has been done
        return bubble_sort_recursive(a, 0, n - 1);
    }
    //rec case
    if (a[j] > a[j + 1]) {
        swap(a[j], a[j + 1]);
    }
    bubble_sort_recursive(a, j + 1, n);
    return;
}



int main()
{
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bubble_sort(a, n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}


