#include <iostream>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    int i = 0;

    while (i < s.length()) {
        int j = i + 1;
        int cnt = 1;
        while (s[j] == s[i]) {
            cnt = cnt + 1;
            j++;
        }
        cout << s[i] << cnt;
        i = i + cnt;
    }
    return 0;
}
