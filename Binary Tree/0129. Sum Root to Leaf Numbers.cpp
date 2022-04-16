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
    int ans =0;
    void sum(TreeNode* root, int curr){
        curr = curr*10 + root->val;
        if(root->left){
            sum(root->left,curr);
        }
        if(root->right){
            sum(root->right,curr);
        }
        if(!root->left && !root->right){
            ans += curr;
        }
        
    }
    int sumNumbers(TreeNode* root) {
        sum(root,0);
        return ans;
        
        
    }
};
