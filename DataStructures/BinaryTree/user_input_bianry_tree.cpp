#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        this->val = x;
        this->left = NULL;
        this->right = NULL;
    }
};

TreeNode* createBinaryTree(){
    cout << "Enter root value: ";
    int val;
    cin >> val;

    if(val == -1) return NULL;

    TreeNode* root = new TreeNode(val);
    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        TreeNode* curr = q.front();
        q.pop();

         int leftVal, rightVal;

         cout << "Enter the left child of " << curr->val << ":";
         cin >> leftVal;
         if(leftVal != -1){
            curr->left = new TreeNode(leftVal);
            q.push(curr->left);
         }

           cout << "Enter the right child of " << curr->val << ":";
         cin >> rightVal;
         if(rightVal != -1){
            curr->right = new TreeNode(rightVal);
            q.push(curr->right);
         }
    }

    return root;

}

void levelOrderTraversal(TreeNode* root){
    queue<TreeNode*> q;

     if(root == NULL) return;

     q.push(root);

     while(!q.empty()){
        TreeNode* curr = q.front();
        q.pop();

        cout << curr->val << " ";
        if(curr->left) q.push(curr->left);
        if(curr->right) q.push(curr->right);
     }
}
int main(){
    levelOrderTraversal(createBinaryTree());
    return 0;
}
