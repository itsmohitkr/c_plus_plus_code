#include<bits/stdc++.h>
using namespace std;
void subset(char in[], char out[], int i, int j)
{
    //base case
    if (in[i] == '\0') {

        out[j] = '\0';
        cout << out << endl;
        return;
    }
    // rec case
    // including the current char
    out[j] = in[i];
    subset(in, out, i + 1, j + 1);
    // excluding the current char
    subset(in, out, i + 1, j);
}
int main()
{
    char input[] = "abc";
    char output[10];
    subset(input, output, 0, 0);
}
