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
    int maxi=INT_MIN;
    int maxPathSum(TreeNode* root) {
        maxPathHelper(root);
        return maxi;
        
    }
    int maxPathHelper(TreeNode* root){
        if(root==nullptr) return 0;
        int left= max(0,maxPathHelper(root->left));
        int right=max(0,maxPathHelper(root->right));
        maxi=max(maxi,left+right+root->val);
        return max(left,right)+root->val;

    }
};