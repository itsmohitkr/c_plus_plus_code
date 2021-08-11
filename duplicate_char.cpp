#include<iostream>
#include<cstring>
using namespace std;

// remove consecutive duplicate
// ccoooding -->coding
// do without using extra array/space
void removeduplicate(char a[]) {
    int l = strlen(a);
    if (l == 1 or l == 0) {
        return;
    }
    int prev = 0;
    for (int curr = 0; curr < l; curr++) {
        if (a[curr] != a[prev]) {
            prev++;
            a[prev] = a[curr];
        }
    }

    a[prev = 1] = '\0';
    return;

}
int main()
{   char a[100];
    cin.getline(a, 100);
    removeduplicate(a);
    cout << a;

}
