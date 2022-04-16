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
    int calDia(TreeNode* root,int *height){
        if(root!=NULL){
            int lh = 0,rh = 0;
            int lDia = calDia(root->left,&lh);
            int rDia = calDia(root->right,&rh);
            int currDia = lh+rh;
            *height = max(lh,rh)+1;
            
            return max(currDia,max(lDia,rDia));
            
        }
        return 0;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        int height = 0;
        return calDia(root,&height);
    }
};
