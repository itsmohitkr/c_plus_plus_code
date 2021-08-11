#include <iostream>
#include <queue>
using namespace std;

// implement a stack using 2 queue

// template<typename int>
class stack {
	queue<int>q1, q2;
public:
	void push(int x) {
		q1.push(x);   // we will always push element to q1(fill)
	}
	void pop() {
		// q2 will remains empty
		//remove the last added element from q1
		//we have to move first n-1 elements in q2
		//interchange the name of q1 and q2
		if (q1.empty()) {
			return;
		}

		while (q1.size() > 1) {
			int element = q1.front();
			q2.push(element);
			q1.pop();
		}

		//removes the last element
		q1.pop();

		//swap q1 and q2

		swap(q1, q2);
	}

	int top() {
		while (q1.size() > 1) {
			int element = q1.front();
			q2.push(element);
			q1.pop();
		}
		// 1 element in q1
		int element = q1.front();
		q1.pop();
		q2.push(element);

		swap(q1, q2);
		return element;
	}

	int size() {
		return q1.size() + q2.size();
	}

	bool empty() {
		return size() == 0;
	}
};

int main() {
	stack s;

	s.push(1);
	s.push(2);
	s.push(3);

	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}

}