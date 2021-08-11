#include <iostream>
using namespace std;

int  search(int a[],int s,int e,int key){

    if(s>e){
        return -1;
    }
    if(a[s]==key){
        return s;
    }

    return search(a,s+1,e,key);
}
int main() {
    int a[]={1,2,3,4,5,10,10,10,20};
    int n=sizeof(a)/sizeof(int);
    int x;
    cin>>x;
    int ans=search(a,0,n-1,x);

    (ans==-1)?cout<<"not present":cout<<ans;

    return 0;
}
