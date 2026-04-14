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
    bool isSubtree(TreeNode* x, TreeNode* q) {
        queue<TreeNode*>q1;
        q1.push(x);
        while(!q1.empty()){
            for(int i=q1.size();i>0;i--){
                TreeNode* node1 = q1.front();
                q1.pop();
                if(node1->val==q->val){
                    if(bfs(node1,q)){
                        return true;
                    }
                }
                if(node1->left)  q1.push(node1->left);
                if(node1->right) q1.push(node1->right);
            }
        }
        return false;
    }
    bool bfs(TreeNode* p, TreeNode* q){
        queue<TreeNode*>q1;
        queue<TreeNode*>q2;
        q1.push(p);
        q2.push(q);
        bool flag = true;
        while(!q1.empty() && !q2.empty()){
            for(int i=q1.size();i>0;i--){
                TreeNode* node1 = q1.front();
                TreeNode* node2 = q2.front();
                q1.pop();
                q2.pop();
                if(!node1 && !node2)continue;
                if(!node1 || !node2 || node1->val!=node2->val){
                    flag = false;
                    break;
                }
                q1.push(node1->left);
                q1.push(node1->right);
                q2.push(node2->left);
                q2.push(node2->right);
            }
            if(!flag)break;
        }
        return flag;
    }
};
