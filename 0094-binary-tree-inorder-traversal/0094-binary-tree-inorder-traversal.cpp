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
    void getInOrderTraversal(TreeNode* root, vector<int> &result){
        if(root == NULL) return;

        getInOrderTraversal(root->left, result);
        result.push_back(root->val);
        getInOrderTraversal(root->right, result);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result; 
        getInOrderTraversal(root, result);
        return result;
    }
};