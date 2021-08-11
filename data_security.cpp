#include<iostream>
using namespace std;
struct book
{  // private:

    int bookid;
    char title[20];
    float price;
    public:

    void input()
    {
        cout<<"enter bookid title and price";
        cin>>bookid >>title >>price;
    }
    void display()
    {
        cout<<bookid <<endl<<title<<endl<<price;
    }
};
  main()
{
    book b1;
    b1.input();
    b1.display();
}
