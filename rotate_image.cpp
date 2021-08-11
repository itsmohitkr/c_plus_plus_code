#include<iostream>
#include<algorithm>
using namespace std;
void display(char a[][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";

        }
        cout << endl;
    }
}

/*  method 1  */

void rotate(char a[][10], int n) {
    //reverse each row
    for (int row = 0; row < n; row++) {
        int sc = 0;
        int ec = n - 1;
        while (sc < ec) {
            swap(a[row][sc], a[row][ec]);
            sc++;
            ec--;
        }
    }

    // then take transpose
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < j) {
                swap(a[i][j], a[j][i]);
            }
        }
    }
}

/* method 2 */

void rotate_stl(char a[][10], int n) {
    /// same thing using stl reverse(start_container,end_container)
    for (int i = 0; i < n; i++) {
        reverse(a[i], a[i] + n);  // a[i] is a row pointer-we have to resverse each row
    }
    // to take transpose
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            // exclude diagonal element

            if (i < j) {
                swap(a[i][j], a[j][i]);
            }
        }
    }
}

int main()
{
    char a[10][10];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];

        }
    }
    //rotate_stl(a,n); method 1
    rotate(a, n);    // method 2
    display(a, n);
    return 0;

}



