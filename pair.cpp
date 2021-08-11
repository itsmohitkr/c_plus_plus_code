
#include<iostream>
#include<conio.h>

 using namespace std;
 class student
 {
 private:
    string name;
    int age;
 public:
    void setdata(string s,int a)
    {
        name=s;
        age=a;
    }
    void showdata()
    {
        cout<<"\n name "<<name<<endl;
        cout<<"age "<<age;
    }
 };
 int main()
 {
     pair <string,int> p1;
     pair <int,student>p2;
     p1=make_pair("mohit",22);
     cout<<p1.first<<" "<<p1.second;

     student s1;
     s1.setdata("mohit",12);
     p2=make_pair(2,s1);
     cout<<p2.first;// accesing student part
     student s2=p2.second;
     s2.showdata();
 }
