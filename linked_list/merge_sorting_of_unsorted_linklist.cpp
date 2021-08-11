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
void insertAt_tail(node*&head, int data )
{
	if (head == NULL) {
		head = new node(data);
		return;
	}
	node*tail = head;

	while (tail->next != NULL) {
		tail = tail->next;
	}
	tail->next = new node(data);
	return;
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
void build_list(node*&head)
{
	int data;
	cin >> data;
	while (data != -1) {
		insertAt_tail(head, data);
		cin >> data;
	}
}

istream& operator>>(istream &is, node*&head)
{
	build_list(head);
	return is;
}

ostream& operator<<(ostream &os, node*&head)
{
	print(head);
	return os;
}

node* midpoint(node*&head)
{
	if (head->next == NULL || head == NULL) {
		return head;
	}
	node*slow = head;
	node*fast = head->next;
	while (fast != NULL and fast->next != NULL) {
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}
node* merge(node*a, node*b)
{
	if (a == NULL) {
		return b;
	}
	else if (b == NULL) {
		return a;
	}
	node*c;
	// compare a and b for smaller element;
	if ( a->data < b->data) {
		c = a;
		c->next = merge(a->next, b);
	}
	else {
		c = b;
		c->next = merge(a, b->next);
	}
	return c;

}
node* mergesort(node* head)
{
	//base case
	if (head == NULL || head->next == NULL) {
		return head;
	}
	// rec case
	// mid point
	node* mid = midpoint(head);
	node*a = head;
	node*b = mid->next;
	mid->next = NULL;
	// recursive sort
	a = mergesort(a);
	b = mergesort(b);
	// merge a,b
	node*c = merge(a, b);
	return c;
}
int main()
{
	node*head = NULL;
	cin >> head;
	cout << "original list " << head;
	head = mergesort(head);
	cout << "sort list " << head;
	return 0;

}
