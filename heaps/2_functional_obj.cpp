#include <iostream>
#include<queue>
#include<cstring>
using namespace std;
class person
{
public:
	string name;
	int age;
	person() {

	}
	person(string n, int a) {
		name = n;
		age = a;
	}
};
class personCompare {    // and inthis class a operator should be ovrloaded
public:
	bool operator()(person A, person B ) {
		return A.age < B.age;
	}
};
int main()
{
	int n;
	cin >> n;
	priority_queue<person, vector<person>, personCompare>pq;// here we dont make any comparator function instead we make a class
	for (int i = 0; i < n; ++i)
	{
		string name ;
		int age;
		cin >> name >> age;
		person p(name, age);
		pq.push(p);
	}
	cout << endl;
	int k = 3; // we want top three element from the heap
	for (int i = 0; i < k; ++i)
	{
		person p = pq.top();
		cout << p.name << " " << p.age << endl;
		pq.pop();
	}
	return 0;
}