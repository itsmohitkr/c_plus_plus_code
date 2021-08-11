#include <iostream>
using namespace std;
// update any bits by 0 or 1
int update_bits(int n, int i, int v) {
    int mask = ~(1 << i);
    int cleared_bits = mask & n;
    int udatedbits = (cleared_bits | (v << i));
    return udatedbits;
}

int main() {
    int n, i, v;
    cin >> n >> i >> v;
    cout << update_bits(n, i, v);
    return 0;

}
