#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,p;
    float a=0;
    float inc=1.0;
    cin>>n>>p;
    for(int times=1;times<=p+1;times++)
    {
        while(a*a<=n)
        {
        a=a+inc;

        }
        a=a-inc;
        inc=inc/10;
    }

    cout<<"square root is "<<a;
}
