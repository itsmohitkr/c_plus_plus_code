#include<iostream>
#include<queue>
using namespace std;
int main() {
	priority_queue<int>pq;  // max heap
		
	// priority_queue<int, vector<int>, greater<int> > pq;  // min heap pass 2 more parameter vector<int>, greater<int>
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int no;
		cin >> no;
		pq.push(no); // o(LOGN)
	}

	// remove all the element from the heap
	while (!pq.empty()) {
		cout << pq.top() << " ";
		pq.pop();
	}
}