#include<iostream>
using namespace std;
int add(int,int,int=0);
main()
{
    int a,b,c;
    cout<<"enter 2 nos"<<endl;
    cin>>a>>b;
    cout<<add(a,b)<<endl;
     cout<<"enter 3 nos"<<endl;
    cin>>a>>b>>c;
    cout<<add(a,b);
}
int add(int x,int y,int z)
{
    return(x+y+z);
}
