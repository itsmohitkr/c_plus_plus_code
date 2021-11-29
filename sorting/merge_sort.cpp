#include <iostream>
using namespace std;
//https://www.youtube.com/watch?v=aDX3MFL0tYs

void merge(int a[], int s, int e)
{

    int mid = (s + e) / 2;
    int i = s;       // we have keep two pointer i and j
    int j = mid + 1;
    int k = s;  // k-pointing to the start of the temp array
    int temp[1000];// making temporary array

    while (i <= mid && j <= e) {
        if (a[i] < a[j]) {
            temp[k] = a[i];
            k++;
            i++;
        }
        else {
            temp[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid) {
        temp[k] = a[i];
        k++;
        i++;
    }
    while (j <= e) {
        temp[k] = a[j];
        k++;
        j++;
    }
    // now we need to copy all the element to original arrays
    for (int i = s; i <= e; i++) {
        a[i] = temp[i];
    }

}
void mergesort(int a[], int s, int e)
{
    //base case..-1 or 0 elements

    if (s >= e) {   // when s==e then only there is one element
        return;
    }
    // follow 3 steps

    // 1.divide
    int mid = (s + e) / 2;

    // 2.recursively two arrays -(s,mid) and (mid+1,e)
 
    mergesort(a, s, mid);
    mergesort(a, mid + 1, e);

    //merge two parts
    // merge function ka keval ye kaam hai ki do sorted array ko merge karga result should be a sorted array
    merge(a, s, e);
}
int main()
{
    int a[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    mergesort(a, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
