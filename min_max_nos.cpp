#include <iostream>
#include<climits> // include the header file for INT_MIN AND INT_MAX
using namespace std;
//aim:to take any nos and
int main()
{
  int n;
  cin >> n;
  int a[1000];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int largest = INT_MIN;
  int smallest = INT_MAX;
  for (int i = 0; i < n; i++) {

    /*// inbuilt function
       largest=max(largest,a[i]);
       smallest=min(smallest,a[i]);*/

    // 2nd method
    if (a[i] > largest)
      largest = a[i];
    if (a[i] < smallest)
      smallest = a[i];
  }

  cout << "largest " << largest << endl;
  cout << "smallest" << smallest;
  return 0;

}
