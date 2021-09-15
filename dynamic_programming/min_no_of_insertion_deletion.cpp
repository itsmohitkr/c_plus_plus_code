#include <iostream>
#include <algorithm>
using namespace std;

// recursive approch
int lcs(string x,string y,int m,int n){
    
    // table
    int t[m + 1][n + 1];

    // base case init
    for (int i = 0; i < m + 1; i++){
        for (int j = 0; j < n + 1;j++){
            if(i==0 or j==0){
                t[i][j] = 0;
            }
        }
    }

    // fill remaining row,column
    for (int i = 1; i < m + 1; i++){
        for (int j = 1; j < n + 1;j++){
            if(x[i-1]==y[j-1]){
                t[i][j] = 1 + t[i - 1][j - 1];
            }
            else{
                t[i][j] = max(t[i - 1][j], t[i][j-1]);
            }
        }
    }
    return t[m][n];
}


int main(){
    string x = "heap";
    string y = "pea";

    int Lcs=lcs(x, y, x.length(), y.length());

    int min_no_of_deletion = x.length() - Lcs;
    int min_no_of_insertion = y.length() - Lcs;

    cout << "min_no_of_deletion " << min_no_of_deletion << endl;
    cout<< "min_no_of_insertion "<<min_no_of_insertion;
    return 0;
}