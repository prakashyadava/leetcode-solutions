class Solution {
public:
    void powerSet(vector<int>&nums,int ind,vector<vector<int>> &ans,int n,vector<int>&temp){
        if(ind==n){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[ind]);
        powerSet(nums,ind+1,ans,n,temp);
        temp.pop_back();
        powerSet(nums,ind+1,ans,n,temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        powerSet(nums,0,ans,nums.size(),temp);
        return ans;
    }
};
