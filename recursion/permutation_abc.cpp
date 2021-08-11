#include <iostream>
using namespace std;
void permute(char *in, int i) {
    // base case

    if (in[i] == '\0') {
        cout << in << endl;
        return;
    }

    //recursive case

    for (int j = i; in[j] != '\0'; j++) {
        swap(in[i], in[j]);
        permute(in, i + 1);

        // backtracking
        swap(in[i], in[j]);
    }
}
int main() {
    char ch[100];
    cin >> ch;

    int i = 0;
    permute(ch, i);
    return 0;
}
