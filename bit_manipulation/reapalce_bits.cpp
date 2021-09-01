#include <iostream>
using namespace std;

int clearrange_Itoj(int n, int i, int j) {
	int a = (-1 << (j + 1));
	int b = (1 << i) - 1;
	int mask = a | b;
	return mask & n;
}

int replace_bits(int n, int m , int i, int j)
{
	int n_ = clearrange_Itoj(n, i, j);
	int ans = n_ | (m << i);
	return ans;
}

int main()
{
	int n,m,i,j;
	cin >> n >> m >> i >> j;

	cout << replace_bits(n, m, i, j) << endl;
	return 0;

}