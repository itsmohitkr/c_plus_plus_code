#include <iostream>
using namespace std;
    
int largestPowerOf2within_n(int n){
    int i = 0;
    while((1<<i)<=n){
        i++;
    }
    return i - 1;
}

int count_All_bits(int n){
    if(n==0){
        return 0;
    }
    int x = largestPowerOf2within_n(n);
    int ans1 = (1 << (x - 1)) * x;
    int ans2 = n - (1 << x) + 1;
    int remaining = n - (1 << x);
    int finalans = ans1 + ans2 + count_All_bits(remaining);
    return finalans;
}

int main(){
    int n;
    cin >> n;
    cout << count_All_bits(n);
}