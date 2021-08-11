#include<iostream>
#include<conio.h>
using namespace std;
/// trailing zeros problem;
/*int trailingzero(int n)
{
    int ans=0;
    for(int d=5;n/d>=1;d=d*5){
        ans=ans+n/d;
    }return ans;
}
int main()
{
    long long int n;
    cin>>n;
    cout<<trailingzero(n);
}
*/
/// nth fibonacci nos;
/*
int fibonacci(int n){
    int a=0;
    int b=1;
    int c;
    for(int i=1;i<=n-1;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int main()
{
    int n;
    cin>>n;
    cout<<n<<"th fibonacci is "<<fibonacci(n);

}
*/
///>>>>>>>>>>>>>>>>>>>>>>>>> is prime by functin call>>>>>>>>>>>>>>>>>>>>>>
void fun(int n){
    int i;
    for(i=2;i<=n-1;i++){
        if(n%2==0){
            break;
        }
    }
    if(i==n)
        cout<<"is prime nos ";
    else
        cout<<"not a prime";
}
void upto(int n){
       for(i=1;i<=n;i++){
        if()
       }

}
int main()
{
    int n;
    cin>>n;
    fun(n);
    upto(n);
}



