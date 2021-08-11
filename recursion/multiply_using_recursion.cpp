#include <iostream>
using namespace std;

int multiply(int n, int m) {
    //base case

    if (m == 1) {
        return n;
    }
    int smallproblem = multiply(n, m - 1);
    return n + smallproblem;
}
int main() {
    int n, m;

    cin >> n >> m;

    cout << multiply(n, m);
    return 0;
}
