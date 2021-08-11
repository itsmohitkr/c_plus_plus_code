#include <iostream>
#include<queue>
#include<climits>
using namespace std;
class node{
    public:
        int data;
        node *left;
        node *right;

        node(int d){
            data = d;
            left = right = NULL;
        }
};
node*insertInBST(node*root,int data){
    if(root==NULL){
        return new node(data);
    }
    // agar root null nahi hai 
    if(data<root->data){
        root->left = insertInBST(root->left,data);
    }
    else{
        root->right = insertInBST(root->right,data);
    }
    return root;

}
node*buildtree(){
    int d;
    cin >> d;
    node *root = NULL;
    while(d!=-1){
        root = insertInBST(root, d);
        cin >> d;
    }
    return root;
}
void bfs(node *root) {
	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while (!q.empty()) {
		node* f = q.front();
		if (f != NULL) {
			cout << f->data << ",";
			q.pop();

			if (f->left) {
				q.push(f->left);
			}
			if (f->right) {
				q.push(f->right);
			}
		}
		else {
			cout << endl;
			q.pop();
			if (!q.empty()) {
				q.push(NULL);
			}
		}
	}
	return;
}
void inorder(node*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout << root->data<<" ";
    inorder(root->right);
}

bool search(node*root,int k){
    if(root==NULL){
        return false;
    }
    if(root->data==k){
        return true;
    }
    if(k<root->data){
        return search(root->left, k);
    }
    else
    {
        return search(root->right, k);
    }
    
}
node* deleteInBST(node*root,int data){
    if(root==NULL){
        return NULL;
    }
    else if(data<root->data){
        root->left = deleteInBST(root->left, data);
        return root;
    }
    else if(root->data==data){
        // case 1
        // leaf node
        if(root->left==NULL and root->right==NULL){
            delete root;
            return NULL;
        }

        // case 2
        // middle node
        if(root->left and !root->right){
            node *temp = root->left;
            delete root;
            return temp;
        }
        if(root->right and !root->left){
            node *temp = root->right;
            delete root;
            return temp;
        }

        // case 3
        // delete root node
        node *temp = root->right;
        while(temp->left){
            temp = temp->left;
        }
        root->data = temp->data;
        root->right = deleteInBST(root->right, temp->data);
        return root;
    }
    else{
        root->right = deleteInBST(root->right, data);
        return root;
    }

}

bool isbst(node*root,int min_val=INT_MIN ,int max_val=INT_MAX){
    if(root==NULL){
        return true;
    }
    if(root->data>min_val and root->data<max_val and isbst(root->left,min_val,root->data) and isbst(root->right,root->data,max_val)){
        return true;
    }
    else{
        return false;
    }
}

pair<node*,node*>flatten(node*root){
    pair<node *, node *> p;
    if(root==NULL){
        p.first = p.second = NULL;
        return p;
    }
    // if leaf node
    if(!root->left and !root->right){
        p.first = p.second = root;
        return p;
    }

    // if right==NULL

    if(root->left!=NULL and root->right==NULL){
        pair<node *, node *> left_pair = flatten(root->left);
        left_pair.second->right = root;

        p.first = left_pair.first;
        p.second = root;
        return p;
    }

    // left==NULL
    if(root->left==NULL and root->right!=NULL){
        pair<node *, node *> right_pair = flatten(root->right);
        root->right = right_pair.first;

        p.first = root;
        p.second = right_pair.second;
        return p;
    }

    // if both not NULL
    pair<node *, node *> left_pair = flatten(root->left);
    pair<node *, node *> right_pair = flatten(root->right);

    left_pair.second->right = root;
    root->right = right_pair.first;

    p.first = left_pair.first;
    p.second = right_pair.second;

    return p;
}
int main(){
    node *root = buildtree();
    inorder(root);
    cout << endl;
    bfs(root);
    // if(search(root,16)){
    //     cout << "found";
    // }
    // else
    // {
    //     cout << "no";
    // }
    // root = deleteInBST(root, 10);
    // bfs(root);
    // if(isbst(root)){
    //     return true;
    // }
    // else{
    //     return false;
    // }

     pair<node*,node*> ans = flatten(root);
    node*temp = ans.first;

    while (temp != NULL) {
        cout << temp->data << " --> ";
        temp = temp->right;
    }
    cout << endl;
}