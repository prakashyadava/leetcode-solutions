class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int>&candidates,int target, int i ,int n,int sum,vector<int> &temp){
        if(i>=n)
            return;
        if(sum>target)
            return;
        if(sum==target){
            ans.push_back(temp);
            // temp.clear();
            return;
        }
        
        solve(candidates,target,i+1,n,sum,temp);
        temp.push_back(candidates[i]);
        solve(candidates,target,i,n,sum+candidates[i],temp);
        temp.pop_back();
        // solve(candidates,target,i+1,n,sum+candidates[i],temp);
        
        
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
            
        vector<int> temp;
        solve(candidates,target,0,candidates.size(),0,temp);
        return ans;
        
    }
};
