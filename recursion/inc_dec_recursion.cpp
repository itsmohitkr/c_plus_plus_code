#include<iostream>
#include<conio.h>
using namespace std;

    void dec(int n)
    {
        // base case
        if(n==0){
            return;
        }
        //rec case
        cout<<n<<" ";
        dec(n-1);
    }
      void inc(int n)
    {
        // base case
        if(n==0){
            return;
        }
        //rec case
        inc(n-1);
        cout<<n<<" ";

    }
int main()
{
    int n;
    cin>>n;
    dec(n);
    cout<<endl;
    inc(n);
    cout<<endl;
}

