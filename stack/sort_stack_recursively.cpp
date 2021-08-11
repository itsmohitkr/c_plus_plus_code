#include <iostream>
#include <stack>
using namespace std;

void insert_stack(stack<int>&s, int temp) {
  if (s.size() == 0 || s.top() <= temp) {
    s.push(temp);
    return;
  }

  int x = s.top();
  s.pop();
  insert_stack(s, temp);
  s.push(x);
}

void sort(stack<int>&s)
{
  //Your code here
  // base case
  if (s.size() == 0) {
    return;
  }

  int temp = s.top();
  s.pop();
  sort(s);
  insert_stack(s, temp);
}


int main()
{
  stack<int>s;
  s.push(0);
  s.push(2);
  s.push(1);
  s.push(4);
  s.push(3);
  sort(s);
  while (!s.empty()) {
    cout << s.top() << endl;
    s.pop();
  }
  return 0;
}