#include<iostream>
using namespace std;
// user defined  node class

class node
{
public:
	int data;
	node *next;
	//constructor
	node(int d)
	{
		data = d;
		next = NULL;
	}
};

// passing a pointer variable by reference-
void insertAt_Head(node *&head, int data)
{
	node*n = new node(data); //dyanamic allocation like-- int*n=new int(5);
	n->next = head;
	head = n;
}

void print(node*head)
{
	node*temp = head;
	while (temp != NULL)
	{
		cout << temp->data << "->";
		temp = temp->next;
	}
	cout << endl;
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

int main()
{
	node *head = NULL;
	insertAt_Head(head, 5);
	insertAt_Head(head, 2);
	insertAt_Head(head, 3);
	insertAt_Head(head, 1);
	insertAt_Head(head, 0);
	print(head);
	node*m = midpoint(head);
	cout << m->data << " ";
}
