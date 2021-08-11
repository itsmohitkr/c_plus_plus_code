#include <iostream>
#include<string>
using namespace std;


int main() {
  string s;

  getline(cin, s);

  for (int i = 0; i < s.length(); i++) {

    cout << s[i];
    if (i == s.length() - 1) {
      break;
    }
    cout << int(s[i + 1]) - int(s[i]);

  }
  return 0;
}
