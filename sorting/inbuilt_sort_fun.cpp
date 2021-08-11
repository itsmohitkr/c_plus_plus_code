#include<iostream>
#include<algorithm>
using namespace std;

//Define A Comparator Function
bool compare(int a, int b) {
    cout << "Comparing " << a << " and " << b << endl;
    return a > b;
}


int main() {

    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    //Sort an array using sort() function, more efficient

    sort(a, a + n, compare); // passing the function name as parameter...not calling the function

    for (int i = 0; i < n; i++) {
        cout << a[i] << ",";
    }




    return 0;
}
