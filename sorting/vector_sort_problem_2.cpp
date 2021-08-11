#include<iostream>
#include<algorithm>
#include<vector>
#include<conio.h>
using namespace std;
class car
{
public:
    string car_name;
    int x,y;
    void setdata(string n,int a,int b)
    {
        car_name=n;
        x=a;
        y=b;
    }
    int dist()
    {
        return x*x+y*y;
    }
};
bool compare(car A,car B)
{
    int da=A.dist();
    int db=B.dist();
    if(da==db)
    {
        return A.car_name<B.car_name;
    }
    return da<db;
}
int main()
{
    int n;
    cin>>n;
    vector<car>v;
    for(int i=0;i<n;i++){
        int x,y;
        string name;
        cin>>name>>x>>y;
        car c1;
        c1.setdata(name,x,y);
        v.push_back(c1);
    }
    sort(v.begin(),v.end(),compare);
    for(auto c:v){
        cout<<"car "<<c.car_name <<"dist "<<c.dist()<<"location"<<c.x<<","<<c.y<<endl;
    }
}

