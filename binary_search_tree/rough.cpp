#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *left;
    node *right;

    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

node* insert_in_bst(node*root,int data){
    if(root==NULL){
        return new node(data);
    }
    if(data<=root->data){
        root->left = insert_in_bst(root->left, data);
    }
    else{
        root->right = insert_in_bst(root->right, data);
    }
    return root;
}

node*build_tree(){
    int d;
    cin >> d;
    node *root = NULL;
    while(d!=-1){
        root = insert_in_bst(root, d);
        cin >> d;
    }
    return root;
}
bool search_in_bst(node*root,int data){
    if(root==NULL){
        return false;
    }
    if(root->data==data){
        return true;
    }
    if(data<=data){
        return search_in_bst(root->left, data);
    }
    else{
        return search_in_bst(root->right, data);
    }

}

node* delete_in_bst(node*root,int data){
    if(root==NULL){
        return NULL;
    }
    else if(data<root->data){
        root->left = delete_in_bst(root->left, data);
        return root;
    }
    else if(root->data==data){
        // 1
        if(root->left==NULL and root->right==NULL){
            delete root;
            return NULL;
        }

        // 2.

        if(root->left!=NULL and root->right==NULL){
            node *temp = root->left;
            delete root;
            return temp;
        }
        if(root->right!=NULL and root->left==NULL){
            node *temp = root->right;
            delete root;
            return temp;
        }
        // 3

        node *replace = root->right;
        while(replace->next!=NULL){
            replace = replace->next;
        }
        root->data = replace->data;
        root->right = delete_in_bst(root->right, replace->data);
        return root;
    }
    else{
        root->right = delete_in_bst(root->right, data);
        return root;
    }
}

bool is_bst(node*root,int minv=INT_MIN, int maxv=INT_MAX){
    if(root==NULL){
        return true;
    }

    if(root->data>=minv and root->data<=maxv and is_bst(root->left,minv,root->data) and is_bst(root->right,root->data,maxv)){
        return true;
    }
    else{
        return false;
    }

}

pair<node*,node*> flatten(node*root){
    pair<node *, node *> p;
    if(root==NULL){
        p.first = NULL;
        p.second = NULL;
        return p;
    }

    if(root->left==NULL and root->right==NULL)
    {
        p.first = root;
        p.second = root;
        return p;
    }

    if(root->left!=NULL and root->right==NULL){
        pair<node *, node *> llpair = flatten(root->left);
        llpair.second->right = root;
        p.first = llpair.first;
        p.second = root;
        return p;
    }
    if(root->right!=NULL and root->left==NULL){
        pair<node *, node *> rpair = flatten(root->right);
        root->right = rpair.first;

        p.first = root;
        p.second = rpair.second;
        return p;
    }

    if(root->left!=NULL and root->right!=NULL){
        pair<node *, node *> lp = flatten(root->left);
        pair<node *, node *> rp = flatten(root->right);

        lp.second->right = root;
        root->right = rp.first;

        p.first = lp.first;
        p.second = rp.second;

    }
    return p;
}

void print(node*root){
    if(root==NULL){
        return;
    }
    cout << root->data << " ";
    print(root->left);
    print(root->right);
    return;
}

int main(){
    node *root = build_tree();
    print(root);
}