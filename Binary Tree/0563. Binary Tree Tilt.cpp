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
    int findSum(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        return findSum(root->left) + findSum(root->right) + root->val;
    }
    int findTilt(TreeNode* root) {
        int ans =0;
        if(root!=NULL){
            queue<TreeNode*> q;
            q.push(root);
            while(q.size()){
                TreeNode* node = q.front();
                q.pop();
                    ans += abs(findSum(node->left)-findSum(node->right));
                    if(node->left){
                        q.push(node->left);
                    }
                    if(node->right){
                        q.push(node->right);
                    }
                
            }
        }
        return ans;
        
    }
};
