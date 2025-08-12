#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node *left;
    Node *right;

    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

int count_leaf_nodes(Node* root){
    if(root == NULL) return 0;

    if(root->left == NULL && root->right == NULL) return 1;

    int l = count_leaf_nodes(root->left);
    int r = count_leaf_nodes(root->right);

    return l + r;
}



int main(){
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);
    Node *j = new Node(110);
    Node *k = new Node(120);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    d->left = g;
    d->right = h;
    b->left = e;
    b->right = f;
    e->right = i;
    f->left = j;
    f->right = k;

cout << "Total leaves: "<< count_leaf_nodes(root);
    return 0;
}
