#include <iostream>
using namespace std;
// clear ith bits means making ith bits zero
int clear_bits(int n, int i) {
    int mask = ~(1 << i);
    return mask & n;
}

int main() {
    int n, i, v;
    cin >> n >> i >> v;
    cout << clear_bits(n, i);

    return 0;

}
