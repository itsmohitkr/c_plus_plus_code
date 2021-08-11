#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int a=10;
    int b=20;
    swap(a,b);   //simply swap two nos
    cout<<a<<"and "<<b<<endl;

    cout<<max(a,b)<<endl;    // compare  nos
    cout<<min(a,b)<<endl;

    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    reverse(arr,arr+3); // reverse 1st 3 element;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    swap(arr[0],arr[3]);  // swap element of 0 and 3
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    next_permutation(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
