#include <iostream>
#include<queue>
using namespace std;

int main() {
	//code here
	priority_queue<int> max_heap; // max heap
	priority_queue<int, vector<int>, greater<int>> min_heap; // min heap

	int d;
	cin >> d;
	max_heap.push(d);

	float med = d;
	cout << "median=" << med << endl;

	cin >> d;

	while (d != -1) {
		// logic
		if (max_heap.size() > min_heap.size()) {
			if (d < med) {
				min_heap.push(max_heap.top());
				max_heap.pop();
				max_heap.push(d);
			}
			else {
				min_heap.push(d);
			}
			med = (min_heap.top() + max_heap.top()) / 2.0;
		}
		else if (max_heap.size() == min_heap.size()) {
			if (d < med) {
				max_heap.push(d);
				med = max_heap.top();
			}
			else {
				min_heap.push(d);
				med = min_heap.top();
			}
		}
		else {
			if (d > med) {
				max_heap.push(min_heap.top());
				min_heap.pop();
				min_heap.push(d);
			}
			else {
				max_heap.push(d);
			}
			med = (min_heap.top() + max_heap.top()) / 2.0;
		}
		cout << "median = " << med << endl;
		cin >> d;
	}
	return 0;
}