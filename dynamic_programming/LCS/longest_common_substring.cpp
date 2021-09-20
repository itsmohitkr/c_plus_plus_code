#include <iostream>
#include <algorithm>
using namespace std;

// recursive approch
int longest_common_substring(string x,string y,int m,int n){
    
    // table
    int t[m + 1][n + 1];
    int length = 0;
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
                length = max(length, t[i][j]);
            }
            else{
                t[i][j] = 0;
            }
        }
    }
    return length;
}


int main(){
    string x = "abcdghem";
    string y = "abcdfhm";

    cout << longest_common_substring(x, y, x.length(), y.length());
    return 0;
}