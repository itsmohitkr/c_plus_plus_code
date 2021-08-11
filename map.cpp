#include<iostream>
#include<conio.h>
#include<map>
using namespace std;
int main()
{   //first method of creating map
    map<int, string>customer;
    customer[100] = "mohan";
    customer[123] = "ramayan";
    customer[145] = "shayam";
    customer[171] = "lilu";
    customer[156] = "gaya";
    //2nd  method of creating map
    customer.insert(pair<int, string>(205, "hello"));
    //3rd  method of creating map

    map<int, string>c{{100, "guys"}, {105, "box"}};

    //genral method

    cout << customer[123] << endl;
    cout << customer.at(145) << endl;
    cout << customer.at(171) << endl;
    cout << c.at(105) << endl;

    //using iterator or loop

    map<int, string>::iterator p = customer.begin();
    {
        while (p != customer.end())
        {

            cout << p->second << endl;
            p++;
        }
    }
    cout << customer.size() << endl;

    cout << customer.empty() << endl;








}
