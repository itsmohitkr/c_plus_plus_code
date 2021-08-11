#include<iostream>
#include<algorithm>
#include<ctime>
using namespace std;
void bubble_sort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i;j<((n-i)-1);j++){
            if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
            }
        }
    }
}


int main()
{
    int n;
    cin>>n;
    int a[10000];

    for(int i=0;i<n;i++){
        a[i]=n-i;
    }
    // bubble sort
    time_t start=clock();   // time_t is a  data type
    bubble_sort(a,n);
    time_t ends=clock();

    cout<<"bubble sort took ="<<ends-start<<endl;
    for(int i=0;i<n;i++){
        a[i]=n-i;
    }
     // merge sort
    start=clock();
    sort(a,a+n);
    ends=clock();
    cout<<"merge sort took =0"<<ends-start<<endl;
    return 0;
}


