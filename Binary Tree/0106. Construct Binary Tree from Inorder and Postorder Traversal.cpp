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
    unordered_map<int,int> mp;
    TreeNode* bT(vector<int> &postorder,vector<int> &inorder, int start,int end,int &idx){
        if(start>end){
            return NULL;
        }
        int curr = postorder[idx--];
        TreeNode* node = new TreeNode(curr);
        int pos = mp[curr];
        
        node->right = bT(postorder,inorder,pos+1,end,idx);
        node->left = bT(postorder,inorder,start,pos-1,idx);
        return node;
        
        
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]] = i;
        }
        int idx = inorder.size()-1;
        TreeNode* root = bT(postorder,inorder,0,inorder.size()-1,idx);
        return root;
    }
};
