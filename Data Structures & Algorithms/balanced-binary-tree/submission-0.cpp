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

    int dfs(TreeNode* root,bool& flag){
        if(root==nullptr){
            return 0;
        }
        int left=0,right=0;
        if(root->left){
            left = dfs(root->left,flag);
        }
        if(root->right){
            right = dfs(root->right,flag);
        }
        if(abs(right-left)>1){
            flag = false;
        }
        return 1+max(left,right);
    }

    bool isBalanced(TreeNode* root) {
        bool flag = true;
        dfs(root,flag);  
        return flag; 
    }
};
