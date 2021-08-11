#include<iostream>
using namespace std;




int main() {

	int b[]  = {1, 2, 3};
	cout << b << endl;// return starting address

	char a[] = {'a', 'b', 'c', 'd', 'e', '\0'};
	cout << a << endl;
	cout << sizeof(a) << endl;

	//Input
	char s1[] = {'h', 'e', 'l', 'l', 'o'}; //doesnt terminate with null '\0'
	char s2[] = "hello"; //another way--automatically terminate with null '\0'

	cout << s1 << " " << sizeof(s1) << endl; //5 bytes garbage value at end
	cout << s2 << " " << sizeof(s2) << endl; //6 bytes no garbage value at end

	char s3[] = "hello";
	/*char s4[10];
	cin >> s4;  // cin doesnt read white spaces
	cout << s4 << endl;*/

	char s5[100];
	cin.get(s5, 100);
	cout << s5;




	return 0;
}