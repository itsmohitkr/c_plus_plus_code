#include <iostream>
#include<map>
#include<vector>
using namespace std;

class node {
public:
    int data;
    node *left;
    node *right;

    node(int d) {
        data = d;
        left = right = NULL;
    }
};
// pass it by reference
void vertical_order_print(node*root, int d, map<int , vector<int>>&m) {
    // base case
    if (root == NULL) {
        return;
    }
    m[d].push_back(root->data);
    vertical_order_print(root->left, d - 1, m);
    vertical_order_print(root->right, d + 1, m);
    return;
}

int main() {
    //code here
    node *root = new node(1);

    root -> left = new node(2);
    root -> right = new node(3);

    root -> left->left = new node(4);
    root -> left->right = new node(5);

    root -> right->left = new node(6);
    root -> right->right = new node(7);

    root -> right->right->right = new node(9);
    root -> left->right->right = new node(8);

    map<int, vector<int>> m;
    int d = 0;
    vertical_order_print(root, d, m);
    cout << endl;
    for (auto p : m) {
        cout << p.first << " -> ";
        for (auto x : p.second) {
            cout << x << ",";
        }
        cout << endl;
    }

}