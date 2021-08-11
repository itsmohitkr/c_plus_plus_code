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
	if (head == NULL)
	{
		head = new node(data);
		return;
	}
	node*tail = head;
	while (tail->next != NULL)
	{
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

ostream& operator<<(ostream &os, node*&head) // os is the another name for cout obj.
{
	print(head);
	return os;
}
int main()
{
	node*head = NULL;
	node*head2 = NULL;
	cin >> head >> head2;
	cout << head << endl << head2;
	return 0;

}
