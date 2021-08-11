#include<iostream>
using namespace std;
main()
{
	int x = 5;
	int &y = x;
	y++;
	x++;
	cout << y << endl << x;
}
//y is a reference variable which is taking the reference of x
//or u can  say y is the another name of x
