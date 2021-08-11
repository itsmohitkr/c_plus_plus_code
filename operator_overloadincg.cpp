
#include<iostream>
using namespace std;
class integer
{
private:
    int x;
public:
    void set_data(int a)
    {
        x=a;
    }
    void show_data()
    {
        cout<<"x="<<x;
    }
    integer operator++(int)
    {
        integer i;
        i.x=x++;// isme i.x 1st takes the value of x,thn postincfrement in x(eg.x++)
        return i;
    }
};
 main()
{
    integer i1,i2;
    i1.set_data(3);
    i2=i1++;
    i2.show_data();
    i1.show_data();
}
