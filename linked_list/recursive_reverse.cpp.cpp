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
node* reverse_recu(node*&head)
{
	// base case
	if (head->next == NULL || head == NULL) { // head =null means no node
		return head;
	}
	// rec case
	node*small_head = reverse_recu(head->next);
	node*temp = head->next;  // temp is nothing but next pointer of head

	temp->next = head;
	head->next = NULL;
	return small_head;
}
int main()
{
	node *head = NULL;
	insertAt_Head(head, 5);
	insertAt_Head(head, 4);
	insertAt_Head(head, 3);
	insertAt_Head(head, 2);
	print(head);
	head = reverse_recu(head);
	print(head);
}
