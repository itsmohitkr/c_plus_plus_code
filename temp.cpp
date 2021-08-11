
#include<iostream>
#include<conio.h>
using namespace std;
template<class x>
x big(x c, x d)
{
    if(c>d)
        return(c);
    else
        return(d);
}
int main()
{
    cout<<"enter any two nos "<<endl;
    cout<<big(3,5);

}
