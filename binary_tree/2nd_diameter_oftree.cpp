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

int height(node*root)
{
	if (root == NULL) {
		return 0;
	}
	int ls = height(root->left);
	int rs = height(root->right);
	return max(ls, rs) + 1;
}
class Pair {  // each node is going to return pair of H and D
public:
	int height;
	int diameter;
};

Pair fastDiameter(node*root) {
	Pair p;
	if (root == NULL) {
		p.diameter = p.height = 0;
		return p;
	}
	//Otherwise
	Pair left = fastDiameter(root->left);
	Pair right = fastDiameter(root->right);

	p.height = max(left.height, right.height) + 1;
	p.diameter = max(left.height + right.height, max(left.diameter, right.diameter));
	return p;
}

int main()
{
	node*root = build_tree();
	Pair p = fastDiameter(root);
	cout << p.height << endl;
	cout << p.diameter << endl;
	return 0;
}

