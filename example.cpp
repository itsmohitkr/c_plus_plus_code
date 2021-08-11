#include<bits/stdc++.h>
#include<algorithm>
#include<string>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

    string s;
    cin >> s;
    cout << s;
    sort(s.begin(), s.end());

    int n = s.length();
    int cnt = 0;

    for (int i = 0; i < n; i++) {

        if (s[i + 1] == s[i]) {
            cnt++;
        }
    }

    if ((n - cnt) % 2 != 0) {
        cout << "IGNORE HIM!";
    }
    else {
        cout << "CHAT WITH HER!";
    }
    return 0;
}
