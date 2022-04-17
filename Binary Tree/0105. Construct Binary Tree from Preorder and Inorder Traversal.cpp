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
    
    TreeNode* bT(vector<int> &preorder,vector<int> &inorder,int start,int end,int &idx){
        
        if(start>end){
            return NULL;
        }
        int curr = preorder[idx++];
        
        TreeNode* node = new TreeNode(curr);
        if(start==end){
            return node;
        }
        int pos = mp[curr];
        node->left = bT(preorder,inorder,start,pos-1,idx);
        node->right = bT(preorder,inorder,pos+1,end,idx);
        return node;
        
        
        
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        // int idx{},size=inorder.size();
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]] = i;
        }
        int idx =0;
        TreeNode* hb = bT(preorder,inorder,0,preorder.size()-1,idx);
        return hb;
    }
};
