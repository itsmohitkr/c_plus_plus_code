#include<iostream>
#include<list>
using namespace std;
int main()
{
  list<int>l1 {11, 22, 33, 34, 23, 66, 57};
  /* list<string>l2 {"mohit","ram","shayam","rohan"};
   l2.push_back("jai");
   l2.push_front("sita");
   list<string>::iterator p=l2.begin();
   while(p!=l2.end())
  {    cout<<*p<<" ";
       p++;
  }*/
  cout << "\ntotal value of the lists are " << l1.size() << l1[2] << endl;

  list<int>::iterator p = l1.begin(); //printings value using iterator
  while (p != l1.end())
  { cout << *p << " ";
    p++;
  }

  cout << endl;

  l1.pop_back();
//l1.pop_front();
//l1.sort();
//l1.reverse();
//l1.remove(33);
//l1.clear;

  list<int>::iterator q = l1.begin();
  while (q != l1.end())
  { cout << *q << " ";
    q++;
  }



}
