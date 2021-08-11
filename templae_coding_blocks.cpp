#include<iostream>
#include<conio.h>
using namespace std;
template<typename t>
t search(t a[],int n,t key)  // generic function-->>freedom from all kind of data types
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
            return i;
    }

    return n;
}
int main()
{
    int a[]={10,20,30,40,50,66,77};
    int n=sizeof(a)/sizeof(int);
    int key=55;
    cout<<search(a,n,key);
}
