#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

bool compare(string a, string b) {
	if (a.length() == b.length()) {
		return a < b;
	}
	return a.length() > b.length();
}

int main()
{
	int n;
	cin >> n;

	cin.get(); // to consume any extra enter after \n.

	string s[100];

	for (int i = 0; i < n; ++i)
	{
		getline(cin, s[i]); // get line function accept two arguments
	}

	sort(s, s + n, compare);

	for (int i = 0; i < n; ++i)
	{
		cout << s[i] << endl;
	}
	return 0;
}

