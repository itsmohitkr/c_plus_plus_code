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
void bfs(node*root)
{
	queue<node*>q;   // here we are not making the queue of int type-- this queue will keep the address of root node
	q.push(root);
	while (!q.empty()) {
		node*f = q.front();
		cout << f->data << ",";
		q.pop();
		if (f->left) {    // it means left child is existing
			q.push(f->left);
		}
		if (f->right) {   // it means right child is existing
			q.push(f->right);
		}
		
	}
	return;
}
int main()
{
	node*root = build_tree();
	bfs(root);
}

