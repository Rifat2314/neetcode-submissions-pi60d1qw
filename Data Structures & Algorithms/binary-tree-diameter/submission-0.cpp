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

    int dfs(int& result,TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        int left = dfs(result,root->left);
        int right = dfs(result,root->right);
        result = max(result,left+right);
        return 1+max(left,right);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int result = 0;
        dfs(result,root);
        return result;
    }
};
