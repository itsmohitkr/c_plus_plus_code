#include <iostream>
using namespace std;

class Queue {

private:
	int *arr;
	int f, r, ms;
public:

	Queue(int ds = 5) {
		arr = new int[ms];
		f = 0;
		r = ms - 1;
		cs = 0;
		ms = ds;
	}

	bool full() {
		return cs == ms;
	}
	bool empty() {
		return cs == 0;
	}
	void push(int data) {
		if (!full()) {
			r = (r + 1) % md;
			cs++;
		}
	}

	void pop() {
		if (!empty()) {
			f = (f + 1) % ms;
			ms--;
		}
	}

	int front() {
		return arr[f];
	}

	~Queue() {
		if (arr != NULL) {
			delete [] arr;
			arr = NULL;
		}
	}

};