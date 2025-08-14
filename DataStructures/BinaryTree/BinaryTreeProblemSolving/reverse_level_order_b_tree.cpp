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

vector<int> reversed_level_order_traversal(Node* root){
    queue<Node*> q;
    vector<int> nodes;
    if(root == NULL) return nodes;
    q.push(root);

    while(!q.empty()){
        Node* curr = q.front();
        q.pop();

        nodes.push_back(curr->val);
        if(curr->left){
            q.push(curr->left);
        }
        if(curr->right){
            q.push(curr->right);
        }
    }

    reverse(nodes.begin(), nodes.end());
    return nodes;
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


    for(int i : reversed_level_order_traversal(root)){
        cout << i << " ";
    }

    return 0;
}
