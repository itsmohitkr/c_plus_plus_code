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

/*                       ----0  max_level
                1        ----1  level
             2    3      ----2
          4    5     6   --- 3
 */
void printRightview(node*root, int level, int &maxlevel) //
{
	if (root == NULL) {
		return;
	}
	if (maxlevel < level) {
		// have discovered new level
		cout << root->data << " ";
		maxlevel = level;
	}
	printRightview(root->right, level + 1, maxlevel);
	printRightview(root->left, level + 1, maxlevel);
}
void printRightView(node* root) // o(n)--complexity  GFG SOLUTION
{
	if (!root)
		return;

	queue<node*> q;
	q.push(root);

	while (!q.empty())
	{
		// number of nodes at current level
		int n = q.size();

		// Traverse all nodes of current level
		for (int i = 1; i <= n; i++)
		{
			node* temp = q.front();
			q.pop();

			// Print the right most element
			// at the level
			if (i == n)
				cout << temp->data << " ";

			// Add left node to queue
			if (temp->left != NULL)
				q.push(temp->left);

			// Add right node to queue
			if (temp->right != NULL)
				q.push(temp->right);
		}
	}
}
int main()
{
	node*root = build_tree();
	bfs(root);
	cout << endl;
	int maxlevel = 0;
	printRightview(root, 1, maxlevel);
}

