#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    cout << s.size() << endl;
    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < s.size(); j++) {
            for (int k = i; k <= j; k++) {
                cout << s[k] << " ";
            }
            cout << endl;
        }
    }
}
