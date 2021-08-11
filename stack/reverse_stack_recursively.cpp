#include <iostream>
#include <stack>
using namespace std;
void inser_at_bottom(stack<int>&s, int x)
{
	if (s.empty()) {
		s.push(x);
		return;
	}
	int data = s.top();
	s.pop();
	inser_at_bottom(s, x);
	s.push(data);
}
void reverse_stack_recu(stack<int>&s)
{	// base case
	if (s.empty()) {
		return;
	}
	//otherwise
	//pop out the top element and insert it at the bottom of reversed smaller stack
	int x = s.top();
	s.pop();
	// rec reverse the smaller stack
	reverse_stack_recu(s);
	inser_at_bottom(s, x);
}
int main()
{
	stack<int>s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	reverse_stack_recu(s);
	while (s.empty() == false) {
		cout << s.top() << ", ";
		s.pop();
	}
	return 0;
}