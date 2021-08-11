#include<iostream>
#include<conio.h>
using namespace std;
int main()
{///1.
   /* int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {   if(j<=i)
            cout<<"*";
        }cout<<endl;
    }*/

/// 2.
/*int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {   if(j>=6-i)
            cout<<"*";
            else
                cout<<" ";
        }cout<<endl;
    }
*/
/// 3.
/*int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {   if(j>i)
            cout<<"*";
            else
                cout<<" ";
        }cout<<endl;
    }
    */
    /// 3.
  /*  int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {   if(j<=6-i)
            cout<<"*";
            else
                cout<<" ";
        }cout<<endl;
    }
    */

/// 4.
/*    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {   if(j>=6-i&&j<=4+i)
            cout<<"*";
            else
                cout<<" ";
        }cout<<endl;
    }
*/
///  p6..
/*
   int i,j;
    for(i=1;i<=5;i++)
    {   int k=1;      /// this k is used for toggling
        for(j=1;j<=9;j++)
        {   if(j>=6-i&&j<=4+i&&k)
            {cout<<"*";
            k=0;}
            else
                {cout<<" ";
                k=1;}
        }cout<<endl;
    }
    */
    /// p7..
    /*
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {   if(j<=6-i||j>=4+i)  /// or operator || use hoga
            cout<<"*";
            else
                cout<<" ";
        }cout<<endl;
    }
    */
    /// p8
    /*
     int i,j;
    for(i=1;i<=4;i++)
    {   int k=1;
        for(j=1;j<=7;j++)
        {   if(j>=5-i&&j<=3+i)
            {cout<<k;
            j<4?k++:k--;   ///conditional operator
            }

            else
                {cout<<" ";
                }
        }cout<<endl;
    }
    */
    /// p9
/*    int i;
    char k;
    for(int i=1;i<=4;i++)
      {
        k='a';
        for(int j=1;j<=7;j++)
        {
            if(j<=5-i||j>=3+i)
               {
                   cout<<k;
                   j<4?k++:k--;   ///using conditional operator;
                   /// using loop
//                   if(j<4)
//                    k++;
//                   else
//                    k--;
               }
            else
                cout<<" ";
        }cout<<endl;
    }
    */
/// p 10
/* *
  ***
 *****
*******
 *****
  ***
   *
*/

   /*  int i,j,k=0;
    for(i=1;i<=7;i++)
    {
        i<=4?k++:k--;
        for(j=1;j<=7;j++)
        {   if(j>=5-k&&j<=3+k)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }*/
    ///p11

//*
//**
//***
//****
//***
//**
//*

 /*   int i,j,k=0;
    for(i=1;i<=7;i++)
    {
        i<=4?k++:k--;
        for(j=1;j<=4;j++)
        {   if(j<=k)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
*/
/// p12
//*******
// *****
//  ***
//   *
  /*  int i,j;
    for(i=1;i<=4;i++)
    {

        for(j=1;j<=7;j++)
        {   if(j>=i&&j<=8-i)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
*/
///p 13
//   1
//  121
// 12321
//1234321
/*
int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {   if(j>=5-i&&j<=3+i)
                {cout<<k;
                j<4?k++:k--;}
            else
                cout<<" ";
        }
        cout<<endl;
    }

*/
/// p 14

//6543210
//543210
//43210
//3210
//210
//10
//0

 /*   int i,j,k,b;



    for(i=1;i<=7;i++)
    {   k=7-i;

        for(j=1;j<=7;j++)
        {   if(j<=8-i)
                {cout<<k;
                k--;}
            else
                cout<<" ";
        }
        cout<<endl;

    }
*/ /// p15
//    1
//   12
//  123
// 1234
//12345
// 1234
//  123
//   12
//    1
/*
    int i,j,k=0,x;
    for(i=1;i<=9;i++)
    {
        i<6?k++:k--;
        x=1;
        for(j=1;j<=5;j++)
        {   if(j>=6-k)
                {cout<<x;
                x++;}


            else
                cout<<" ";
        }
        cout<<endl;
    }
*/

/// p16
//  1*****2
//  *1***2*
//  **1*2**
//  ***1***
//  **2*1**
//  *2***1*
//  2*****1

/*int i,j;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j==i||j==8-i)
            {
                if(i==j)
                    cout<<"\\";
                else
                    cout<<"/";
            }
            else
                cout<<"*";
        }
        cout<<endl;
    }

    */
    /// p17
//*********
//**** ****
//***   ***
//**     **
//*       *
//**     **
//***   ***
//**** ****
//*********
  /*  int i,j,k=0;
    for(i=1;i<=9;i++)
    {   i<=5?k++:k--;
        for(j=1;j<=9;j++)
        {
            if(j<=6-k||j>=4+k)
            cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
*/
/// p 18
//*********
// *******
//  *****
//   ***
//    *
  /*   int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=i&&j<=10-i)
            cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
*/
  /// p19
//   a
//  aba
// abcba
//abcdcba
 /*   int i,j;
    char a,b;
    for(i=1;i<=4;i++)
    {   b='a';  ///iska matlab sara row 'a' satrt hoga
        for(j=1;j<=7;j++)
        {
            if(j>=5-i&&j<=3+i)
            {cout<<b;
            j<4?b++:b--;}
            else
                cout<<" ";
        }
        cout<<endl;
    }
    */
    ///Take N (number of rows), print the following pattern (for N = 4)  coding blocks
//0
//1 1
//2 3 5
//8 13 21 34

  /*    int i,j,a=-1,b=1,c,x;
      cin>>x;
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=x;j++)
        {
            if(j<=i)
            {c=a+b;
             cout<<c<<" ";
             a=b;
             b=c;
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
    */
///Take N (number of rows), print the following pattern (for N = 5).

//     * * * * *
//     * *   * *
//     *       *
//     * *   * *
//     * * * * *
/* int i,j,n,k=0;
 cin>>n;
 int a=(n/2)+2;
 int b=(n/2);

 int c=(n/2)+1;
//cout<<a<<b<<c;
    for(i=1;i<=n;i++)
    {   i<=c?k++:k--;
        for(j=1;j<=n;j++)
        {
            if(j<=a-k||j>=b+k)
            cout<<"*"<<" ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
*/   ///
//1 2 3 4 5
//1 2 3 4 *
//1 2 3 * * *
//1 2 * * * * *
//1 * * * * * * *

/*int n,k;
cin>>n;
    for(int i=1;i<=n;i++)
    {   k=1;
        for(int j=1;j<=2*n-1;j++)
        {
            if(j<=n-1+i)
            {   if(j<=n+1-i)
                {cout<<k<<" ";
                k++;}
                else
                    cout<<"*"<<" ";
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
*/
}
