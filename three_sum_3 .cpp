#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;

    int a[1000];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    int s;
    cin >> s;

    for (int i = 0; i < n; i++) {
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int cs = a[i] + a[left] + a[right];
            if (cs > s) {
                right--;
            }
            else if (cs < s) {
                left++;
            }
            else if (cs == s) {
                cout << a[i] << ", " << a[left] << " and " << a[right] << endl;
                right--;
                left++;

            }
        }
    }


}
