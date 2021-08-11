#include <iostream>
using namespace std;

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

void printlist(node*head)
{
	node*temp = head;
	while (temp->next != head) {
		cout << temp->data << "->";
		temp = temp->next;
	}
	cout << temp->data << " " << "end";
}
void push(node*&head, int data)
{
	node*n = new node(data);
	node*temp = head; // used to transverse the linked list
	n->next = head;
	if (temp != NULL) {
		while (temp->next != head) {
			temp = temp->next;
		}
		temp->next = n;
	}
	else {
		n->next = n; // if there is only one node then it should point to itself
	}
	head = n;

}

int main()
{
	node* head = NULL;
	push(head, 10);
	push(head, 20);
	push(head, 30);
	push(head, 40);
	printlist(head);
	return 0;
}