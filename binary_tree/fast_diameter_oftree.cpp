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

class Pair {
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
	Pair left_tree = fastDiameter(root->left);
	Pair right_tree = fastDiameter(root->right);

	p.height = max(left_tree.height, right_tree.height) + 1;
	p.diameter = max(left_tree.height + right_tree.height, max(left_tree.diameter, right_tree.diameter));
	return p;
}
/* 
pair<int,int> diameter_fast(node*root){
    pair<int, int> p;
    if(root==NULL){
        p.first = p.second = 0;
        // first=height
        // second=diameter
        return p;
    }
    pair<int, int> left_pair = diameter_fast(root->left);
    pair<int, int> right_pair = diameter_fast(root->right);

    // if root is not NULL then pair kya return karega

    p.first = max(left_pair.first, right_pair.first) + 1;
    p.second = max(left_pair.first + right_pair.first, max(left_pair.second, right_pair.second));

    return p;
}
 */
int main()
{
	node*root = build_tree();
	Pair p = fastDiameter(root);
	cout << p.height << endl;
	cout << p.diameter << endl;
}

