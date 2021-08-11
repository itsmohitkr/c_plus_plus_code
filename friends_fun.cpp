#include<iostream>
using namespace std;
class complex
{
private:
    int a,b;
public:
    void set_data(int x,int y)
    {
        x=a;
        y=b;
    }
    void show_data()
    {
        cout<<"x="<<a<<"y="<<b;
    }
    friend void fun(complex c);  // decleration
};
void fun(complex c)   //definition
{
    cout<<"sum is "<<c.a+c.b;
}
 main()
{
    complex c1;
    c1.set_data(3,4);
    c1.show_data();
    fun(c1); // call
}
