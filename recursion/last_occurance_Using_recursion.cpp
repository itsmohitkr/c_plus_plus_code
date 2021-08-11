#include <iostream>
using namespace std;

int  last_occurance(int a[],int s,int e,int key){

    if(s>e){
        return -1;
    }
    if(a[e]==key){
        return e;
    }

    return last_occurance(a,s,e-1,key);
}
int main() {
    int a[]={1,2,3,4,5,10,10,10,20,10,5,6};
    int n=sizeof(a)/sizeof(int);

    int x;
    cin>>x;
    int ans=last_occurance(a,0,n-1,x);

    (ans==-1)?cout<<"not present":cout<<ans;

    return 0;
}
