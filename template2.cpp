#include<iostream>
using namespace std;
class arraylist
{
private:
    struct controlblock    ///new datatype
    {
       int capacity;      ///member variables
       int *arr_ptr;
    };
    controlblock *s;       ///pointer variable of controlblock
public:
    arraylist(int capacity)  ///constructor of taking any argument of int type let say 4
    {
        s=new controlblock;    ///new controlblock bana or use s point kar rha hai
        s->capacity=capacity;
        s->arr_ptr=new int[s->capacity]; /// int type ka array hai jisme size of array hai 4
    }
    void addelement(int index,int data)  ///fun to add nos
    {
        if(index>=0&&index<=s->capacity-1)
            s->arr_ptr[index]=data;
        else
            cout<<"\n array index is not valid";

    }
     void viewelement(int index,int &data)  ///fun to view data
    {
        if(index>=0&&index<=s->capacity-1)
            data=s->arr_ptr[index];
        else
            cout<<"\n array index is not valid";
    }
    void viewlist()   /// to view more than one list
    {
        int i;
        for(i=0;i<s->capacity;i++)
            cout<<" "<<s->arr_ptr[i];
    }
};
int main()
{   int data;
    arraylist list1(4);
    list1.addelement(0,32);
//    list1.addelement(1,41);
//    list1.addelement(0,55);
    list1.viewelement(0,data);
    cout<<" value in the array is "<< data;
}
