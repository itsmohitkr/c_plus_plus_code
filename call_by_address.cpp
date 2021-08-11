#include<iostream>
using namespace std;
int sum(int*,int*);
main()
{
    int x=5,y=6;
    int s=sum(&x,&y);
    cout<<s;
}
int sum(int*p,int*q)
{   int c;
    c=*p+*q;// basically *p or *q means it is pointing to x and y
    return c;
}
