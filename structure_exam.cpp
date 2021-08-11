#include<iostream>
using namespace std;
struct book
{
    int bookid;
    char title[20];
    float price;
};
void display(book);
book input();
 main()
{
    book b1;
    b1=input();
    display(b1);




}
book input()
{
    book b;
    cout<<"enter bookid" << "\ntitle" <<"\nprice";
    cin>>b.bookid>>b.title>>b.price;
    return(b);
}
void display(book b)
{
     cout<<b.bookid <<"  "<<b.title<<" "<<b.price;
}
