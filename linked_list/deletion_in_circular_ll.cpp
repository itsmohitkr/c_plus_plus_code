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
	cout << temp->data << "end";
	cout << endl;
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
// deletion in circular linked list
node* getnode(node*head, int data) {
	node*temp = head;

	// for all nodes except last node
	while (temp->next != head) {
		if (temp->data == data) {
			return temp;
		}
		temp = temp->next;
	}

	// out of loop, check for last node

	if (temp->data == data) {
		return temp;
	}
	return NULL;
}
void deletenode(node*&head, int data) {
	node*del = getnode(head, data);

	if (del == NULL) {
		return;
	}
	// otherwise
	if (head == del) {
		head = head->next;
	}

	node*temp = head;
	//stop one step behind the node to be deleted
	while (temp->next != del) {
		temp = temp->next;
	}
	temp->next = del->next;
	delete del;
}
int main()
{
	node* head = NULL;
	push(head, 10);
	push(head, 20);
	push(head, 30);
	push(head, 40);
	push(head, 50);
	push(head, 60);
	printlist(head);
	deletenode(head, 30);
	printlist(head);
	deletenode(head, 60);
	printlist(head);
	return 0;
}