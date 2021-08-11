#include <iostream>
#include <stack>
using namespace std;

// complexity is 0(n*n)

void transfer(stack<int>&s1, stack<int>&s2, int n)
{
	for (int i = 1; i <= n; i++)
	{
		s2.push(s1.top());
		s1.pop();
	}
}
void reverse_stack(stack<int >&s1)
{


	stack<int >s2;	// helper stack

	int n = s1.size();
	for (int i = 1; i <= n; ++i)
	{
		//pick the element at the top and insert it at the bottom
		int x = s1.top();
		s1.pop();
		// transfer n-i-1 elements from stack s1 into s2
		transfer(s1, s2, n - i);
		// insert the elment x in s1
		s1.push(x);
		// transfer n-i-1 elements from stack s2 into s1
		transfer(s2, s1, n - i);
	}
}
int main()
{
	stack<int>s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	s.push(7);


	reverse_stack(s);
	while (!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}
	return 0;
}