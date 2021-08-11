#include <iostream>
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
	node*root = new node(d);  // new node is created
	root->left = build_tree();  // and it makes a recursive call on left
	root->right = build_tree();  // and it makes a recursive call on right
	return root;   // when it return root it gets attached with parent root
}

// print tree

void print_tree(node* root)
{
	if (root == NULL) {
		return;
	}
	//otherwise,print root first followed by subtrees(child)
	cout << root->data << " ";
	print_tree(root->left);
	print_tree(root->right);
}

int main()
{
	node*root = build_tree();
	print_tree(root);
}

