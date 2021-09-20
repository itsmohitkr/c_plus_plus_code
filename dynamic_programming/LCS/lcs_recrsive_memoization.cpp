#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

// recursive approch
int t[1000][1000];

int lcs(string x,string y,int n,int m){
    // base case
    if(n==0 or m==0){
        return 0;
    }

    // look up
    if(t[n][m]!=-1){
        return t[n][m];
    }

    // choice diagram
    if(x[n-1]==y[m-1]){
        return t[n][m]=1 + lcs(x, y, n - 1, m - 1);
    }
    else{
        return t[n][m]=max(lcs(x, y, n, m - 1), lcs(x, y, n - 1, m));
    }
    return 0;
}


int main(){
    string x = "abcdghem";
    string y = "abrdfhe";
    memset(t, -1, sizeof(t));
    cout << lcs(x, y, x.length(), y.length());
    return 0;
}