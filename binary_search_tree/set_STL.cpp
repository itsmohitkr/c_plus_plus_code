#include<iostream>
#include<set>
using namespace std;
int main()
{
	int arr[] = {10, 20, 30, 5, 6, 3, 4, 4, 5, 6};
	int n = sizeof(arr) / sizeof(int );

	set<int>s(arr,arr+n);
	// for (int i = 0; i < n; ++i)
	// {
	// 	s.insert(arr[i]);
	// }
	for (int x : s) {
		cout << x << " ";
	}
	cout << endl;
	cout << s.size()<<endl;
	s.erase(10);
	auto it = s.find(30);
	s.erase(it);

	// print all the element
	// for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	// {
	// 	cout << *(it) << ",";
	// }
	for (int x : s) {
		cout << x << " ";
	}
	return 0;
}