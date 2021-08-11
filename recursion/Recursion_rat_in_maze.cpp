#include<iostream>
using namespace std;
bool ratinmaize(char maze[10][10], int soln[][10], int i, int j, int m, int n)
{
    if (i == m && j == n) {
        soln[m][n] = 1;
        //print the path
        for (int i = 0; i <= m; i++) {
            for (int j = 0; j <= n; j++) {
                cout << soln[i][j] << " ";
            }
            cout << endl;
        }
        return true;
    }

    // rat should be inside grid
    if (i > m || j > n) {
        return false;
    }

    if (maze[i][j] == 'x') {
        return false;
    }

    // assume soln exist through current cell
    soln[i][j] = 1;
    bool rightsuccess = ratinmaize(maze, soln, i, j + 1, m, n);
    cout << endl;
    bool downsuccess = ratinmaize(maze, soln, i + 1, j, m, n);

    //backtracking
    soln[i][j] = 0;
    if (rightsuccess || downsuccess) {
        return true;
    }
    return false;
}
int main()
{
    char maze[10][10] = {"0000",
                         "00x0",
                         "000x",
                         "0x00"
                        };
    int soln[10][10] = {0};
    int m = 4;
    int n = 4;
    ratinmaize(maze, soln, 0, 0, m - 1, n - 1);
    return 0;

}
