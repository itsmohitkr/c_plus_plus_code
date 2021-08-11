#include<iostream>
#include<cstring>
using namespace std;
int main()
{   int n;
    cin >> n;

    char a[100];
    char largest[100];

    int leng = 0;
    int largest_len = 0;

    cin.get();
    for (int i = 0; i < n; i++) {
        cin.getline(a, 100);
        leng = strlen(a);
        if (leng > largest_len) {
            largest_len = leng;
            strcpy(largest, a);
        }
    }

    cout << largest << " " << largest_len << endl;

}
