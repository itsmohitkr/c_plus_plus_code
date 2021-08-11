#include<iostream>
using namespace std;
// user defined  node class

class node
{
public:
	int data;
	node*next;
	//constructor
	node(int d) {
		data = d;
		next = NULL;
	}
};

// passing a pointer variable by reference-
void insertAt_Head(node*&head, int data)
{
	node*n = new node(data);
	n->next = head;
	head = n;
}

bool search_recursive(node*head, int key)
{	// base case

	if (head == NULL) {
		return false;
	}
	// rec case--> check at head, remaining linked list
	if (head->data == key) {
		return true;
	}
	else {
		return search_recursive(head->next, key);
	}
}

bool search_iterative(node*head, int key)
{
	while (head != NULL) {
		if (head->data == key) {
			return true;  // if key is present  return true
		}
		head = head->next;
	}
	return false;
}

void print(node*head)
{
	node*temp = head;
	while (temp != NULL) {
		cout << temp->data << "->";
		temp = temp->next;
	}
	cout << endl;
}
int main()
{
	node*head = NULL;
	insertAt_Head(head, 5);
	insertAt_Head(head, 4);
	insertAt_Head(head, 3);
	insertAt_Head(head, 2);
	insertAt_Head(head, 1);
	print(head);
	int n;
	cin >> n;
	if (search_recursive(head, n)) {
		cout << "element is " << n << " present..using recursive" << endl;
	}
	else {
		cout << "element is " << n << " not present..using recursive" << endl;
	}
	if (search_iterative(head, n)) {
		cout << "element is " << n << " present..using iteration" << endl;
	}
	else {
		cout << "element is " << n << " not present..using iteration";
	}
	return 0;
}
