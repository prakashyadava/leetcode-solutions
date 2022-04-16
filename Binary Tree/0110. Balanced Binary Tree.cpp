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
    int height(TreeNode* root){
        if(root!=NULL){
            int lh = height(root->left);
            int rh = height(root->right);
            return max(lh,rh)+1;
        }
        return 0;
    }
    bool isBalanced(TreeNode* root) {
        if(root!=NULL){
            if(!isBalanced(root->left)){
                return false;
            }
            if(!isBalanced(root->right)){
                return false;
            }
            int lh = height(root->left);
            int rh = height(root->right);
            if(abs(lh-rh)<=1){
                return true;
            }else{
                return false;
            }
        }
        return true;
    }
};
