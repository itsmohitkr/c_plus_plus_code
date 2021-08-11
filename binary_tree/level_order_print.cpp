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
int height(node*root)
{
	if (root == NULL) {
		return 0;
	}
	int ls = height(root->left);
	int rs = height(root->right);
	return max(ls, rs) + 1;
}
void print_kth_level(node*root, int k)
{
	if (root == NULL) {
		return;
	}
	if (k == 1) {
		cout << root->data << " ";
	}
	print_kth_level(root->left, k - 1);
	print_kth_level(root->right, k - 1);
	return;
}
void print_all_level(node*root)
{	
	int H = height(root);
	for (int i = 0; i <= H; ++i)
	{
		print_kth_level(root, i);
		cout << endl;
	}
	return;
}
int main()
{
	node*root = build_tree();
	cout << "kth level  " << endl;
	print_kth_level(root, 3);
	cout << "all level  " << endl;
	print_all_level(root);
}

