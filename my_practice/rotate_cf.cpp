#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
  int a[10] = {0};
  int n, i;
  cin >> n;
  for ( int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for ( i = 0; i < n; i++) {
    reverse(a[i], a[i] + n);
  }
  for (int i = 0; i < n; ++i)
  {
    cout << a[i];
  }

  return 0;
}
