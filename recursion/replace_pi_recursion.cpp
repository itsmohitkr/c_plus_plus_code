#include<iostream>
#include<cstring>
using namespace std;

// references-- https://www.youtube.com/watch?v=ZTIM9dDljlc

void replacepi(char a[], int index)
{
    // Base condition
    // if the string is empty
    // or of length one
    if (a[index] == '\0') {
        return;
    }

    if (a[index] == 'p' && a[index + 1] == 'i') {

        // Shifting the characeters to
        // right side to put 3.14 in
        // the character array

        int len = strlen(a);
        a[len + 2] = '\0';
        int i;
        for ( i = len - 1; i >= index + 2; i--) {
            a[i + 2] = a[i];
        }
        a[index] = '3';
        a[index + 1] = '.';
        a[index + 2] = '1';
        a[index + 3] = '4';
    }
    // Getting the answer from
    // recursion for the smaller
    // problem
    else {
        replacepi(a, index + 1);
    }
}
int main()
{
    char a[1000];
    int index = 0;
    cin >> a;
    replacepi(a, index);
    cout << a;
    return 0;

}
