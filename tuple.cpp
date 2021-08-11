
#include<iostream>
#include<conio.h>
#include<tuple>
 using namespace std;

 int main()
 {
     tuple <string,int,int>t1;

     t1=make_tuple("mohit",22,5);

     cout<<get<0>(t1)<<" ";
     cout<<get<1>(t1)<<" ";
     cout<<get<2>(t1);
 }

