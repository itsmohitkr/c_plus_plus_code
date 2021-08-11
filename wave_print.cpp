#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[100][100];

    int m, n;
    cin >> m >> n;


    for (int row = 0; row <= m - 1; row++) {

        for (int col = 0; col <= n - 1; col++) {


            cin >> a[row][col];

        }

    }
    ///wave print

    for (int col = 0; col < n; col++) {
        if (col % 2 == 0) {
            //even col-topdown

            for (int row = 0; row < m; row++) {
                cout << a[row][col] << " ";
            }
        }
        else

            for (int row = m - 1; row >= 0; row--)
                cout << a[row][col] << " ";
    }
    return 0;
}

