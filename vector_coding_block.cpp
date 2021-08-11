#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;
int main()
{
    vector<int>d{1, 2, 3, 10, 14, 15, 16}; //during initilization capacity=nos of element and remains constant
    cout << d[0] << " " << d[1] << endl;
    for (int x : d) {
        cout << x << ",";
    }
    cout << endl;
    cout << d.size() << endl;
    cout << d.capacity() << endl;

    //push back o(1)for most of time

    d.push_back(20);
    for (int x : d) {
        cout << x << ",";
    }
    cout << endl;
    //pop back removes the last element o(1)

    d.pop_back();
    for (int x : d) {
        cout << x << ",";
    }
    cout << endl;
    //insert some element at middle

    d.insert(d.begin() + 3, 200);
    for (int x : d) {
        cout << x << ",";
    }
    cout << endl;
    // erase some element
    d.erase(d.begin() + 3);
    for (int x : d) {
        cout << x << ",";
    }
    cout << endl;

    d.erase(d.begin() + 2, d.begin() + 4);
    for (int x : d) {
        cout << x << ",";
    }
    cout << endl;
    // size and capacity

    cout << d.size() << endl;
    cout << d.capacity() << endl;
    // clear all element of vector
    d.clear();
    cout << d.size() << endl;
    if (d.empty()) {
        cout << "empty vector";
    }
    cout << endl;

    // reserve
    int n;
    cin >> n;
    vector<int>v;
    v.reserve(500); // this will fixed the capacity to 500 until you cross 500
    for (int i = 0; i < n; i++) {
        int no;
        cin >> no;
        v.push_back(no);
        cout << "current capacity" << v.capacity() << endl;
    }
    for (int x : v) {
        cout << x << ",";
    }
}
