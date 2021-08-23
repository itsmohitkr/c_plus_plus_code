#include <iostream>
using namespace std;
void binarysearch(int arr[],int s,int e,int key){
    if(s>e){
        cout<<"not found";
        return;
    }
    int mid=(s+e)/2;
    if(arr[mid]==key){
        cout<<arr[mid];
        return;
    }
    else if(arr[mid]>key){
        binarysearch(arr,s,mid-1,key);
    }
    else{
        binarysearch(arr,mid+1,e,key);
    }
    return;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5,6,7};
    int n = sizeof(arr) / sizeof(int);
    binarysearch(arr,0,n-1,7);
    return 0;
}
