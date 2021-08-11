#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
int main() {

    string s;
    cin >> s;

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
