#include<iostream>
using namespace std;
int f(int n)
{
    //base case
    if(n==0 || n==1){
        return n;
    }
    //recursive case

    int f1=f(n-1);
    int f2=f(n-2);
    return f1+f2;
}
int main()
{
    int n;
    cin>>n;
    cout<<n<<" nth term of fibonacci series is "<<f(n);
}

