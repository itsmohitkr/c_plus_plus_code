#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	/*    cin.get() is used for accessing character array.
	      It includes white space characters.
	      Generally, cin with an extraction operator (>>) terminates when whitespace is found.
	      However, cin.get() reads a string with the whitespace.
	*/

	//..1

	/*char c1, c2, c3;
	cin.get(c1);// cin.get() reads only one chatacter at a time
	cin.get(c2);
	cin.get(c3);
	cout << c1 << c2 << c3 << endl;*/

	//..2

	/*char ch[100];
	int i = 0;
	while (i < 8) {
		cin.get(ch[i]);
		i++;					// you can use iteration to take string("a group of character")
	}
	for (int i = 0; i < 10; ++i)
	{
		cout << ch[i];
	}

	//..3*/


	char ch[1000];
	cin.getline(ch, 1000);// cin.getline() reads whole paragraph as it is.
	cout << ch;

	return 0;
}
