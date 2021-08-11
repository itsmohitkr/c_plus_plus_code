#include <iostream>
#include<stack>
using namespace std;
bool check_expression(string str)
{
	stack<char>s;
	// go through all the char
	for (int i = 0; i < str.size(); ++i)
	{
		char curr_char = str[i];
		if (curr_char == '(') {
			s.push(curr_char);
		}
		else if (curr_char == ')') {
			if (s.empty() || s.top() != '(') {
				return false;
			}
			s.pop();
		}

	}
	return s.empty();
}

bool ispar(string x)
{
	// Your code here
	stack<char>s;
	for (int i = 0; i < x.size(); i++) {
		char curr_char = x[i];
		if (curr_char == '(' || curr_char == '{' || curr_char == '[') {
			s.push(curr_char);
		}

		else if (curr_char == ')' || curr_char == '}' || curr_char == ']') {
			if (s.empty()) {
				return false;
			}
			else if (s.top() == '(' and curr_char == ')') {
				s.pop();
			}
			else if (s.top() == '{' and curr_char == '}') {
				s.pop();
			}
			else if (s.top() == '[' and curr_char == ']') {
				s.pop();
			}
			else {
				return false;
			}
		}
	}

	if (s.empty()) {
		return true;
	}
	else {
		return false;
	}

}
int main()
{
	string exp;
	cin >> exp;
	bool is_valid = ispar(exp);
	cout << is_valid;
	return 0;
}