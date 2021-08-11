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
void insertAt_Head(node *&head, int data)
{
	if (head == NULL)
	{
		head = new node(data);
		return;
	}
	node*n = new node(data); //dyanamic allocation like-- int*n=new int(5);
	n->next = head;
	head = n;
}
node*movelast_node(node*&head) {
	node*prev = NULL;
	node*temp = head;

	while (temp->next != NULL) {
		prev = temp;
		temp = temp->next;
	}
	temp->next = head;
	head = temp;
	prev->next = NULL;

	return head;
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
		insertAt_Head(head, data);
		cin >> data;
	}
}

node* take_input() {

	int d;
	cin >> d;
	node*head = NULL;
	while (d != -1) {
		insertAt_Head(head, d);
		cin >> d;
	}
	return head;
}

int main()
{
	//node*head=NULL;
	node*head = take_input();
	//build_list(head);
	print(head);
	node*new_head = movelast_node(head);
	print(new_head);
	return 0;

}
