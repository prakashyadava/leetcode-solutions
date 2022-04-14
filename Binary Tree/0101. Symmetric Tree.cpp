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
    bool check(TreeNode* tmp1 , TreeNode* tmp2){
        if(tmp1==NULL && tmp2==NULL) return true;
        if(tmp1==NULL || tmp2==NULL || tmp1->val!=tmp2->val)return false;
        return check(tmp1->left,tmp2->right) && check(tmp1->right,tmp2->left);
    }
    bool isSymmetric(TreeNode* root) {
        return check(root->left, root->right);
    }
};
