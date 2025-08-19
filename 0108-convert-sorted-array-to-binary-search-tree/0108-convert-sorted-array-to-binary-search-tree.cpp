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
    TreeNode* convertToBST(vector<int>& nums, int l, int r){
        if(l > r) return NULL;
        int mid = (l+r)/2;
        TreeNode* root = new TreeNode(nums[mid]);

        TreeNode* leftChild = convertToBST(nums, l, mid-1);
        TreeNode* rightChild = convertToBST(nums, mid+1, r);

        root->left = leftChild;
        root->right = rightChild;

        return root;

    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int l, r, sz;
        l = 0;
        sz = nums.size();
        r = sz - 1;

        // passing array, left index, right index
         return  convertToBST(nums, l, r);                          
    }
};