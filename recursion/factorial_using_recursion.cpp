#include<iostream>
#include<conio.h>
using namespace std;
int fact(int n)
{
    //base case
    if (n == 0) {
        return 1;
    }
    //recursive case

    /*int sub_ans=fact(n-1);
    int ans=n*sub_ans;
    return ans;*/
    return n * fact(n - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << "factorial of " << n << "  is " << fact(n);
}
