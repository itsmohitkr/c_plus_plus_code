#include<iostream>
using namespace std;
int main()
{
    //pair
    pair<int, int>p;
    p.first = 10;
    p.second = 20;

    //another way
    pair<int, int>p2(p);
    cout << p2.first << " " << p2.second << endl;

    // make pair
    pair<string, int>p3;
    p3 = make_pair("mohit kumar", 22);
    cout << p3.first << " " << p3.second << endl;

    // take input
    int a, b;
    cin >> a >> b;
    pair<int, int>p4 = make_pair(a, b);
    cout << p4.first << " " << p4.second;

    //pair of pair
    pair<pair<int, int>, string>car;
    car.second = "ferrari";
    car.first.first = 100;
    car.first.second = 900;
    cout << car.second << " " << car.first.first << " " << car.first.second;



}
