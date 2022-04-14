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
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int> tmp;
        if(root!=NULL){
            queue<TreeNode*> q;
            q.push(root);
            q.push(NULL);
            while(!q.empty()){
                
                TreeNode* node = q.front();
                
                q.pop();
                if(node!=NULL){
                    tmp.push_back(node->val);
                    if(node->left){
                        q.push(node->left);
                    }if(node->right){
                        q.push(node->right);
                    }
                }
                else if(!q.empty()){
                    ans.push_back(tmp);
                    tmp.erase(tmp.begin(),tmp.end());
                    q.push(NULL);
                }
            }
            while(!q.empty()){
                if(q.front()!=NULL){
                    tmp.push_back(q.front()->val);
                    q.pop();
                }
                q.pop();
            }
        }
        if(tmp.size()!=0)
        ans.push_back(tmp);
        return ans;
        
    }
};
