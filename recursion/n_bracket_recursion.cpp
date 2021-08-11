#include<iostream>
using namespace std;
void genarate_brackets(char out[], int n, int idx, int open, int close)
{
    // base case
    if (idx == 2 * n) {
        out[idx] = '\0';
        cout << out << endl;
        return;
    }
    // rec case
    // 2 options
    if (open < n) {
        out[idx] = '(';
        genarate_brackets(out, n, idx + 1, open + 1, close);
    }
    if (close < open) {
        out[idx] = ')';
        genarate_brackets(out, n, idx + 1, open, close + 1);
    }
}
int main()
{
    int n;
    cin >> n;
    char out[1000];
    int idx = 0; // starting pointer
    genarate_brackets(out, n, idx, 0, 0);
}
