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

int getNodeLevel(Node* root, int x){
    queue<pair<Node*, int>> q; //using Pair(STL) to store node with it's level
    //q.push(make_pair(root, 1));
    q.push({root, 1}); //we can also make pair in this way

    while(!q.empty()){
        pair<Node*, int> curr = q.front();
        Node* node = curr.first;
        int level = curr.second;
        q.pop();

        if(node->val == x){
            return level;
        }

        if(node->left){
            q.push({node->left, level+1});
        }
        if(node->right){
            q.push({node->right, level+1});
        }
    }


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

    cout << getNodeLevel(root, 80);

    return 0;
}
