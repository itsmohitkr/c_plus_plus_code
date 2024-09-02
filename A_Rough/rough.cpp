#include <iostream>
using namespace std;

int fact(int n){
    if(n==1 || n==0){
        return 1;
    }

    int subprob = fact(n - 1);
    return n * subprob;
}

int fib(int n){
    if(n==0 || n==1){
        return n;
    }

    return fib(n - 1) + fib(n - 2);
}

void inc(int n){
    if(n==0){
        return;
    }
    inc(n-1);
    cout << n << " ";

    return;
}

bool isSorted(int arr[],int n){
    if(n==0 || n==1){
        return true; // array of one element will always be sorted
    }

    if(arr[0]<arr[1] && isSorted(arr+1,n-1)){
        return true;
    }
    return false;
}

int binarySearch(int arr[], int s,int e,int key){
    if(s<=e){
        int mid = (s + e) / 2;
        if(arr[mid]==key){
            return mid;
        }
        if(key<arr[mid]){
            return binarySearch(arr, s, mid - 1,key);
        }
        else{
            return binarySearch(arr, mid + 1, e,key);
        }
    }
    else{
        return -1;
    }
}

int pow_func(int a,int n){
    if(n==0){
        return 1;
    }

    return a * pow_func(a, n - 1);
}

int mul(int a,int b){
    if(b==0){
        return 0;
    }
    return a + mul(a, b - 1);
}

int firstOcc(int arr[],int s,int e,int key){
    if (s > e)
    {
        return -1;
    }
    if (arr[s] == key)
    {
        return s;
    }
    return firstOcc(arr, s + 1, e, key);
}

int lastOcc(int arr[], int s, int e, int key)
{
    if (s > e)
    {
        return -1;
    }
    if (arr[e] == key)
    {
        return e;
    }
    return lastOcc(arr, s, e - 1, key);
}

void all_occurances(int a[], int i, int n, int key)
{
    if (i == n)
    {
        return;
    }
    if (a[i] == key)
    {
        cout << i << " ";
    }
    all_occurances(a, i + 1, n, key);
}

int fastpower(int a,int n){
    if(n==0){
        return 1;
    }

    if(n%2==0){
        return pow(fastpower(a, n / 2), 2);
    }
    else{
        return a * pow(fastpower(a, n / 2), 2);
    }
}

void bubbleSort(int arr[],int n){
    if(n==1){
        return;
    }
    // pick one element from the front and bring it to the last
    for (int j = 0; j < n-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j], arr[j + 1]);
        }
    }
    bubbleSort(arr, n - 1);
    
}

void merge(int arr[],int s, int e){
    int mid = (s + e) / 1;
    int i = s;
    int j = mid + 1;
    int k = s;
    int temp[1000];

    while(i<=mid && j<=e){
        if(arr[i]<arr[j]){
            temp[k] = arr[i];
            i++;
            k++;
        }
        else{
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        temp[k] = a[i];
        k++;
        i++;
    }
    while (j <= e)
    {
        temp[k] = a[j];
        k++;
        j++;
    }

    for (int i = s; i <= e; i++)
    {
        a[i] = temp[i];
    }
}

void mergeSort(int arr[], int s, int e){
    if(s>=e){
        return;
    }

    int mid = (s + e) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);

    merge(arr, s, e);
}

int main()
{
    int arr[] = {5, 4, 3, 1};
    int n = sizeof(arr) / sizeof(int);

    bubbleSort(arr, n);

    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}