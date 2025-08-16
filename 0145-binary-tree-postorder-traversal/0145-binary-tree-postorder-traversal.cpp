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
    void getPostOrderTraversedList(TreeNode* root, vector<int> &list){
        if(root == NULL) return;

        getPostOrderTraversedList(root->left, list);
        getPostOrderTraversedList(root->right, list);

        list.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> list;
        getPostOrderTraversedList(root, list);
        return list;
    }
};