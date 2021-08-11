#include<iostream>
using namespace std;

int place_tiles(int n){
    // base case
    if(n<=3 and n>0){
        return 1;
    }
    if(n==0){
        return 0;
    }

    // recursive case

    return place_tiles(n - 1) + place_tiles(n - 4);
}

int main()
{
    int n;
    cin >> n;
    cout << place_tiles(n);
}