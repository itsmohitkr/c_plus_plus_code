#include <iostream>
#include <queue>
#include<pair>
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
class pair
{
public:
	int branch_sum;
	int max_sum;
	pair() {
		branch_sum = 0;
		max_sum = 0;
	}
};
pair max_sum_path(node*root)
{
	pair p;
	if (root == NULL) {
		return p;
	}
	pair left = max_sum_path(root->left);
	pair right = max_sum_path(root->right);

	// construct two values
	int opn1 = root->data;
	int opn2 = left.branch_sum + root->data;
	int opn3 = right.branch_sum + root->data;
	int opn4 = right.branch_sum + left.branch_sum + root->data;

	int current_ans_through_root = max(opn1, max(opn2, max(opn3, opn4)));
	// branch sum of current root
	p.branch_sum = max(left.branch_sum, max(right.branch_sum, 0)) + root->data;
	p.max_sum = max(left.max_sum, max(right, max_sum, current_ans_through_root));
	return p;
}
int main()
{
	node*root = build_tree();
	bfs(root);
	cout << endl;
	cout << "max sum path " << max_sum_path(root).max_sum << endl;
	return 0;

}

