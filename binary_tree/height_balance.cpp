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
class HBpair
{
public:
	int height;
	bool balance;
};
HBpair isheightBalance(node*root)
{
	HBpair p;
	if (root == NULL) {
		p.height = 0;
		p.balance = true;
		return p;
	}
	// rec case
	HBpair left = isheightBalance(root->left);
	HBpair right = isheightBalance(root->right);
	p.height = max(left.height, right.height) + 1;
	if (abs(left.height - right.height) <= 1 && left.balance && right.balance) {
		p.balance = true;
	}
	else {
		p.balance = false;
	}
	return p;
}

// brute force -- o(n*n)


bool isheightbalance(node*root) {
	if (root == NULL) {  
		return true;
	}
	int lh = height(root->left);
	int rh = height(root->right);

	if (abs(lh - rh) <= 1 and isheightbalance(root->left) and isheightbalance(root->right)) {
		return true;
	}
	else {

		return false;
	}
}
int main()
{
	node*root = build_tree();
	if (isheightBalance(root).balance) {
		cout << "balanced";
	}
	else {
		cout << "not balanced";
	}
	return 0;
}

