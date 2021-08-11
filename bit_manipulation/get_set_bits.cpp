#include <iostream>
using namespace std;

int get_ith_bits(int n, int i) {
    int mask = (1 << i);
    if ((mask & n) > 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int set_ith_bits(int n, int i) {
    int mask = (1 << i);
    return mask | n;
}

int main() {
    int n, i;
    cin >> n >> i;
    cout << get_ith_bits(n, i) << endl;
    cout << set_ith_bits(n, i) << endl;
    return 0;

}
