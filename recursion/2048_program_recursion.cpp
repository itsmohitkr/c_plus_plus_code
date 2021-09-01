#include<iostream>
using namespace std;
char words[][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
void printspelling(int n)
{	//base case
	if (n == 0) {
		return;
	}
	//rec case-1st print the spelling of 2048
	printspelling(n / 10);
	int digits = n % 10;
	cout << words[digits] << " ";
	return;
}

int main()
{
	int n;
	cin >> n;
	printspelling(n);
}

