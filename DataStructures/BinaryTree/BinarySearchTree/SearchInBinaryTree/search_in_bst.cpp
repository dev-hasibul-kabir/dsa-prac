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

bool search_in_bst(Node* root, int x){
    if(root == NULL) return false;
    if(root->val == x) return true;

    if(root->val > x){
        return search_in_bst(root->left, x);
    }else{
        return search_in_bst(root->right, x);
    }
}

int main(){
    Node *root = new Node(40);
    Node *a = new Node(30);
    Node *b = new Node(50);
    Node *c = new Node(25);
    Node *d = new Node(35);
    Node *e = new Node(45);
    Node *f = new Node(60);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    b->left = e;
    b->right = f;

    cout <<  search_in_bst(root, 60);
    return 0;
}
