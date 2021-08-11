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

node* merge(node*a, node*b)
{
	if (a == NULL) {
		return b;
	}
	else if (b == NULL) {
		return a;
	}
	node*c; // c is apointer thats points to either a or b depending on(a>,<,=b)

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
int main()
{
	node*head = NULL;
	node*head2 = NULL;
	node*head3 = NULL;

	cin >> head >> head2;
	cout << head << endl << head2 << endl;
	head3 = merge(head, head2);
	cout << head3; // this is printing through operator ovrloading
	return 0;

}
