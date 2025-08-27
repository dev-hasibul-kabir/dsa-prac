/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    // find minimum node in subtree
    TreeNode* findMin(TreeNode* root) {
     while (root && root->left) {
         root = root->left;
      }
      return root;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root) return root;

    if (key < root->val) {
        root->left = deleteNode(root->left, key);
    } 
    else if (key > root->val) {
        root->right = deleteNode(root->right, key);
    } else{
        //found value in the bst
        if(!root->left && !root->right){
            delete root;
            return NULL;
        }else if(!root->left){
            TreeNode* temp = root->right;
            delete root;
            return temp;
        }else if(!root->right){
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }else{
            TreeNode* temp = root->right;
             TreeNode* succ = findMin(root->right);
             succ->left = root->left;

             return temp;
        }
    }

    return root;
        
    }
};