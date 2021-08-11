#include <iostream>
#include <queue>
using namespace std;
class node
{
public:
	int data;
	node*left;
	node*right;

	node(int d) {
		data = d;
		left = NULL;
		right = NULL;
	}
};
// build  tree
node* build_tree()
{
	int d;
	cin >> d;
	if (d == -1) {
		return NULL;
	}
	node*root = new node(d);
	root->left = build_tree();
	root->right = build_tree();
	return root;
}

void bfs(node *root) {
	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while (!q.empty()) {
		node* f = q.front();
		if (f == NULL) {
			cout << endl;
			q.pop();
			if (!q.empty()) {
				q.push(NULL);
			}
		}
		else {
			cout << f->data << ",";
			q.pop();

			if (f->left) {
				q.push(f->left);
			}
			if (f->right) {
				q.push(f->right);
			}
		}
	}
	return;
}
void print_kth_level(node*root, int k)
{
	if (root == NULL) {
		return;
	}
	if (k == 0) {
		cout << root->data << " ";
	}
	print_kth_level(root->left, k - 1);
	print_kth_level(root->right, k - 1);
	return;
}
int printatDistanceK(node*root, node*target, int k)
{
	if (root == NULL) {
		return -1;
	}
	// reach the target node
	if (root == target) {
		print_kth_level(target, k);
		return 0;
	}
	//next step ansestor
	int DL = printatDistanceK(root->left, target, k);

	// Check if target node was found in left subtree

	if (DL != -1) {
		// again there are two case
		
		// ansestor it self or u need to go right ancestor
		if (DL + 1 == k) {
			cout << root->data << " ";
		}
		else {
			print_kth_level(root->right, k - 2 - DL);
		}
		return 1 + DL;
	}
	int DR = printatDistanceK(root->right, target, k);
	if (DL != -1) {
		if (DL + 1 == k) {
			cout << root->data << " ";
		}
		else {
			print_kth_level(root->left, k - 2 - DR);
		}
		return 1 + DR;
	}
	// if node was not present in left or right
	return -1;
}
int main()
{
	node*root = build_tree();
	bfs(root);
	cout << endl;
	node*target = root->left->left;
	printatDistanceK(root, target, 2);
}

