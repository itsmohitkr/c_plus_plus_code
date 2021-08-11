#include <iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;
    // constructor
    node(int d){
        data = d;
        left = right = NULL;
    }
};

node* build_tree(){
    int d;
    cin >> d;
    if(d==-1){
        return NULL;
    }
    node *root = new node(d);
    root->left = build_tree();
    root->right = build_tree();

    return root;
}
void print_pre(node*root){
    if(root==NULL){
        return;
    }

    cout << root->data << " ";
    print_pre(root->left);
    print_pre(root->right);
}
void print_post(node*root){
    if(root==NULL){
        return;
    }

    print_post(root->left);
    print_post(root->right);
    cout << root->data << " ";
}
void print_in(node*root){
    if(root==NULL){
        return;
    }

    print_in(root->left);
    cout << root->data << " ";
    print_in(root->right);
}
int heightOfTree(node*root){
    if(root==NULL){
        return 0;
    }
    int lh = heightOfTree(root->left);
    int rh = heightOfTree(root->right);

    return max(lh, rh) + 1;
}
void print_kth_level(node*root,int k){
    if(root==NULL){
        return;
    }
    if(k==1){
        cout << root->data << " ";
    }
    print_kth_level(root->left,k-1);
    print_kth_level(root->right,k-1);
}
void print_level_recursive(node*root){
    int h = heightOfTree(root);

    for (int i = 1; i <= h;i++){
        print_kth_level(root, i);
        cout << endl;
    }

}

void bfs(node*root){
    if(root==NULL){
        return;
    }
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node *f = q.front();
        cout << f->data << " ";
        q.pop();
        if(f->left){
            q.push(f->left);
        }
        if(f->right){
            q.push(f->right);
        }
    }
    return;
}

void bfs_level(node*root){
    if(root==NULL){
        return;
    }
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node *f = q.front();
        if(f!=NULL){
            cout << f->data << " ";
            q.pop();
            if(f->left){
                q.push(f->left);
            }
            if(f->right){
                q.push(f->right);
            }
        }
        else{
            cout << endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        }
    }
    return;
}
int count_node(node*root){
    if(root==NULL){
        return 0;
    }
    int lc = count_node(root->left);
    int rc = count_node(root->right);
    return lc + rc + 1;
}
int sum_of_node(node*root){
    if(root==NULL){
        return 0;
    }
    int lc = sum_of_node(root->left);
    int rc = sum_of_node(root->right);
    return lc + rc + root->data;
}
int diameter(node*root){
    if(root==NULL){
        return 0;
    }

    int lh = heightOfTree(root->left);
    int rh = heightOfTree(root->right);
    // case 1
    int option1 = lh + rh;
    int option2 = diameter(root->left);
    int option3 = diameter(root->right);
    return max(option1,max(option2,option3));
}

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

int replace_sum(node*root){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL and root->right==NULL){
        return root->data;
    }
    int lt = replace_sum(root->left);
    int rt = replace_sum(root->right);

    int temp = root->data;
    root->data = lt + rt;
    return temp + root->data;
}

bool isbalance(node*root){
    if(root==NULL){ // bec uska height 0 hoga so 0-0<=1
        return true;
    }
    int lh = heightOfTree(root->left);
    int rh = heightOfTree(root->right);

    if(abs(lh-rh)<=1 and isbalance(root->left) and isbalance(root->right)){
        return true;
    }
    else{
        return false;
    }
}
pair<int,bool> is_Height_balanced(node*root){
    pair<int, bool> p;
    if(root==NULL){
        p.first = 0;
        p.second = true;
        return p;
    }
    pair<int, bool> left_pair = is_Height_balanced(root->left);
    pair<int, bool> right_pair = is_Height_balanced(root->right);
    // if root==NULL nahi hua to
    p.first = max(left_pair.first ,right_pair.first) + 1;
    if(abs(left_pair.first-right_pair.first)<=1 and left_pair.second and right_pair.second){
        p.second = true;
    }
    else{
        p.second = false;
    }
    return p;
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

node* createTreeFromTrav(int *in, int *pre, int s, int e) {
    static int i = 0;
    //Base Case
    if (s > e) {
        return NULL;
    }
    //Rec Case
    node *root = new node(pre[i]);

    int index = -1;
    for (int j = s;j<= e; j++) {
        if (in[j] == pre[i]) {
            index = j;
            break;
        }
    }
    i++;
    root->left = createTreeFromTrav(in, pre, s, index - 1);
    root->right = createTreeFromTrav(in, pre, index + 1, e);
    return root;
}

void right_view(node*root){
    if(root==NULL){
        return;
    }
    queue<node *> q;
    q.push(root);
    while(!q.empty()){
        // calculate the size of the queue first
        int n = q.size();
        for (int i = 1; i <= n;i++){
            node *f = q.front();
            q.pop();
            if(i==n){
                cout << f->data << " ";
            }

            if(f->left){
                q.push(f->left);
            }
            if(f->right){
                q.push(f->right);
            }
        }
    }
    
}

void righ_view_another(node*root,int level,int &max_level){
    if(root==NULL){
        return;
    }

    if(max_level<level){
        cout << root->data<<" ";
        max_level = level;
    }
    righ_view_another(root->right, level + 1, max_level);
    righ_view_another(root->left, level + 1, max_level);

}
// Prints all nodes at distance k from a given target node.
// The k distant nodes may be upward or downward.  This function
// Returns distance of root from target node, it returns -1 if target
// node is not present in tree rooted with root.
// int printatDistanceK(node*root,node*target,int k){
//     if(root==NULL){
//         return -1;
//     }
//     // If target is same as root.  Use the downward function
//     // to print all nodes at distance k in subtree rooted with
//     // target or root
//     if(root==target){
//         print_kth_level(root, k);
//         return 0;
//     }
//     int ld = printatDistanceK(root->left, target, k);

//     // means target node mil gya 

// }

node*lca(node*root,int a,int b){
    if(root==NULL){
        return NULL;
    }
    if(root->data==a or root->data==b){
        return root;
    }
    node *left_tree = lca(root->left, a, b);
    node *right_tree = lca(root->right, a, b);
    if(left_tree!=NULL and right_tree!=NULL){
        return root;
    }
    if(left_tree!=NULL){
        return left_tree;
    }
    return right_tree;
}
int main(){
    //  8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
    node *root = build_tree();
    // print_pre(root);
    // cout << endl;
    // print_level_recursive(root);
    // bfs(root);
    // cout << endl;
    // bfs_level(root);
    // cout << endl;
    // cout << count_node(root)<<endl;
    // cout << sum_of_node(root)<<endl;

    // pair<int, int> d = diameter_fast(root);
    // cout<<d.second<<endl;
    
    // replace_sum(root);
    // bfs_level(root);
    // pair<int, bool> p = is_Height_balanced(root);

    // if(p.second){
    //     cout << "yes";
    // }
    // else{
        // cout << "no";
    // }

    // int a[ ] = {1, 2, 3, 4};
    // int n = 4;
    // node*root = buildTreeFromArray(a, 0, n - 1);
    // bfs_level(root);
    // return 0;

    // int in[] = {3, 2, 8, 4, 1, 6, 7, 5};
    // int pre[] = {1, 2, 3, 4, 8, 5, 6, 7};
    // int n = sizeof(in) / sizeof(int);
    // node*root = createTreeFromTrav(in, pre, 0, n - 1);
    // bfs(root);
    // return 0;

    // right_view(root);
    // int level = 1;
    // int max_level = 0;
    // righ_view_another(root,level,max_level);

    // node*target = root->left->left;
	// printatDistanceK(root, target, 2);
    cout << " lca of 1 and 7 is " << lca(root, 9, 7)->data << endl;
}