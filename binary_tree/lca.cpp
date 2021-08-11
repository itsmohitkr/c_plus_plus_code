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
// assumptions -both a and b present in tree ,all keys are unique
node* lca(node*root, int a, int b)
{
	if (root == NULL) {
		return NULL;
	}

	if (root->data == a or root->data == b) {
		return root;
	}

	// search in the left and right sub tree
	node* leftans = lca(root->left, a, b);
	node* rightans = lca(root->right, a, b);

	if (leftans != NULL and rightans != NULL) {
		return root;
	}

	if (leftans != NULL) {
		return leftans;
	}
	return rightans;
}
int main()
{
	node*root = build_tree();
	bfs(root);
	cout << endl;
	cout << " lca of 1 and 7 is " << lca(root, 1, 7)->data << endl;
	cout << " lca of 1 and 13 is " << lca(root, 1, 13)->data << endl;

}

