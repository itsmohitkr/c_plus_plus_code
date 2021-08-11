#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  /*  int a=1;
    while(a<10)
    {
        if(a==6)
        {
            break;      // took out of loop
            continue;   //took to starting of loop...which ultimately don't print anythings.
        }
        cout<<"nos is "<<a<<endl;
        a++;

    }
*////>>>>>>>>>>>>>>>>>>>>>is prime nos<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
 /*   int i,n;
    cin>>n;
    for(i=2;i<=n-1;i++)
    {
        if(n%2==0)
        {
            cout<<"is not prime";
            break;
        }
    }
    if(n%1==0&&n%n==0)
    cout<<"is prime nos ";
*/
///>>>>>>>>>>>> cin.get()>>>>>>>>>>>>>>>>>>>>>
/*char ch;
ch=cin.get();
   while(ch!='.')
   {
    cout<<ch;
    ch=cin.get();
   }
   */
   int n,x=0,y=0;
   char ch;
   ch=cin.get();
   while(ch!='\n'){
    if(ch=='n')
        y++;
    else if(ch=='s')
        y--;
    else if(ch=='e')
        x++;
    else if(ch=='w')
        x--;
        ch=cin.get();
   }
    cout<<"final position is "<<x<<" "<<y;
}
