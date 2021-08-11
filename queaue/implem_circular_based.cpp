#include <iostream>
using namespace std;
class Queue
{
	int *arr;  //circular array that we are going to build up
	int ms;   // max size
	int cs;   // current size
	int f;
	int r;
public:
	Queue(int ds = 5) { // default size
		arr = new int[ds];  // created a dynamic array-- arr
		cs = 0;
		ms = ds;
		f = 0;
		r = ms - 1;
	}
	bool full() {
		return cs == ms;
	}
	bool empty() {
		return cs == 0;
	}
	void push(int data) {  // data as input parameter
		if (!full()) {  // check if Queue is not full
			r = (r + 1) % ms;
			arr[r] = data;
			cs++;
		}
	}
	void pop() {
		if (!empty()) {
			f = (f + 1) % ms;
			cs--;
		}
	}
	int front() {
		return arr[f];
	}
	~Queue() {
		if (arr != NULL) {    // delete will delete memeory on heap and then set arr to NULL
			delete []arr;		// when queue goes outof the scope all other data member will be deleted
			arr = NULL;
		}
	}

};
int main()
{
	Queue q(15);
	for (int i = 1; i <= 6; i++)
	{
		q.push(i);
	}
	q.pop();
	q.push(7);
	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
	return 0;
}