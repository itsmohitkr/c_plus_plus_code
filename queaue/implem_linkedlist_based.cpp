#include <iostream>
#include<list>
using namespace std;

/* to maintain the FIFO order we insert element at tail and pop from head*/
class Queue
{	int cs;
	list<int>l;
public:
	Queue() {
		cs = 0;
	}
	bool isempty() {
		return cs == 0;
	}
	void push(int data) {
		l.push_back(data);  //insertion at tail
		cs++;

	}
	void pop() {
		if (!isempty()) {
			l.pop_front();
			cs--;
		}
	}
	int front() {
		return l.front();
	}
};
int main()
{
	Queue q;
	for (int i = 1; i <= 6; i++)
	{
		q.push(i);
	}
	q.pop();
	q.push(8);
	while (!q.isempty()) {
		cout << q.front() << " ";
		q.pop();
	}
	return 0;

}