#include <iostream>
#include <vector>
using namespace std;

int store_all_ocuur(int a[], int i, int n, int key, vector<int> &out)
{
	// base case
	if (i == n)
	{
		return out.size();
	}

	if (a[i] == key)
	{
		out.push_back(i);
	}

	return store_all_ocuur(a, i + 1, n, key, out);
}

void all_occurances(int a[], int i, int n, int key)
{
	if (i == n)
	{
		// no element is present
		return;
	}
	if (a[i] == key)
	{
		cout << i << " ";
	}

	all_occurances(a, i + 1, n, key);
}

int main()
{
	int a[] = {1, 2, 3, 4, 5, 10, 10, 10, 20};
	int n = sizeof(a) / sizeof(int);
	int x;
	cin >> x;

	all_occurances(a, 0, n, x);
	cout << endl;

	vector<int> out;

	int cnt = store_all_ocuur(a, 0, n, x, out);

	cout << "count " << cnt << " " << endl;
	for (int k = 0; k < cnt; k++)
	{
		cout << out[k] << " ";
	}

	return 0;
}