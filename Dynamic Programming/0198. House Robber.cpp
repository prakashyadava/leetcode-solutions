class Solution {
public:
    int solve(vector<int>nums,int i,int n,vector<int> &dp){
        if(i>=n){
            return 0;
        }
        if(dp[i]!=-1)
            return dp[i];
        return dp[i] = max(nums[i]+ solve(nums,i+2,n,dp),solve(nums,i+1,n,dp));
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size()+1,-1);
        return solve(nums,0,nums.size(),dp);
    }
};
