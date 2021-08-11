#include <iostream>
#include<queue>
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

int count(node*root) {
	if (root == NULL) {
		return 0;
	}
	int lc = count(root->left);
	int rc = count(root->right);

	return 1 + lc + rc;
}
int sum(node*root) {
	if (root == NULL) {
		return 0;
	}
	return root->data + sum(root->left) + sum(root->right);
}
int main()
{
	node*root = build_tree();
	cout << "total nodes in tree is =" << count(root) << endl;
	cout << "total sum of nodes is =" << sum(root);
}

