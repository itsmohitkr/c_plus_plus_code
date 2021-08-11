#include<iostream>
using namespace std;
// user defined  node class

class node
{
public:
	int data;
	node*next;
	//constructor
	node(int d)
	{
		data = d;
		next = NULL;
	}
};

// passing a pointer variable by reference-
void insertAt_Head(node*&head, int data)
{
	if (head == NULL)
	{
		head = new node(data);
		return;
	}
	node*n = new node(data);
	n->next = head;
	head = n;
}

int len(node*head)
{
	int len = 0;
	while (head != NULL)
	{
		head = head->next;
		len++;
	}
	return len;
}
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
void insertin_middle(node*&head, int data, int p)
{
	if (head == NULL || p == 0)
	{
		insertAt_Head(head, data);
	}
	else if (p > len(head))
	{
		insertAt_tail(head, data);
	}
	else {
		// insert in the middle
		// takes p-1 jump
		int jump = 1;
		node*temp =  head; // initially pointing to head
		while (jump <= p - 1)
		{
			temp = temp->next;
			jump++;
		}
		node*n = new node(data);
		n->next = temp->next;
		temp->next = n;
	}
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
int main()
{
	node*head = NULL;
	insertAt_Head(head, 5);
	insertAt_Head(head, 3);
	insertAt_Head(head, 2);
	print(head);
	insertin_middle(head, 4, 2);
	insertAt_tail(head, 6);

	print(head);
	return 0;

}
