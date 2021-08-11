#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    /*int i,a;
    int s=0;
    cout<<"enter any nos";
    cin>>a;
    for(i=1;i<=a;i++)
    s=s+i;

    cout<<s;*/
/*
    int r,n;
    int s=0;
    cout<<"enter any nos";
    cin>>n;
    while(n>0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    cout<<"sum of digit is "<<s;
*/
   /* int i,j=1,a;
    cout<<"nos";
    cin>>a;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
            if(i>=j)
            cout<<1;
            else
            cout<<" ";
            cout<<endl;
    }*/

//    int i,j=1,a;
//    cout<<"nos";
//    cin>>a;
//    for(i=1;i<=a;i++)
//    {
//        for(j=1;j<=a;j++)
//            if(j>=a+1-i)
//            cout<<1;
//            else
//            cout<<" ";
//            cout<<endl;
//    }
//        int i,j=1,a;
//    cout<<"nos";
//    cin>>a;
//    for(i=1;i<=a;i++)
//    {
//        for(j=1;j<=a;j++)
//            if(j>=i)
//            cout<<1;
//            else
//            cout<<" ";
//            cout<<endl;
//    }
//            int i,j=1,a;
//    cout<<"nos";
//    cin>>a;
//    for(i=1;i<=a;i++)
//    {
//        for(j=1;j<=a;j++)
//            if(j<=a+1-i)
//            cout<<1;
//            else
//            cout<<" ";
//            cout<<endl;
//    }
//                int i,j;
//
//    for(i=1;i<=5;i++)
//    {
//        for(j=1;j<=9;j++)
//            if(j>=6-i&&j<=4+i)
//            cout<<1;
//            else
//            cout<<" ";
//            cout<<endl;
//    }
//    int i,j,k;
//    for(i=1;i<=5;i++)
//    k=1;
//    {
//        for(j=1;j<=9;j++)
//            if(j>=6-i&&j<=4+i&&k)
//            {
//                cout<<1;
//                k=0;
//            }
//            else
//            {
//                cout<<" ";
//                k=1;
//            }
//            cout<<endl;
//    }
//
//    int i,j,k;
//    for(i=1;i<=5;i++)
//    {
//        for(j=1;j<=9;j++)
//            if(j<=6-i||j>=4+i)
//            {
//                cout<<1;
//            }
//            else
//            {
//                cout<<" ";
//            }
//            cout<<endl;
//    }
//  int i,j;
//    for(i=1;i<=6;i++)
//    {
//        for(j=1;j<=6;j++)
//            if(i>=j)
//            cout<<1;
//            else
//            cout<<" ";
//            cout<<endl;
//    }
///   print this pattern;
///             1
///            232
///           34543
///          4567654
///         567898765
///


 /*   int n;
    cin>>n;
    ///loop for rows 1to n
    for(int i=1;i<=n;i++){
    {    ///loop for space
        for(int s=1;s<=n-i;s++)
        cout<<" ";
    }
    ///loop for increasing nos

        int val=i;
        for(int cnt=1;cnt<=i;cnt++){
            cout<<val;
        val=val+1;
    }
    /// decresing nos
        val=val-2;
        for(int cnt=1;cnt<=i-1;cnt++){
            cout<<val;
        val=val-1;}
        ///print new line
        cout<<endl;
    }*/


    ///******************fibonaci series****************************
    int n,c;
    cout<<"enter a nos ";
    cin>>n;
    int a=-1;
    int b=1;
    for(int j=1;j<=n;j++){
    for(int i=1;i<=n;i++)
    {    c=a+b;

        cout<<c<<endl;
        a=b;
        b=c;

    }}

}


