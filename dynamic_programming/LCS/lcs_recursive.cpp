#include <iostream>
#include <algorithm>
using namespace std;

// recursive approch
int lcs(string x,string y,int n,int m){
    // base case
    if(n==0 or m==0){
        return 0;
    }

    // choice diagram
    // if last character matched
    if(x[n-1]==y[m-1]){
        return 1 + lcs(x, y, n - 1, m - 1);
    }
    // if not matched then we have 2 choice 
    // either reduce last of x of reduce last of y
    else{
        return max(lcs(x, y, n, m - 1), lcs(x, y, n - 1, m));
    }
    return 0;
}


int main(){
    string x = "abcdghem";
    string y = "abrdfhe";

    cout << lcs(x, y, x.length(), y.length());
    return 0;
}