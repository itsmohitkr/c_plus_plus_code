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
	node*root = new node(d);
	root->left = build_tree();
	root->right = build_tree();
	return root;
}
// print tree
void print_tree(node* root)
{
	if (root == NULL) {
		return;
	}
	//otherwise,print root first followed by subtrees(child)
	cout << root->data << " " ;
	print_tree(root->left);
	print_tree(root->right);
}
void print_tree_inorder(node* root)
{
	if (root == NULL) {
		return;
	}
	//otherwise,print left root right
	print_tree_inorder(root->left);
	cout << root->data << " ";
	print_tree_inorder(root->right);
}
void print_tree_post(node* root)
{
	if (root == NULL) {
		return;
	}
	//otherwise,print left right root
	print_tree_post(root->left);
	print_tree_post(root->right);
	cout << root->data << " ";
}
int main()
{
	node*root = build_tree();
	print_tree(root);
	cout << endl;
	print_tree_inorder(root);
	cout << endl;
	print_tree_post(root);
}

