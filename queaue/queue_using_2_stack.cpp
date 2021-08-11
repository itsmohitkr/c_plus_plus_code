#include <iostream>
#include <stack>
using namespace std;

class queue {
private:
	stack<int>s1, s2;
public:
	void push(int data) {
		s1.push(data);
	}

	int pop() {
		if (s2.empty()) {
			while (!s1.empty()) {
				s2.push(s1.top());
				s1.pop();
			}

		}
		int x = s2.top();
		s2.pop();
		return x;
	}

	int size() {
		return s1.size() + s2.size();
	}

	bool empty() {
		return size() == 0;
	}


};

int main() {
	queue q;

	for (int i = 0; i < 5; i++) {
		q.push(i);
		cout << i << " ";
	}
	cout << endl;
	while (!q.empty()) {
		cout << q.pop() << " ";
	}


}