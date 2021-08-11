#include<iostream>
#include<string.h>
using namespace std;
int stringtoint(char a[], int n)
{
    // base case
    if (n == 0) {
        return 0;
    }
    int digit = a[n - 1] - '0';
    int small_ans = stringtoint(a, n - 1);
    return small_ans * 10 + digit;
}
int main()
{
    char a[] = "1234";
    int len = strlen(a);
    cout << stringtoint(a, len);
}
