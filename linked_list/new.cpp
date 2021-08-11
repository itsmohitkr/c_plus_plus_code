#include <iostream>
using namespace std;
class node
{
public:
	int data;
	node*next;
	//constructor
	node(int data) {
		this->data = data;
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
}
void push(node*&head, int data)
{
	node*ptr1 = new node(data);
	node*temp = head; // used to transverse the linked list
	ptr1->next = head;
	if (head != NULL) {
		while (temp->next != head) {
			temp = temp->next;
		}
		temp->next = ptr1;
	}
	else {
		ptr1->next = ptr1;
	}
	head = ptr1;

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