#include <iostream>
#include<cstring>
using namespace std;
class Fun
{
public:
	void operator()(string s) {
		cout << "having fun with " << s;
	}
};
int main()
{
	Fun f; // constructor
	f("c++");   //overloaded () operator =functional call where f is an object
}