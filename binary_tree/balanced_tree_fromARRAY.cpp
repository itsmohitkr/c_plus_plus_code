#include <iostream>
#include<queue>
using namespace std;

class node {
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

node* buildTree() {
    int d;
    cin >> d;

    if (d == -1) {
        return NULL;
    }
    node * root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}
int height(node*root) {
    if (root == NULL) {
        return 0;
    }
    int ls = height(root->left);
    int rs = height(root->right);
    return max(ls, rs) + 1;

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
node* buildTreeFromArray(int a[], int s, int e) {
    //Base Case
    if (s > e) {
        return NULL;
    }
    //Recursive Case
    int mid = (s + e) / 2;
    node* root = new node(a[mid]);
    root->left = buildTreeFromArray(a, s, mid - 1); // passing smaller array 1,2,3
    root->right = buildTreeFromArray(a, mid + 1, e);// passing smaller array 5,6,7
    return root;
}
int main() {
    int a[ ] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    node*root = buildTreeFromArray(a, 0, n - 1);
    bfs(root);
    return 0;
