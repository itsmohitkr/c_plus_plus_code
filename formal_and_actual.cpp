#include<iostream>
using namespace std;
void fun( int,int);
main()
{
    int a,b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    fun(a,b);
}
void fun(int x,int y)
{


    cout<<x+y;
}
// takes something return nothing
