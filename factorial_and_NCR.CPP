#include<iostream>
#include<conio.h>
using namespace std;
int factorial(int n)
{
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}
int NCR(int n,int r )
{
    int ans=factorial(n)/factorial(n-r)*factorial(r);
    return ans;
}
int main()
{
    int n,r;
    cin>>n>>r;
    cout<<"factorial is "<<factorial(n)<<endl;
    cout<<"NCR is "<<NCR(n,r)<<endl;
    return 0;
}
