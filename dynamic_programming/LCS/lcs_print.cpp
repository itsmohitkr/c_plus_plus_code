#include <iostream>
#include <algorithm>
using namespace std;

// recursive approch
void print_lcs(string x,string y,int m,int n){

    // 1. create table

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
    
    //2 print table
    int i = m;
    int j = n;
    string ans = "";

    while(i>0 and j>0){

        if(x[i-1]==y[j-1]){
            ans.push_back(x[i - 1]);
            i--;
            j--;
        }
        else{
            if(t[i][j-1]>t[i-1][j]){
                j--;
            }
            else{
                i--;
            }
        }
    }

    reverse(ans.begin(), ans.end());
    cout << ans;
}

int main(){
    string x = "acbcf";
    string y = "abcdaf";

    print_lcs(x, y, x.length(), y.length());
    return 0;
}