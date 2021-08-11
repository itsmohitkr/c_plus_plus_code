#include<iostream>
#include<climits>
using namespace std;
// Find the Largest and Smallest Number in array

int main() {


	int n, key;
	cin >> n;

	int a[1000];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	//Algorithm to find the largest and smallest number

	int largest = INT_MIN;
	int smallest = INT_MAX;

	for (int i = 0; i < n; i++) {

		// 1st method-- inbuilt function

		/*largest = max(largest, a[i]);
		smallest = min(smallest, a[i]);*/

		// 2nd method
		if (a[i] > largest)
			largest = a[i];
		if (a[i] < smallest)
			smallest = a[i];

	}

	cout << "Largest " << largest << endl;
	cout << "Smallest " << smallest << endl;


	return 0;

}