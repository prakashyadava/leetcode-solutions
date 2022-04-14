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
    set<int> st;
    void chk(TreeNode* root){
        if(root!=NULL){
            st.insert(root->val);
            chk(root->left);
            chk(root->right);
        }
    }
    bool isUnivalTree(TreeNode* root) {
        chk(root);
        if(st.size()==1)return true;
        return false;
    }
};
