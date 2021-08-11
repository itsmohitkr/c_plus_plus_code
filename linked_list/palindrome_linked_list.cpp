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

node* take_input() {

	int d;
	cin >> d;
	node*head = NULL;
	while (d != -1) {
		insertAt_tail(head, d);
		cin >> d;
	}
	return head;
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

bool ispalindrome(node*head1, node*head2) {

	while (head1 != NULL and head2 != NULL) {
		if (head1->data == head2->data) {
			head1 = head1->next;
			head2 = head2->next;

		}
		else {
			return false;
		}
	}
	return true;
}

void isPalindrome(node *head)
{
	//your code

	node*mid = midpoint(head);

	node*a = head;

	node*b = mid->next;
	mid->next = NULL;

	node*c = reverse_recu(b);
	bool check = ispalindrome(a, c);
	if (check == true) {
		cout << "palindrome";
	}
	else {
		cout << "not palindrome";
	}
}

int main()
{
	node*head = take_input();
	print(head);
	if (head->next == NULL) {
		cout << "palindrome";
	}
	else {
		isPalindrome(head);
	}

	return 0;

}
