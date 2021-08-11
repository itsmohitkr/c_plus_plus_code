#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // generate sub array
    // i --starting index
    // j --ending index
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            //starting from i and ending to j
            for (int k = i; k <= j; k++) { 
                cout << a[k] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
