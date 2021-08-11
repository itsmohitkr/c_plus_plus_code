

/*method 1 o(n^2)*/

void printDiagonalSums(int mat[][MAX], int n)
{
    int principal = 0, secondary = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            // Condition for principal diagonal
            if (i == j)
                principal += mat[i][j];

            // Condition for secondary diagonal
            if ((i + j) == (n - 1))
                secondary += mat[i][j];
        }
    }

    cout << "Principal Diagonal:" << principal << endl;
    cout << "Secondary Diagonal:" << secondary << endl;
}


/*method 2 o(n)*/

void printDiagonalSums(int mat[][MAX], int n)
{
    int principal = 0, secondary = 0;
    for (int i = 0; i < n; i++) {
        principal += mat[i][i];
        secondary += mat[i][n - i - 1];
    }

    cout << "Principal Diagonal:" << principal << endl;
    cout << "Secondary Diagonal:" << secondary << endl;
}
